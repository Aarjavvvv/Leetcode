class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int n = strs.size();
      if (strs.empty()) return "";
      string ans = "";
      bool brk =false;
        for ( int i =0;i<strs[0].size();i++){
            
            char temp= strs[0][i];
            for ( int j =1;j<n;j++){
                if (i>=strs[j].size() || strs[j][i]!=temp){
                    brk = true;
                    break;
                }
            }
            if(brk) {break;}
            ans+=temp;
        }

      return ans;  
    }
};