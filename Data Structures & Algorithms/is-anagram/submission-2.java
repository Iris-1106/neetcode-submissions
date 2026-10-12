class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()){
            return false;
        }
        HashMap<Character,Integer>map1=new HashMap<>();
        HashMap<Character,Integer>map2=new HashMap<>();
        for(char s1: s.toCharArray()){
            map1.put(s1, map1.getOrDefault(s1,0)+1); 
        }
        for(char s2: t.toCharArray()){
            map2.put(s2,map2.getOrDefault(s2,0)+1);
        }
        return map1.equals(map2);

    }
}