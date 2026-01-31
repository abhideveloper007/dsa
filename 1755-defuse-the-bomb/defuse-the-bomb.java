class Solution {
    public int[] decrypt(int[] code, int k) {
        int n=code.length;
        int windowsum=0;
        int ans[]=new int[n];
        if(k==0) return ans;
        if(k>0){
            for(int i=1;i<=k;i++){
                windowsum+=code[i%n];
            }
            for(int i=0;i<n;i++){
                ans[i]=windowsum;
                windowsum-=code[(i+1)%n];
                windowsum+=code[(i+1+k)%n];
            }
        }
        else{
            k=-k;
            for(int i=n-k;i<n;i++){
                windowsum+=code[i];
            }
            for(int i=0;i<n;i++){
                ans[i]=windowsum;
                windowsum-=code[(i-k+n)%n];
                windowsum+=code[i];

            }
        }
        return ans;
    }
}