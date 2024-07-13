#include<bits/stdc++.h>
class Solution
{
    // logic - 
    // convert the string into lowercase using stl library
    // use a vector of 26 size to count the freq of each character
    // check if any value in vector less or = to 0 , then return false
    // or else return true.
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<int>v(26,0);
        for(int i=0;i<s.length();i++){
            if('a'<=s[i]&&s[i]<='z') v[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v[i]<=0) return false;
        }
        return true;
    }
};
