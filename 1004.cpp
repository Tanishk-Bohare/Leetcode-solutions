class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int n=A.size(),i=0,j=0;
        for(;j<n;j++){
            if(A[j]==0)k--;
            if(k<0 && A[i++]==0){k++;}
        }
        return j-i;
    }
};