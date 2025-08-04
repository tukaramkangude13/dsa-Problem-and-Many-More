#include<iostream>
using namspce std;
int solve(int n,int x,int y,int z){
    if(n==0){
        return 0;
    }
    int a=INT_MIN,b=INT_MIN,c=INT_MIN;
    if(n>=x){
        a=solve(n-x,x,y,z);
    }
    if(n>=y){
        b=solve(n-y,x,y,z);
    }
    if(n>=z){
        c=solve(n-z,x,y,z);
    }
    return 1+max(a,max(b,c));
}
int main(){
    int n=7;
    int x=5;
    int y=2;
    int z=2;
    int ans=solve(n,x,y,z);
    cout<<ans;
// }

// Cracking Leetcode problems fast during coding interviews = Knowing & recognizing the patterns. 

// Here’s a DSA patterns cheatsheet that will help you solve 90-95% questions that will come your way. 

// For Graph questions: 
// ↳ Apply DFS/BFS to traverse the graph. 
// ↳ Use adjacency lists for efficient representation. 
// ↳ Focus on detecting cycles/shortest paths depending on the problem.

// For Sliding Window problems: 
// ↳ Adjust the window size dynamically based on constraints. 
// ↳ Use two pointers to track the current window. 
// ↳ Track sums or counts within the window to optimize results.

// For Linked Lists: 
// ↳ Use Two Pointers to detect cycles & find the middle node. 
// ↳ Reverse the list in-place by pointer manipulation. 

// For Maximum/Minimum Subarrays: 
// ↳ Use Dynamic Programming to track the optimal subarray. 
// ↳ Maintain a running sum and compare with current maxi/mini.
// ↳ Divide the problem into subproblems to simplify calculations.

// For In-Place operations: 
// ↳ Swap corresponding values to reorder the array. 
// ↳ Modify the array without using extra space by storing values cleverly. 
// ↳ Carefully manage index positions during swapping to avoid overwriting.

// For Top/Least K elements: 
// ↳ Use Heaps to keep track of the top/least K elements efficiently. 
// ↳ QuickSelect can help when sorting isn’t necessary. 
// ↳ Maintain a limited window of values for optimal memory usage.

// For Permutations/Subsets: 
// ↳ Apply Backtracking to explore all possible combinations. 
// ↳ Prune paths that won’t lead to valid solutions early. 
// ↳ Track the current state and revert changes after each recursive call.

// For Common Strings problems: 
// ↳ Use a Map/Trie to store and search for prefixes or entire strings. 
// ↳ Count frequencies to detect patterns or duplicates. 

// For Recursion-Banned problems: 
// ↳ Use Stack to simulate recursive calls iteratively. 
// ↳ Track the state manually to mimic the recursive behavior. 
// ↳ Push and pop values carefully to ensure you’re following the intended logic.

// For Sorted Arrays: 
// ↳ Use Binary Search to quickly narrow down the target range. 
// ↳ Use sorted properties to optimize space/time complexity.
// ↳ Use Two Pointers for sums or pairs. 

// For Tree problems: 
// ↳ Traverse using DFS for deep exploration or BFS for level-wise traversal. 
// ↳ Keep track of visited nodes to avoid infinite loops. 
// ↳ Handle edge cases like unbalanced trees or missing nodes.

// Else: 
// ↳ Use Maps/Sets for O(1) lookups and efficient space management. 
// ↳ Sorting can simplify problems to O(nlogn) time. 

// --
// P.S: If you’re currently preparing for DSA, HLD, and LLD.
// Check out my one-stop resource guide on Topmate: 
// → https://lnkd.in/eYHSjbys
//  ( 380+ students are already using it)
// (Running on 25% discount for the first 25 people, I am celebrating hitting 100k)

// This guide will help you with:
// - DSA, HLD, and LLD for interviews
// - good resources that I used personally
// - lots of problems and case studies for DSA and system design




//                 subset_sum(5, index=0)
//                 /              \
//     Include 2 (target = 3)      Exclude 2 (target = 5)
//          subset_sum(3, index=1)          subset_sum(5, index=1)
//          /            \                  /            \
// Include 3 (0)      Exclude 3 (3)    Include 3 (2)  Exclude 3 (5)
// subset_sum(0)     subset_sum(3)    subset_sum(2)  subset_sum(5)
//  (Base: true)      (Base: false)    (Base: false)   (Base: false)


void findSubsets(vector<int>& nums, int index, vector<int>& current) {
    if (index == nums.size()) { // Base case
        for (int x : current) cout << x << " "; // Print the current subset
        cout << endl;
        return;
    }

    // Include the current element
    current.push_back(nums[index]);
    findSubsets(nums, index + 1, current);
    current.pop_back(); // Backtrack

    // Exclude the current element
    findSubsets(nums, index + 1, current);
}
                                       []   [Start - Initial State]
                                     /    \
                                Include 1   Exclude 1
                             [Current = [1]]  [Current = []]
                              /        \              /        \
                Include 2 /          \ Exclude 2   Include 2 /   \ Exclude 2
                     [1, 2]             [1]         [2]         []
                      /    \              /    \       /    \
           Base case reached     Base case reached   Base case reached
             (Print: [1, 2])      (Backtrack: pop 2)   (Print: [1])   (Backtrack: pop 2)
                                 Print: [1]               Print: []
                          (Backtrack: pop 1)       (Backtrack: pop 1)
                        [Current = []]         [Current = []]
                          /     \                /      \
                Include 2 /        \ Exclude 2   Include 2 /   \ Exclude 2
                    [2]                 []         [2]         []
                     /  \               /    \      /    \
            Base case reached   Base case reached Base case reached
             (Print: [2])        (Backtrack: pop 2) (Print: [2])   (Backtrack: pop 2)
                                    Print: []         Print: []
                          (Backtrack: pop 1)       (Backtrack: pop 1)
                               Print: []             Print: [] 
