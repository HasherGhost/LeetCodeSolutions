class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> result;
        for (const auto& word : strs){
            string key = word;
            sort(key.begin(),key.end());
            mpp[key].push_back(word);
        }

        for (const auto& x : mpp){
            result.push_back(x.second);
        }
        return result;
    }
};