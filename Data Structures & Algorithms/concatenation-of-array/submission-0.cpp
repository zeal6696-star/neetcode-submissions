class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>nums1;
            int n=nums.size();
            for(int i=0 ; i<n ;i++)
            {
                nums1.push_back(nums[i]);
            }
            for(int i=0 ;i<n ;i++)
            {
                nums1.push_back(nums[i]);
            }
            return nums1;
        
    }
};