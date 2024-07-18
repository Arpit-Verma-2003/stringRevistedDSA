class Solution {
  public:
//   first sort d(to return in lexographic order)
//  if d[i] length is greater than maxi length , then check subsequence
// if subsequence  , hence string can be made , update maxi & return ;
    bool isSubsequence(string s1,string s2){
        int i = 0;
        int j = 0;
        int m = s1.length();
        int n = s2.length();
        while(i<m&&j<n){
            if(s1[i]==s2[j]){
                i++;
                j++;
                continue;
            }
            j++;
        }
        if(i==m) return true;
        return false;
    }
    string findLongestWord(string s, vector<string> d) {
        // code here
        // initial thought - 
        // unordered_map<char,int> mp;
        // string maxi ="";
        // for(int i=0;i<s.length();i++){
        //     mp[s[i]]++;
        // }
        // unordered_map<char,int>duplicate = mp;
        // for(int i=0;i<d.size();i++){
        //     for(int j=0;j<d[i].length();j++){
        //         if(d[i].length()<maxi.length()) break;
        //         if(mp[d[i][j]]>0){
        //             mp[d[i][j]]--;
        //         }
        //         else{
        //             break;
        //         }
        //         if(j==d[i].length()-1)maxi = d[i];
        //     }
        //     mp = duplicate;
        // }
        // return maxi;
        // 2nd thought -
        // use subsequence
        string maxi = "";
        sort(d.begin(),d.end());
        for(int i=0;i<d.size();i++){
            if(d[i].length()>maxi.length()){
                if(isSubsequence(d[i],s)) maxi = d[i];
            }
        }
        return maxi;
    }
};
