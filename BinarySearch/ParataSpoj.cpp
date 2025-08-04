#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ispossible(vector<int>& cooksRank, int np, int mid) {
    int currP = 0;
    for (int i = 0; i < cooksRank.size(); i++) {
        int r = cooksRank[i], j = 1;
        int timetaken = 0;

        // Calculate the time taken by this cook for increasing number of tasks
        while (timetaken + j * r <= mid) {
            timetaken += j * r;  // Add time for the j-th task
            j++;  // Next task will take j times longer
            currP++;  // Increment the total number of tasks completed
            if (currP >= np) return true;
        }
    }
    return false;
}

int mintimecomplete(vector<int>& cooksRank, int np) {
    int s = 0;
    int highrank = *max_element(cooksRank.begin(), cooksRank.end());
    // e should be the total time to complete all tasks by the slowest cook with the highest rank
    int e = highrank * (np * (np + 1)) / 2;

    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (ispossible(cooksRank, np, mid)) {
            ans = mid;
            e = mid - 1;  // Try for a smaller time to minimize
        } else {
            s = mid + 1;  // Try a larger time
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int np, nc;
        cin >> np >> nc;
        vector<int> cooksRank(nc);
        for (int i = 0; i < nc; i++) {
            cin >> cooksRank[i];
        }
        
        cout << "Minimum time for completion: " << mintimecomplete(cooksRank, np) << endl;
    }
    return 0;
}
