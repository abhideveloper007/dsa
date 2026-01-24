class Solution {
    public double findMaxAverage(int[] nums, int k) {
        if(nums.length==1 && nums[0]<0) return (double)nums[0];
        int windowsum=0;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];
        }
      int  maxsum=windowsum;
        for(int i=k;i<nums.length;i++){
           
            windowsum+=nums[i];   windowsum-=nums[i-k];
            maxsum=Math.max(windowsum,maxsum);
         
            
        }
        return (double)maxsum/k;
    }
}