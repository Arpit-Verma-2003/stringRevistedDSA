class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    
    // logic - generate 2 strings - anti clockwised & clockwised
    // if any of them matches string 2 , then return true
    // for clockwise string , take substring from 2 to n  then 0 to 2
    // for anti-clockwise string , take substring last 2 , then 0 to n-2
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n1 = str1.length();
        int n2 = str2.length();
        if(n1!=n2) return 0;
        if(n1<=2) return str1==str2;
        string c = "",ac="";
        c = str1.substr(2,n1-1)+str1.substr(0,2);
        ac = str1.substr(n1-2,n1-1) + str1.substr(0,n1-2);
        return (str2==c||str2==ac);
    }
};
