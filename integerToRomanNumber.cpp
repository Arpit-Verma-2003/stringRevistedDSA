//User function template for C++

class Solution{
  public:
  
//   logic - make a roman symbol & their corresponding values vectors with one less
//   than.
//   keep subtracting the number from highest roman value if greater
  
    string convertToRoman(int n) {
        // code here
        vector<string> rom = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> romVal = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans = "";
        for(int i=0;i<13;i++){
            while(n>=romVal[i]){
                n-=romVal[i];
                ans+=rom[i];
            }
        }
        return ans;
    }
};
