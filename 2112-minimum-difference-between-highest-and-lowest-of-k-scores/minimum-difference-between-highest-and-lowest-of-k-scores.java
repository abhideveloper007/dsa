class Solution {
    public int minimumDifference(int[] nums, int k) {
        int n=nums.length;
        if(k==1) return 0;
        Arrays.sort(nums);
        int res=Integer.MAX_VALUE;
        for(int i=0;i<=n-k;i++){
            int diff=nums[i+k-1]-nums[i];
          res=Math.min(diff,res);
        } 
        return res;
        
    }
}