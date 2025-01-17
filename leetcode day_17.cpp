
/*
 * LeetCode Problem: Neighboring Bitwise XOR
 * Problem Number: 2683
 * Difficulty: Easy 
 * Problem Link: https://leetcode.com/problems/neighboring-bitwise-xor/description/
 */

// leetcode solution 

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {

        int res = 0;
        for(int ele: derived)
        res ^= ele;

        return res == 0;
    }
};
