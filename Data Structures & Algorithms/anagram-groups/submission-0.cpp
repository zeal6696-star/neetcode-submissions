class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>m;
        for(int i =0 ; i<strs.size() ; i++)
        {
            string s=strs[i];
            string t= s;
            sort(t.begin(), t.end());
            m[t].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto p:m)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};
