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
              int  posi=s[i]-'A';
              upper[posi]++;

            }
            i++;
        }
        int odd=0;
        int count=0;
        for(int i=0;i<26;i++){
            // odd
            if(lower[i]%2==0){
              count+=lower[i];
            }
            else{
                count+=lower[i]-1;
                odd=1;
            }
            if(upper[i]%2==0){
                count+=upper[i];

            }
            else{
              count+=upper[i]-1;
              odd=1;
            }
        }
return count+odd;
        
    }
};