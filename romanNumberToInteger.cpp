
// logic  - make a mapping from char to int & store all roman values
// run loop , at each point check if ith roman value < i+1th value. 
// if yes subtract ith value from result or add to it.

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        map<char,int>mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int n = str.length();
        int res = 0;
        for(int i=0;i<str.length();i++){
            if(i<n-1&&mp[str[i]]<mp[str[i+1]]) res-= mp[str[i]];
            else res+=mp[str[i]];
        }
        return res;
    }
};
