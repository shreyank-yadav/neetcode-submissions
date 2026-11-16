class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        int len=0;
        vector<bool>mp(256,0);
        while(j<n){
            char ch=s[j];
            while(mp[ch]){
                mp[s[i]]=0;
                i++;
            }
            mp[ch]=1;
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};
