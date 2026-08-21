class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string s:strs){
            ans+=to_string(s.size());
            ans+="#";
            ans+=s;
        }
        return ans;
    }

    vector<string> decode(string s) {
         vector<string> ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            //convert the length to integer
            int len = stoi(s.substr(i,j-i));
            // start of actual word
            j++;
            ans.push_back(s.substr(j,len));
            i=j+len;
        }
        return ans;

    }
};
