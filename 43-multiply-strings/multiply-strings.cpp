class Solution {
public:
   string addstring(string &numic1, string &numic2, int &count){
    numic1.append(count,'0');
    count++;
    if(numic1.size()<numic2.size()) swap(numic1,numic2);
    int index1=numic1.size()-1; int index2=numic2.size()-1;
    int res; int carry=0;string sum;
    while(index2>=0 ){
        res=(numic1[index1]-'0')+(numic2[index2]-'0')+carry;
        carry=res/10;
        char ch=(res%10)+'0';
        sum+=ch;
        index1--; index2--;


    }
    while(index1>=0){
          res=(numic1[index1]-'0')+carry;
        carry=res/10;
        char ch=(res%10)+'0';
        sum+=ch;
        index1--; 

    }
    if(carry>0){
        sum+=carry+'0';
    }
    reverse(sum.begin(),sum.end());
    numic2=sum;
    return numic2;

   }
    string multiply(string num1, string num2) {
                if (num1 == "0" || num2 == "0") return "0";

       if(num1.size()<num2.size()) swap(num1,num2);
       int index1=num1.size()-1;
       int index2=num2.size()-1;
       int res;int carry=0;string product;
       string numic1;string numic2="0";int count=0;string proall;
       while(index2>=0 ){

        for(int index1=num1.size()-1;index1>=0;index1--){
        res=(num1[index1]-'0')*(num2[index2]-'0')+carry;
        carry=res/10;
        char ch=(res%10)+'0';
        product+=ch;
        }
       
            if(carry>0) product+=carry+'0';
            
            reverse(product.begin(), product.end());

            numic1=product;
           product.clear();
           proall=  addstring(numic1,numic2,count);
           index1=num1.size()-1;
           carry=0;
           index2--;
           
        
       }
       return proall;

    }
};