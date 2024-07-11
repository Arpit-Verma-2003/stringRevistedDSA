class Solution {
  public:

    string longestCommonPrefix(int n, string arr[]) {
        // your code here
        sort(arr,arr+n);
        string ans = "";
        string st = arr[0];
        string end = arr[n-1];
        for(int i=0;i<min(st.size(),end.size());i++){
            if(st[i]!=end[i])break;
            ans+=st[i];
        }
        if(ans=="") return "-1";
        return ans;
    }
};
