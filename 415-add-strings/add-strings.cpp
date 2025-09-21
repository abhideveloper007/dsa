class Solution {
public:
    string addStrings(string num1, string num2) {
        
              if (num1.size() < num2.size()) swap(num1, num2);
                    int index1 = num1.size() - 1;
                     int index2 = num2.size() - 1;


        int res;
        int carry = 0;
        string sum;

        while(index2 >= 0) {
            res = (num1[index1] - '0') + (num2[index2] - '0') + carry;
            carry =( res / 10);
            char ch= (res % 10) + '0'; 
            sum+=ch;
            index1--;
            index2--;
        }

        while(index1 >= 0) {
            res = (num1[index1] - '0') + carry;
            carry = (res / 10);
            char ch= (res % 10) + '0';   
            sum+=ch;
            index1--;
        }

        if(carry > 0) {
            sum += carry + '0';        // ✅ handle last carry
        }

        reverse(sum.begin(), sum.end());
        return sum;
    }
};
