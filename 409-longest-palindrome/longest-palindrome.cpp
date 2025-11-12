class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        int i=0;
        while(i<s.size()){
            if(s[i]>='a'){
                int pos=s[i]-'a';
                lower[pos]++;
            }
            else{
                int pos=s[i]-'A';
                upper[pos]++;
            }
            i++;
        }
        int result=0;
        int odd=0;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0){
                result+=lower[i]-0;
            }
            else{
                result+=lower[i]-1;
                odd=1;
            }
        }
        for(int i=0;i<26;i++){
            if(upper[i]%2==0){
                result+=upper[i]-0;
            }
            else{
                result+=upper[i]-1;
                odd=1;
            }
        }
        return result+odd;
    }
};