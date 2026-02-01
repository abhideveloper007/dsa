class Solution {
    public int countGoodSubstrings(String s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<=n-3;i++){
            char one=s.charAt(i);
            char two=s.charAt(i+1);
            char three=s.charAt(i+2);
              if(one!=two && two!=three && three!=one) count++;
        }
      
        return count;
    }
}