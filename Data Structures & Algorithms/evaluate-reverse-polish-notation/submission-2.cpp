class Solution {
   
public:
    bool isInteger(const string& s){
        return !(s == "+" || s == "-" || s == "*" || s == "/");
    }
//      bool isInteger(string s){
//         try{
// size_t pos;
// stoi(s,&pos);
// return s.size()==pos;
//         }catch(...){
//             return false;
//         }
//     }

    int evalRPN(vector<string>& t) {
// ok i need to stack of size 2
         stack<int>st;
         for(int i=0;i<t.size();i++){
            if(isInteger(t[i]))
            st.push(stoi(t[i]));
         
         else{
            int second=st.top();
            st.pop();
            int first=st.top();
            st.pop();
         if(t[i]=="+")st.push(first+second);
         if(t[i]=="*")st.push(first*second);   
         if(t[i]=="-")st.push(first-second);
         if(t[i]=="/")st.push(first/second);
            
         
         }
         }
         return st.top();
    }
};
