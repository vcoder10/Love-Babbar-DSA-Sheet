/*

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?

*/
void moveZeroes(vector<int>& nums) {
        int count=0;
        int temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp=nums[i];
                nums[i]=nums[count];
                nums[count]=temp;
                count++;
            }
        }
    }
/*
story
ek line me army khadi hai tum ho captian aur tumhe area ke according line me khada kerwana hai
waha pe do jagah se hai ek punjab dusra bihar
bihar se jo belong kerte hai tumhe unhe pahle rakhna hai
kya kroge?
hmm suru se count krege agar bihar ka hoga to ushe starting se jo pahle punjab ka hai ushse ushka jagah adla badli ker dege
>>1>> pahle tum bihar ka army kaha hai ush location ko pta kiye
>>2>> phir suru se bihar kha tak hai ush locaton ko record kiye
>>3>> finally ush dono location pe khada army ko swap ker diye

*/
// method 2 sort bhi ker skte the
