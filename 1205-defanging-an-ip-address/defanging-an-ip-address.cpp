class Solution {
public:
    string defangIPaddr(string address) {
        string temp;
        int i=0;
        while(i<address.size()){
            if(address[i]=='.'){
              temp+="[.]";

            }
            else{
                temp+=address[i];
            }
            i++;
        }
        return temp;
        
    }
};