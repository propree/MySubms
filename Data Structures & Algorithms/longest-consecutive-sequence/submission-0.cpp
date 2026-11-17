class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        //sort and then just count 
        sort(nums.begin(),nums.end());
        int count=0;
        for(auto it:nums){
            cout<<it<<" ";
        }
        int Lcount=1;
        int minVal=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(minVal+1==nums[i]){
                //then its correct
                count++;
                minVal=nums[i];
            }
            else if(nums[i]!=minVal){
                minVal=nums[i];
                count=1;
            }
            Lcount=max(Lcount,count);
        }
        return Lcount;
    }
};
