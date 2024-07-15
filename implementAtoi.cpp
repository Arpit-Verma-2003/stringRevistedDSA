class Solution{
  public:
    /*You are required to complete this method */
    // logic - simply take each ith value from last of string
    // add & mulitply it by corresponding power of 10
    // keep *10 power each time.
    // also check if s[i] is not in [0,9] then return -1; 
    int atoi(string s) {
        //Your code here
        int ans = 0;
        int power = 1;
        for(int i=s.length()-1;i>=0;i--){
            if(i==0&&s[i]=='-'){
                ans = ans*-1;
                break;
            }
            if('0'<=s[i]&&s[i]<='9'){
                ans = ans+ (s[i]-'0')*power;
                power*=10;
            }
            else return -1;
        }
        return ans;
    }
};
