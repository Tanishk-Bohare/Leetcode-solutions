class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i=0;i<n;i++){
            string temp = s.substr(0,i+1);
            string t = temp;
            for(int i=0;i<temp.length();i++){
                t[i]=(!t[i]);
            }
            reverse(t.begin(),t.end());
            s+=temp+"1"+t;
        }
        return s[k];
    }
};