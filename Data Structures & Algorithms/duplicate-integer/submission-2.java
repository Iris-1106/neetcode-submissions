class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer,Integer>countmap=new HashMap<>();
        for(int num:nums){
            if(!countmap.containsKey(num)){
                countmap.put(num,1);
            }
            else{
                return true;
            }
        }
        return false;
        
    }
}