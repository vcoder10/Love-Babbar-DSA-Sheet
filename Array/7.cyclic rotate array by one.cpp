/*

Cyclically rotate an array by one
BasicAccuracy: 64.05%Submissions: 100k+Points: 1
Given an array, rotate the array by one position in clock-wise direction.
 

Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
 

Example 2:

Input:
N = 8
A[] = {9, 8, 7, 6, 4, 2, 1, 3}
Output:
3 9 8 7 6 4 2 1
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function rotate() which takes the array A[] and its size N as inputs and modify the array in place.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

*/
void rotate(int arr[], int n)
{
    int last=arr[n-1];
    for(int i=n-1;i>0;i--)
        arr[i]=arr[i-1];
    arr[0]=last;
}
/*
ye ek acha question hai if it ask to shift array by d place
lets do it.

it can be solved by  method
METHOD 1
shift by one ko d time repeat ker do

METHOD 2
store last of k element to new array
shift initial array to k place
now update stored arry to initial position

METHOD 3
void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        reverse(nums.begin(),nums.end());//reverse the whole array
        reverse(nums.begin(),nums.begin()+k);//then reverse first K array
        reverse(nums.begin()+k,nums.end());//then remaining elements of the array
    }
  reverse in any order
 
 METHOD 4
 void rotate(vector& nums, int k) {

    vector<int> temp(nums.size());
    
    for(int i = 0;i < nums.size(); i++) {
        
        temp[(i+k)%nums.size()] = nums[i];
    }
    nums = temp;
}
takes extra memory space of n


