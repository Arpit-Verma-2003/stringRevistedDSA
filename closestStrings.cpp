//User function template for C++
class Solution{
public:	
	
// 	logic - 
// maintain 2 pointers cnt1 & cnt2 for maintaining record where 2 words lie
// if any word found again , check if the dist reduced so update.
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
		if(word1==word2) return 0;
		int closest = INT_MAX;
		int cnt1 = -1;
		int cnt2 = -1;
		for(int i=0;i<s.size();i++){
		    if(s[i]==word1) cnt1 = i;
		    else if(s[i]==word2) cnt2 = i;
		    if(cnt1!=-1&&cnt2!=-1) closest = min(closest,abs(cnt1-cnt2));
		}
		return closest;
	}
};
