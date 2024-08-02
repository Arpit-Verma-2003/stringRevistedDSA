class Solution{
    // logic -  create a temp string , run loops till r
    // run another loop to traverse s.
    // if s[i] = 1 then add 10 to temp or else 01
    // set s to temp now
    // since after nth char in temp , no use to generate whole string
    // hence break after it reaches size with more than n
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        string temp = "";
        while(r>0){
            temp = "";
            r--;
            for(int i=0;i<s.length();i++){
                if(s[i]=='1') temp+= "10";
                else temp+="01";
                if(temp.length()>n) break;
            }
            s = temp;
        }
        return s[n];
    }
};
