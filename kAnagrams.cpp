class Solution {
  public:
//   logic - 
// make a freq map to map char to no. of freq of it
// reduce the freq from str2 if greater than 0
// if less , hence required to change char , hence reduce k
// if at last k less than 0 , then changes made are more than 0
// hence return false or else return true.


    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        // check if length is same
        if(str1.length()!=str2.length()) return false;
        unordered_map<char,int> mp;
        // first mark freq of each char of string 1
        for(char c:str1){
            mp[c]++;
        }
        // reduce freq by char of string 2 
        for(char c:str2){
            if(mp[c]>0) mp[c]--;
            else k--;
        }
        // return if k>=0 then true or else false
        return k>=0;
    }
};
