class Solution{
    // logic - find longest subsequence b/w reversed & original string
    // this will give you the number of max matching chars
    // ans = total length of original string - matching chars max
  public:
    int lcs(int i,int j,string& str,string& rstr,vector<vector<int>>&dp){
        if(i==str.length()||j==rstr.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(str[i]==rstr[j]) return dp[i][j] = 1+lcs(i+1,j+1,str,rstr,dp);
        int choice1 = lcs(i+1,j,str,rstr,dp);
        int choice2 = lcs(i,j+1,str,rstr,dp);
        return dp[i][j] = max(choice1,choice2);
    }
    int countMin(string str){
    //complete the function here
        string rstr = str;
        reverse(rstr.begin(),rstr.end());
        vector<vector<int>> dp(501,vector<int>(501,-1));
        int l = lcs(0,0,str,rstr,dp);
        return str.length()-l;
    }
};
