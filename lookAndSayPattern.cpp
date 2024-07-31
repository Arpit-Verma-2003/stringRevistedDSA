// for the pattern , we follow 2 loops , 1 for 1 to n
// 2nd for making the next string from 1 to str.length();
// after initializing the string to , we start iterating
// each time we check if string[i-1]==string[i], if yes increase count
// or if not then add the count to the temp string(new string) and add the 
// number which is string[j-1] or string[length-1] after loop
// set the str as temp as updated string, do it till n , then return n

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        string str = "1";
        for(int i=1;i<n;i++){
            string temp = "";
            int count = 1;
            for(int j=1;j<str.length();j++){
                if(str[j]==str[j-1]) count++;
                else{
                    temp+= to_string(count) + str[j-1];
                    count = 1;
                }
            }
            temp+= to_string(count) + str[str.length()-1];
            str = temp;
        }
        return str;
    }   
};
