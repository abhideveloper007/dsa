class Solution {
    public int pivotIndex(int[] nums) {
        int n=nums.length;
        int prefixsum[]=new int[n];
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }
        int totalSum=prefixsum[n-1];int leftsum;int rightsum;
        for(int i=0;i<n;i++){
            if(i==0) leftsum=0;
            else{
                leftsum=prefixsum[i-1];
            }
            rightsum=totalSum-leftsum-nums[i];
            if(leftsum==rightsum) return i;
        }
        return -1;
    }
}