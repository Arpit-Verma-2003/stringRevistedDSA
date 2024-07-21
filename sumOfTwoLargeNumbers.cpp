class Solution {
    // logic - 
    //   addition krna hai piche se
// so smaller no. firstly x set krdo
// then piche se start till n1(x)
// then n1-n2 se start till 0, y ke saare
// elements add into sum
// reverse the string
// then count 0 , if all 0 return "0"
// else return starting from 0 to end;
public:
    string addStrings(string x, string y) {
        if(x.length()>y.length()) swap(x,y);
        string str = "";
        int n1 = x.length();
        int n2 = y.length();
        int diff = n2-n1;
        int carry = 0;
        for(int i=n1-1;i>=0;i--){
            int sum = (x[i]-'0')+(y[i+diff]-'0')+carry;
            carry = sum/10;
            str.push_back(sum%10+'0');
        }
        for(int i=n2-n1-1;i>=0;i--){
            int sum = (y[i]-'0')+carry;
            carry = sum/10;
            str.push_back(sum%10+'0');
        }
        if(carry) str.push_back(carry+'0');
        reverse(str.begin(),str.end());
        int i=0;
        int n = str.size();
        while(i<n&&str[i]=='0') i++;
        if(i==n) return "0";
        return str.substr(i,str.size()-i+1);
    }
};
