class Solution {
public:
// similiar to problem of 0,1,2 subsequence.
// we take 2 counters
// c0 - to count no. of 0's
// c1 - to count no. of 1's
// each time we calculate the difference c1-c0 & add in map with index
// if diff already exists previously , then it means that tab se ab tak 
// same amount of 1's & 0's bade coz difference same aya , hence this contigous
// array can be considered . 
// Lastly check if max length hai , i-mp[diff] , so update& return at last;
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        int c0 = 0;
        int c1 = 0;
        // <c1-c0,index>
        map<int,int> mp;
        mp[0] = -1;
        int diff = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) c0++;
            else c1++;
            diff = c1-c0;
            if(mp.find(diff)!=mp.end()){
                ans = max(ans,i-mp[diff]);
            }
            else mp[diff] = i;
        }
        return ans;
    }
};
