#include<string>
class Solution{
  public:
  
// logic - 
// (a+b)% c = a%c+b%c
// hence we break down this , by each time adding a number
// doing %7 , if at last %7 ==0 , return true or else false;
// also same in power


    int isdivisible7(string num){
        //complete the function here
        long long res = 0;
        int power = 1;
        for(int i = num.length()-1;i>=0;--i){
            res = (res+((num[i]-'0')*power))%7;
            power = (power*10) %7;
        }
        if(res==0) return 1;
        return 0;
    }
};
