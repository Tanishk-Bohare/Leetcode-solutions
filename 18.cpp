class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),l1=0,r1,l2,r2,sum;
        vector<vector<int>>res;
        if(n<4)return res;
        
        for(l1=0;l1<n-3;){
            for(r1=n-1;r1>l1+2;){
                l2=l1+1;
                r2=r1-1;
                while(l2<r2){
                    sum=nums[l1]+nums[l2]+nums[r2]+nums[r1];
                    if(sum==target){
                        res.push_back(vector<int>{nums[l1],nums[l2],nums[r2],nums[r1]});
                        l2++;
                        while(l2<r2 && nums[l2]==nums[l2-1])l2++;
                        r2--;
                        while(r2>l2 && nums[r2]==nums[r2+1])r2--;
                    }
                    else if(sum<target){
                        l2++;
                        while(l2<r2 && nums[l2]==nums[l2-1])l2++;
                    }else{
                        r2--;
                        while(r2>l2 && nums[r2]==nums[r2+1])r2--;
                    }
                }
                r1--;
                while(r1>l1+2 && nums[r1]==nums[r1+1])r1--;
            }
            l1++;
            while(l1<n-3 && nums[l1]==nums[l1-1])l1++;
        }
        return res;
    }
};