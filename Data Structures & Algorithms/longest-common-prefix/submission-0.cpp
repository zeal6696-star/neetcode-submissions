class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin() , strs.end());
        // so after sorting we only have to check 1st and last string if they are having similar prefix and upto which position as suppose we have array of 3 strings then and after sort they will be in alphabetical order so if the middle one we dont have to check we only have to check the 1st and last ones and whatever similarity they are having will become our common prefix and after last similar word from start we will break so that we can get our proper prefix in common...
        string first=strs[0];
        string last=strs[strs.size()-1];
        for(int i =0 ; i<first.length() ; i++)
        {
            if(first[i]==last[i])
            {
                ans=ans+first[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};