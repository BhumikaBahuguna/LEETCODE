268 MISSING NUMBER


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xorsum=n;
        for(int i=0;i<n;i++){
            xorsum^=i^nums[i];
        }
    return xorsum;
    }
};
