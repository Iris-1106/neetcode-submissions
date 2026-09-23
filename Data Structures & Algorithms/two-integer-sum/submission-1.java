class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> count=new HashMap<>();
        ArrayList<Integer> list=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            int first=nums[i];
            int second=target-first;
            if(!count.containsKey(second)){
                count.put(first,i);
            }
            else{
                list.add(count.get(second));
                list.add(i);
            }
        }
        return new int[] {list.get(0),list.get(1)};

        
    }
}
