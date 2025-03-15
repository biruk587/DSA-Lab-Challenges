//
// Created by Biruk on 3/15/2025.
//

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Create a hash map to store the value and its index
        std::unordered_map<int, int> map;

        // Loop through the vector of numbers
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];  // Calculate the complement

            // Check if the complement exists in the map
            if (map.find(complement) != map.end()) {
                // If it does, return the indices of the two numbers
                return {map[complement], i};
            }

            // Otherwise, store the current number and its index in the map
            map[nums[i]] = i;
        }

        // If no solution is found, return an empty vector (though the Question guarantees one solution)
        return {};
    }
};