class Solution {
public:
    string sortVowels(string s) {
        vector<int>upper(26,0);
        vector<int>lower(26,0);
        int i=0;
        while(i<s.size()){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                int pos=s[i]-'a';
                lower[pos]++;
                
                s[i]=' ';
            }
            else if(s[i]=='A' || s[i]=='E' ||s[i]=='I'|| s[i]=='O'||s[i]=='U'){
                int pos=s[i]-'A';
                upper[pos]++;
                
                s[i]=' ';
            }
          i++;
        }
      
      string ans;
      for(int i=0;i<26;i++){
        while(upper[i]!=0){
         ans+=i+'A';
         upper[i]--;}

      }
      for(int i=0;i<26;i++){
        while(lower[i]!=0){
            ans+=i+'a';
            lower[i]--;
        }
      }
     int first=0;int second=0;
     while(second<ans.size()){
        if(s[first]==' '){
            s[first]=ans[second];
            second++;
        }
        first++;
     }

        return s;
    }
};