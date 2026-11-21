class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        //i have to iterate from last to run it in o(n)
        int n=t.size();
        vector<int>ans;

        stack<pair<int,int>>st;//{val,idx}
        st.push({t[n-1],n-1});
        ans.push_back(0);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top().first<=t[i]){
                st.pop();
            }
            if(!st.empty()){
                ans.push_back(st.top().second-i);
            }
            else{
                ans.push_back(0);
            }
                st.push({t[i],i});

            

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};