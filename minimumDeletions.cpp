//User function template for C++

class Solution{
  public:
//   logic - to find the min deletions, find largest palindromic 
//  subsequence , then subtract the size of string to size of lps.

// lps using dp
// largest palindromic subsequence size - 
    // int lps(string s, int start, int end,vector<vector<int>>&dp){
    //     if(start>end) return 0;
    //     if(start==end) return 1;
    //     if(dp[start][end]!=-1) return dp[start][end];
    //     if(s[start]==s[end]) return dp[start][end] = 2 + lps(s,start+1,end-1,dp);
    //     return dp[start][end] = max(lps(s,start+1,end,dp),lps(s,start,end-1,dp));
    // }
// lps using bottom up dp to save time complexity.
// find the longest common subsequence by sending a string& reverse string
// to find longest palindrome
    int lps(string s1, string s2){
        int n = s1.length();
        int m = s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        // base (using 0 as -1 & so on)
        for(int i=0;i<n;i++) dp[i][0] = 0;
        for(int j=0;j<m;j++) dp[0][j] = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
        
    }
    int minimumNumberOfDeletions(string s) { 
        // code here
        string s1 = s;
        reverse(s.begin(),s.end());
        int l = lps(s1,s);
        // int l = lps(s,0,s.length()-1,dp);
        return s1.length()-l;
    } 
};
