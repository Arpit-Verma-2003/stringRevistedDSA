
class Solution {
  public:
//   logic - we take 3 counters
// c0 - to count no. of 0's
// c1 - to count no. of 1's
// c2 - to count no. of 2's
// each time , we insert them in a map with a string
// c1-c0 & c2-c1
// if future , whereever this repeats(hence already present in map)
// hence no. of c0,c1,c2 increased or decreased are same , hence an ans;
// so add the previous value of the map & do mp++;
    long long getSubstringWithEqual012(string s) {
        // code here
        int c0=0,c1=0,c2=0;
        string temp = to_string(c1-c0) + "#" + to_string(c2-c1);
        map<string,int> mp;
        mp[temp] = 1;
        long long ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') c0++;
            else if(s[i]=='1') c1++;
            else c2++;
            temp = to_string(c1-c0) + "#" + to_string(c2-c1);
            if(mp.find(temp)!=mp.end()){
                ans+=mp[temp];
                mp[temp]++;
            }
            else mp[temp] = 1;
        }
        return ans;
    }
};
