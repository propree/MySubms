class Solution {
public:
int binarySearch(vector<int>&numbers,int val,int start,int end){

while(start<=end){
int mid=start+(end-start)/2;
if(numbers[mid]==val)return mid;

else if(numbers[mid]>val){
    end=mid-1;
}
else {
    start=mid+1;
}

}
return -1;
}
    vector<int> twoSum(vector<int>& numbers, int target) {
        //one iteration and one binary search nlogn 
        for(int i=1;i<numbers.size();i++){
            int req=target-numbers[i-1];
int index=binarySearch(numbers,req,i,numbers.size()-1);
if(index!=-1)return {i,index+1};

        }
        return {0,0};

    }
};
