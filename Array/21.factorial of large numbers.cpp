/*

Factorials of large numbers
MediumAccuracy: 51.61%Submissions: 60276Points: 4
Given an integer N, find its factorial.

Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120
Example 2:

Input: N = 10
Output: 3628800
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

Your Task:
You don't need to read input or print anything. Complete the function factorial() that takes integer N as input parameter and returns a list of integers denoting the digits that make up the factorial of N.


Expected Time Complexity : O(N2)
Expected Auxilliary Space : O(1)


Constraints:
1 ≤ N ≤ 1000

*/


vector<int>ans;
        ans.push_back(1);
        for(int j =2; j<= N;j++){
            int carr = 0;
            for(int i = 0; i < ans.size(); i++){
                int val = ans[i]*j+carr;
                ans[i] = val%10;
                carr = val/10;
            }
            while(carr != 0){
                ans.push_back(carr%10);
                carr /= 10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
