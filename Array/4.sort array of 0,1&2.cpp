/*

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes an array arr and N as input parameters and sorts the array in-place.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2


*/
public:
    void sort012(int a[], int n)
    {
        // code here 
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                zero++;
            else if(a[i]==1)
                one++;
            else
                two++;
        }
        for(int i=0;i<zero;i++){
            a[i]=0;
        }
        for(int j=zero;j<zero+one;j++)
            a[j]=1;
        for(int k=zero+one;k<zero+one+two;k++)
            a[k]=2;
    }
