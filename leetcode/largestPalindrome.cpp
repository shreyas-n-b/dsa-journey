class Solution {
public:
    int expand(string& s, int left, int right){
        int r=1;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            r=right-left+1;
            left--;
            right++;
        }
        return r;
    }
    string longestPalindrome(string s) {
        int startInd=0;
        int ans=1;
        for(int i=0; i<s.size(); i++){
            int len=1;
            int len1=expand(s,i,i);
            int len2=expand(s,i,i+1);
            len=max(len1,len2);
            if(len>ans){
                ans=len;
                startInd=i-(len-1)/2;
            }
        }
        return s.substr(startInd,ans);        
    }
};
