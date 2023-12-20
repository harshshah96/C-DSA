#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int longestGoodSubarray(vector<int>& nums, int k) {
    unordered_map<int, int> frequencyMap;
    int left = 0, maxLength = 0;

    for (int right = 0; right < nums.size(); ++right) {
        frequencyMap[nums[right]]++;

        while (frequencyMap.size() > k) {
            frequencyMap[nums[left]]--;
            if (frequencyMap[nums[left]] == 0) {
                frequencyMap.erase(nums[left]);
            }
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 1, 2, 3, 1, 2};
    int k1 = 2;
    cout << "Output 1: " << longestGoodSubarray(nums1, k1) << endl;

    vector<int> nums2 = {1, 2, 1, 2, 1, 2, 1, 2};
    int k2 = 1;
    cout << "Output 2: " << longestGoodSubarray(nums2, k2) << endl;

    vector<int> nums3 = {5, 5, 5, 5, 5, 5, 5};
    int k3 = 4;
    cout << "Output 3: " << longestGoodSubarray(nums3, k3) << endl;

    return 0;
}
