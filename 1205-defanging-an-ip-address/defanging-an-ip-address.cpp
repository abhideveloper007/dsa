class Solution {
public:
    string defangIPaddr(string address) {
        string temp;
        vector<string>ans;
        int i=0;
        while(i<address.size()){
            if(address[i]=='.'){
                
                
                temp+='[';
                temp+='.';
                temp+=']';
                ans.push_back(temp);
                temp.clear();

            }
            else{
                temp+=address[i];
            }
            i++;
        }
        if(!temp.empty()){

            ans.push_back(temp);
            temp.clear();
        }
  
    for(int i=0;i<ans.size();i++){
     temp+=ans[i];
    }
    return temp;
    }
};