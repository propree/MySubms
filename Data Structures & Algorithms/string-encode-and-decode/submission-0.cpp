class Solution {
  public:
    string encode(vector<string>& arr) {
        string pree = "";
        
        for (int i = 0; i < arr.size(); i++) {
            pree += to_string(arr[i].size()) + ",";
        }
        
       
        pree += "#";

        
        for (auto& it : arr) {
            pree += it;
        }
        return pree;
    }

    vector<string> decode(string& s) {
        vector<string> result;
        vector<int> lengths;
        int i = 0;

        
        while (i < s.size() && s[i] != '#') {
            int num = 0;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            lengths.push_back(num);
            if (i < s.size() && s[i] == ',') {
                i++; 
            }
        }

        
        i++; 

        
        for (int len : lengths) {
            result.push_back(s.substr(i, len));
            i += len;
        }

        return result;
    }
};