// Given two numbers 'N' and 'S' , find the largest number that can be formed with 'N' digits and whose sum of digits should be equals to 'S'. Return -1 if it is not possible.

// Example 1:

// Input: N = 2, S = 9
// Output: 90
// Explaination: It is the biggest number 
// with sum of digits equals to 9.
class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string ans ="";
        if(S>9*N|| (N!=1 && S==0))
        return "-1";
        int a = S/9; 
        int b = S%9;
        for(int i = 0; i<a; i++){
            ans = ans+"9";
        }
        if(a<N){
            ans = ans+to_string(b); // converting int to string by using to_string()
             for(int i = 0; i<N-a-1; i++){
                  ans = ans+"0";
             }
        }
        return ans;
    }
};