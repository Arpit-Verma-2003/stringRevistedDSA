class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    // logic - 
    // intialize 2 mappings
    // each time check if mapping already initialized then 
    // check shouldn't be changed
    // if not initialized then initialize.
    // mapping 2 used to check if char of str2 is not linked 2 
    // different str 1 char.
    
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        // if length different then directly return false;
        if(str1.length()!=str2.length()) return false;
        // create 2 mappings
        map<char,char> mp1;
        map<char,char> mp2;
        for(int i =0;i<str1.length();i++){
            // if mapping already exits , check if for same char
            if(mp1.find(str1[i])!=mp1.end()){
                if(mp1[str1[i]]!=str2[i]) return false;
            }else{
                // check if char of str2 not linked with any other
                if(mp2.find(str2[i])!=mp2.end()){
                    if(mp2[str2[i]]!=str1[i]) return false;
                }
                // if not then initialize the mapping
                else{
                    mp1[str1[i]] = str2[i];
                    mp2[str2[i]] = str1[i];
                }
            }
        }
        return true;
    }
};
