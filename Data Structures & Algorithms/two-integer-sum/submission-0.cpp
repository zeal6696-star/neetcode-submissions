class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int , int> m;
        for(int i=0 ; i<n ; i++ )
        {
        int current_num=nums[i];
        int required_num=target-current_num;
                if(m.count(required_num))
                {
            return{m[required_num] , i};
            
            }
            m[current_num]=i;
        }
        return{};
        
    }
};
