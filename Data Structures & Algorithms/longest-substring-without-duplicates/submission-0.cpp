class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        int len=0;
        unordered_map<char,int>mp;
        while(j<n){
            char ch=s[j];
            mp[ch]++;
            while(mp[ch]>1){
                mp[s[i]]--;
                i++;
            }
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};
