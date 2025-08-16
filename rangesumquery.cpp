class NumArray {
public:
vector<int>prefix;
    NumArray(vector<int>& nums) {
        int cur=0;
        for(int n:nums){
            cur+=n;
            prefix.push_back(cur);
        }
    }
    int sumRange(int left, int right) {
        int rightsum=prefix[right];
        int leftsum=(left>0)? prefix[left-1]:0;
        return rightsum-leftsum;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
