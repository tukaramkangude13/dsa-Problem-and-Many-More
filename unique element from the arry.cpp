#include<iostream>
using namespace std;

int main() {
    int nums[] = {1, 1, 2, 2, 3, 3, 4, 5, 5};
  //  int size = sizeof(nums) / sizeof(nums[0]);
    int ans = -1;  // Initialize with a default value

    for (int i = 0; i < nums.size(); i++) {
        int c = 0;  // Reset counter for each element
        for (int j = 0; j < nums.size(); j++) {
            if (i != j && nums[i] == nums[j]) {
                c++;
            }
        }
        if (c == 0) {
            ans = nums[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
