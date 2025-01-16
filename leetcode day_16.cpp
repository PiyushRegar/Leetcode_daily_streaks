/*
 * LeetCode Problem: Bitwise XOR of All Pairings
 * Problem Number: 2425
 * Difficulty: [ Medium ]
 * Problem Link: https://leetcode.com/problems/bitwise-xor-of-all-pairings/description/
 */

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        int XOR = 0;

        if(m % 2 != 0){     //ODD
            for(int &num : nums2){
                XOR ^= num;
            }

        }

            if(n % 2 != 0){  //even
            for(int &num : nums1){
                XOR ^= num;
            }
        }

        return XOR;
    }
};
