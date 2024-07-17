/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */

// logic - 
// step 1 - count if dot ==3 , if not return false;
// step 2 - count section ==4 , if not return false;
//        - for sections , make unordered_set & add strings from 0 to 255
//          each time check if num is present in set i.e from 0 to 255 , if 
//          yes increment counter(no. of sections). reset num at each '.'
//          check if counter == 4 then return true. or else return false;
class Solution {
    public:
        int isValid(string s) {
            // code here
            int dotCount = 0;
            int counter = 0;
            string num = "";
            // count number of dots
            for(int i=0;i<s.length();i++){
                if(s[i]=='.') dotCount++;
            }
            // check if dots = 3
            if(dotCount!=3) return false;
            // make string set , and add 0 to 255 string values
            unordered_set<string>st;
            for(int i=0;i<256;i++){
                st.insert(to_string(i));
            }
            // iterate over string 
            for(int i=0;i<s.length();i++){
                // if '.' , check num if present in st then counter++
                // reset num;
                if(s[i]=='.'){
                    if(st.find(num)!=st.end()) counter++;
                    num = "";
                }
                // or else add s[i] to num
                else{
                    num = num + s[i];
                }
            }
            // check after loop for last section
            if(st.find(num)!=st.end()) counter++;
            // check if counter = 4 return true or else return false;
            if(counter==4) return true;
            return false;
        }
};
