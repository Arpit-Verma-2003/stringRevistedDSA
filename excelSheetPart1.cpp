class Solution{
    // logic - 
    // each time for getting last char , we do N%26
    // nd then for next last char do N/26 and perform same
    // exception -  for last char to be Z , then sara pura 
    // multiple %26 toh har baar 0 hota rahega, hence include
    // a special case if rem==0 then add z and also this time
    // N/26-1 so that baaki saare 0 na ho
    public:
    string ExcelColumn(int N)
    {
        // Your code goes here
        string s = "";
        while(N>0){
            int n = N%26;
            if(n==0){
                s = 'Z' + s;
                N = N/26 -1;
            } 
            else {
                char ch = 'A'+n-1;
                s = ch + s;
                N = N/26;
            }
        }
        return s;
    }
};
