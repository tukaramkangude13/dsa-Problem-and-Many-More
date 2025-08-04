#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numFriendRequests(vector<int>& ages) {
    // Sort ages to simplify the condition checking
    sort(ages.begin(), ages.end());

    int n = ages.size();
    int totalRequests = 0;

    for (int i = 0; i < n; ++i) {
        // If age[i] is too young, skip it (age <= 14 doesn't satisfy the minimum age condition)
        if (ages[i] <= 14) continue;

        // Use two pointers to count valid y's for x = ages[i]
        int lowerBound = 0.5 * ages[i] + 7; // Minimum age threshold
        int j = lower_bound(ages.begin(), ages.end(), lowerBound + 1) - ages.begin(); // First valid age index
        int k = upper_bound(ages.begin(), ages.end(), ages[i]) - ages.begin() - 1; // Last valid age index

        // Count valid friend requests for ages[i]
        totalRequests += max(0, k - j);
    }

    return totalRequests;
}

int main() {
    vector<int> ages1 = {16, 16};
    vector<int> ages2 = {16, 17, 18};
    vector<int> ages3 = {20, 30, 100, 110, 120};

    cout << "Example 1: " << numFriendRequests(ages1) << endl; // Output: 2
    cout << "Example 2: " << numFriendRequests(ages2) << endl; // Output: 2
    cout << "Example 3: " << numFriendRequests(ages3) << endl; // Output: 3

    return 0;
}
