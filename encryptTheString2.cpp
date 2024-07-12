class Solution {
  public:
  
// logic -   
//   count the no. of repeating words, then convert into hexadecimal
// using the function and append it into the result. also add the character.
// and finally reverse it.
  
//   logic for hexaDecimal conversion of count - 
// if less than 9 , then simply add 48 to get character value of no.
// else add 'a' to get character
    string hexaDecimal(int n){
        string num = "";
        while(n>0){
            //  'a' in ASCII is 97, so 'a' + (n%16 - 10)
            // converts the remainder to the corresponding hexadecimal character
            if(n%16>9){
                num+= 'a'+(n%16-10);
            }
            // If n % 16 is 9 or less, it corresponds to a decimal digit (0-9).
            // num += n % 16 + 48 converts the remainder to the
            // corresponding character by adding 48 
            else num+= 48 + n%16;
            n/= 16;
        }
        return num;
    }
    
    string encryptString(string s) {
        // code here
        int count = 1;
        string result = "";
        for(int i=1;i<s.length();i++){
            // if same , keep increasing count
            if(s[i]==s[i-1]) count++;
            else{
                // add in result string
                result += s[i-1] + hexaDecimal(count);
                // reset the count for next char
                count = 1;
            }
        }
        result+=s[s.length()-1] + hexaDecimal(count);
        // reverse the string
        reverse(result.begin(),result.end());
        return result;
    }
};
