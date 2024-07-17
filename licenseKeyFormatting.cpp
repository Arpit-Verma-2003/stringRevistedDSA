#include <cctype>
class Solution
{
    // logic - 
    // keep adding char to ans string upto size 4 , then add '-'
    // if encountered - '-' then ignore and continue;
    // reverse the ans string and return;
   public:
    string ReFormatString(string s, int k){
    	
    	int tempS = 0;
    	string temp = "";
    	for(int i=s.length()-1;i>=0;i--){
    	    if(s[i]=='-') continue;
    	    if(tempS==k){ 
    	        temp +='-';
    	        tempS = 0;
    	    }
    	    temp+= toupper(s[i]);
    	    tempS++;
    	}
    	reverse(temp.begin(),temp.end());
    	return temp;
    }
};
