/*

Count Inversions
MediumAccuracy: 39.43%Submissions: 100k+Points: 4
Lamp
This problem is part of GFG SDE Sheet. Click here to view more.  

Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
Example 2:

Input: N = 5
arr[] = {2, 3, 4, 5, 6}
Output: 0
Explanation: As the sequence is already 
sorted so there is no inversion count.
Example 3:

Input: N = 3, arr[] = {10, 10, 10}
Output: 0
Explanation: As all the elements of array 
are same, so there is no inversion count.
Your Task:
You don't need to read input or print anything. Your task is to complete the function inversionCount() which takes the array arr[] and the size of the array as inputs and returns the inversion count of the given array.

Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 5*105
1 ≤ arr[i] ≤ 1018




*/
 public:
    long long int merge(long long  arr[],long long  l,long long  m,long long r)
    {
         // Your code here
         
        long long  n1=m-l+1;
         long long  n2=r-m;
        long long  left[n1];
        long long right[n2];
        
        for(int i=0;i<n1;i++)
            left[i]=arr[l+i];
        for(int i=0;i<n2;i++){
            right[i]=arr[m+1+i];
        }
        
        int c=l,i=0,j=0;
        long long int count=0;
        while(i<n1 && j< n2){
            if(left[i]<=right[j]){
                arr[c++]=left[i++];
                
            }
            else
            {
                arr[c++]=right[j++];
                count=count+n1-i;
                
            }
        }
      
        while(i<n1)
            arr[c++]=left[i++];
        while(j<n2)
            arr[c++]=right[j++];
        return count;
         
    }
    public:
    long long int mergeSort(long long arr[],long long l,long long r)
    {
        //code here
        long long int count=0;
        if(l<r){
            
            long long  mid=(l+r)/2;
            count+=mergeSort(arr,l,mid);
            count+=mergeSort(arr,mid+1,r);
            count+=merge(arr,l,mid,r);
        }
        
            return count;
    }
    
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        //brute force
        /*long long int ans=0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++)
                if(arr[i]>arr[j])
                    ans++;
        }
        return ans;*/
        
        
        long long int ans=mergeSort(arr,0,N-1);
        
        
    }
