class Solution {

// logic - 
// firstly take a temporary string str and add A to that string
// firstly check if str is already equal to B , hence return 1;
// or else each time add A to str (repeat) uptil str length =< then B
// each time add count + 1 and return count if found substring
// lastly add A to str last time after loop to check if substring exist
// if yes return count or else return -1;

public:
    int repeatedStringMatch(string A, string B) {
        string str = A;
        if(A.find(B)!=-1) return 1;
        int count = 1;
        while(str.length() <= B.length()){
            str = str + A;
            count++ ;
            if(str.find(B)!=-1) return count;
        }
        str = str + A;
        count++;
        if(str.find(B)!=-1) return count;
        return -1;
    }
};
