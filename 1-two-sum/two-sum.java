class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mp=new HashMap<>();
          int res;
          int[] ans=new int[2];
        for(int i=0;i<nums.length;i++){
            int n=target-nums[i];
            if(mp.containsKey(n)){
                ans[0]=mp.get(n);
                ans[1]=i;
                

            }
            else{
                mp.put(nums[i],i);
            }
        }
        return ans;
  
    }
}