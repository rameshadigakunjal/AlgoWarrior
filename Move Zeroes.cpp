/*283. Move Zeroes
Solved
Easy
Topics
Companies
Hint
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writePos = 0;  // Position to write next non-zero element
        
        // First pass: move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[writePos] = nums[i];
                writePos++;
            }
        }
        
        // Second pass: fill the remaining positions with zeros
        for (int i = writePos; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
