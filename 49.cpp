class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>ans;
        vector<vector<string>>a;
        for(auto y: strs){
            string x = y;
            sort(x.begin(),x.end());
            ans[x].push_back(y);
        }
        for(auto x:ans){
            vector<string>temp;
            for(auto y:x.second){
                temp.push_back(y);
            }
            a.push_back(temp);
        }
        return a;
    }
};