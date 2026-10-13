class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer> map =new HashMap<>();
        for(int num:nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }

        int[] result=new int[k];
        for(int i=0;i<k;i++){
            int max=0;
            int maxnum=0;
            for(int key:map.keySet()){
                if(map.get(key)>max){
                    max=map.get(key);
                    maxnum=key;
                }
            }
            result[i]=maxnum;
            map.remove(maxnum);
        }
        return result;
        
    }
}
