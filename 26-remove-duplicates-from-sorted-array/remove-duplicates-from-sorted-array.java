class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
      int officer=0;int cm=1;
      int count=1;
      while(cm<n){
        if(nums[cm]!=nums[officer]){
            nums[officer+1]=nums[cm];
            officer=officer+1;
            count++;
        }
        else{
            cm++;
        }
      }
      return count;
    }
   
}