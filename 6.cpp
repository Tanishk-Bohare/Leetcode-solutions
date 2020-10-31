class Solution {
public:
    string convert(string s, int n) {
        if(n==1)return s;
        string ans = "";
        int inc = -1;
        int row = 0;
        vector<string>res(n);
        for(int i=0;i<s.length();i++){
            if(i%(n-1)==0)inc*=-1;
            res[row].push_back(s[i]);
            row+=inc;
        }
        for(auto x:res){
            ans+=x;
        }
        return ans;
    }
};