class Solution
{
    public:
    //Function to reverse words in a given string.
    
    // logic - run a loop from end , keep word & ans string
    // keep adding character to word (s[i]+w) until "." .
    // as . comes, add word in the the ans string & reset word.
    
    string reverseWords(string s) 
    { 
        // code here 
        string res = "";
        string word = "";
        int n = s.size();
        for(int i=n-1;i>=0;--i){
            if(s[i]=='.'){
                res+=word;
                res+=".";
                word="";
            }
            else{
                word = s[i] + word;
            }
        }
        res+=word;
        return res;
    } 
};
