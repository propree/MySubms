class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //only need to take care of the zero
        vector<int>ans(nums.size(),0);
        int product=1;
        int firstPart=1;
        bool zero=false;
        int secondPart=1;
int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
                firstPart=product;
                zero=true;
                product*=nums[i];
                continue;

            }
if(cnt>1)return ans;
product*=nums[i];
        if(zero){
        secondPart*=nums[i];
        }

        }

        //now comes the real calculation
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans[i]=product/nums[i];
            }
            else{
                ans[i]=firstPart*secondPart;
            }
        }
        return ans;
    }
};