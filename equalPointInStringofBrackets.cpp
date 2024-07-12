class Solution{
  public:
//   logic - even I don't know how this works.
    int findIndex(string str) {
        // Your code goes here
        int count = 0;
        for(int i=0;i<str.length();i++){
            if(str[i]==')') count++;
        }
        return count;
    }
};
