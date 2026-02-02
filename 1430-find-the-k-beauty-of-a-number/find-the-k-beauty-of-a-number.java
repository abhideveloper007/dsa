class Solution {
    public int divisorSubstrings(int num, int k) {
        String s=String.valueOf(num);
        int n=s.length(); int count=0;
        for(int i=0;i<=n-k;i++){
            String value=s.substring(i,i+k);
            int div=Integer.parseInt(value);
            if(div!=0 && num%div==0) count++;
        }
        return count;
    }
}