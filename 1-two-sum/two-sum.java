class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mp=new HashMap<>();
          
          
        for(int i=0;i<nums.length;i++){
            int n=target-nums[i];
            if(mp.containsKey(n)){
                return new int[]{i,mp.get(n)};
                

            }
            else{
                mp.put(nums[i],i);
            }
        }
        return new int[]{};
  
    }
}