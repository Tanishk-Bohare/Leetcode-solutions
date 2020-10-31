class Solution {
public:
    int maxSatisfied(vector<int>& cu, vector<int>& g, int x) {
        int n=g.size(),j=0,sum=0,pre=0;
        for(int i=0;i<n;i++)
            if(g[i]==0)sum+=cu[i];
        for(int i=0;i<n;i++){
            if(g[i]){
                if(i<j+x)sum+=cu[i];
                else{
                    while(i>=j+x ){if(g[j]==0){j++;continue;} sum-=cu[j++];}
                    sum+=cu[i];
                }
            }
            pre=max(sum,pre);
        }
        return pre;
    }
};