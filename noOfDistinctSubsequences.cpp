//User function template for C++

class Solution{
  public:	
//   logic - 
// no. of distinct subsequences till ith index of string s = 
// 2*i(if non repeating) - coz 2 choices , either appear or not
// 2nd case , if repeated char , then choices = 2*i - jab vo pehele
// appear hua tha usse ek pehele wali ith no. of choices -  why
// coz before now , char x has already come at index j which was 
// multiplied by j-1 all combinations which are hence now repeated 
// so subtract those.
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	   // declare mod for very large output
	    const int MOD = 1e9 + 7;
	    vector<long>dp(s.length()+1,0);
	    dp[0] = 1; // for empty string
	    unordered_map<char,int> prevOcc;
	    for(int i=1;i<=s.length();i++){
	       // everytime subsequences double
	        dp[i] = dp[i-1]*2%MOD;
	        char ch = s[i-1];
	       // check if char already occurred
	        if(prevOcc.find(ch)!=prevOcc.end()){
	           // if yes than subtract prev occ -1 value
	            dp[i] = (dp[i] - dp[prevOcc[ch]-1]+MOD)%MOD;
	        }
	       // set current char in prev occured.
	        prevOcc[ch] = i;
	    }
	    return dp[s.length()];
	}
};
