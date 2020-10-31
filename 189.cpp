class Solution {
public:
    void rotate(vector<int>& n, int k) {
        if(k>=n.size())k=k%n.size();
        if(n.size()==1 || k%n.size()==0)return;
        vector<int>c;
        for(int i=n.size()-k;c.size()!=n.size();){
            c.push_back(n[i]);
            i=(i+1)%n.size();
        }n=c;
    }
};