class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        //nothing just pure math 
        ////first i need to find how far they are from their target  and time to reach their 
        int n=speed.size();

        // i need to sort them with dist and speed

        vector<pair<int,int>>distspeed(n,{0,0});
        
        for(int i=0;i<n;i++){
            int dist=(target-position[i]);
            
distspeed[i]={dist,speed[i]};
// cout<<distspeed[i].first<<","<<distspeed[i].second<<endl;
        }
        sort(distspeed.begin(),distspeed.end(),[](const pair<int,int>& a, const pair<int,int>&b){
return a.first<b.first;
        });
         int ans=0;
         
        double maxi=0.0;

        for(int i=0;i<n;i++){
            int dist=distspeed[i].first;
            int speed=distspeed[i].second;
double t=static_cast<double>(dist)/speed;
cout<<t<<" ";

if(t>maxi){
    ans++;
    maxi=t;
}
        }
return ans==0?1:ans;
    }
};
