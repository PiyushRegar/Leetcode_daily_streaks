/*
LeetCode Problem: Prefix Count
Problem Number: 2185

Description:
You are given an array of strings `words` and a string `pref`.
Return the number of strings in `words` that contain `pref` as a prefix.

A string `s` is a prefix of a string `t` if `t` can be written as `s + u`, 
where `u` is some string (possibly empty).

Example 1:
Input: words = ["pay", "attention", "practice", "attend"], pref = "at"
Output: 2
Explanation: The strings "attention" and "attend" have "at" as a prefix.

Example 2:
Input: words = ["leetcode", "lead", "leap", "loop"], pref = "le"
Output: 3
Explanation: The strings "leetcode", "lead", and "leap" have "le" as a prefix.

Approach:
This solution iterates through the list of words and checks if each word starts with 
the given prefix using a nested loop. It counts the number of words that satisfy the condition.
*/




// ---------------------------- here is my leetcode solution ---------------


class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;

        for(auto word: words){
            bool isPrefix = true;

            for(int i = 0; pref[i]; ++i){
                if(word[i] != pref[i]){
                    isPrefix = false;
                    break;
                }
            }

            if(isPrefix == true)
            count++;
        }

        return count;
    }
};
