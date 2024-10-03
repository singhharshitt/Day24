#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0, currentCount = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            currentCount++;
        } else {
            maxCount = max(maxCount, currentCount);
            currentCount = 0;
        }
    }

    // Final check to see if the last sequence was the longest
    maxCount = max(maxCount, currentCount);

    return maxCount;
}

int main() {
    int n;
    
    // Input number of elements
    cout << "Enter the number of elements in the binary array: ";
    cin >> n;

    vector<int> arr(n);

    // Input the elements of the array
    cout << "Enter the binary array (only 0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and print the maximum number of consecutive ones
    int result = findMaxConsecutiveOnes(arr);
    cout << "Maximum number of consecutive 1s: " << result << endl;

    return 0;
}
