class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map; 
        for (int i=0;i<strs.size();i++){
            string signature = strs[i];
            sort(signature.begin(),signature.end());
            map[signature].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto it:map){
            result.emplace_back(it.second);
        }
        return result;
    }
};
