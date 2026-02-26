class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int n=nums.length;
        long min_diff=Integer.MAX_VALUE;
        Arrays.sort(nums);
        int res=0;
        for(int i=0;i<n-2;i++){
            int left=i+1; int right=n-1;
            while(left<right){
                int total=nums[i]+nums[left]+nums[right];
                int diff=Math.abs(total-target);
                if(min_diff>diff){
                    min_diff=diff;
                    res=total;
                }
                if(total==target){
                    return total;
                }
                else if(total<target){
                    left++;
                }
                else{
                    right--;
                }
            }
            
        }
        return res;
    }
}