
class Solution {
    public java.util.List<java.util.List<String>> groupAnagrams(String[] strs) {

        java.util.HashMap<String, java.util.ArrayList<String>> map =
            new java.util.HashMap<>();

        for (String s : strs) {
            String word = s;
            char[] letters = word.toCharArray();

            for (int j = 0; j < letters.length - 1; j++) {
                for (int k = 0; k < letters.length - 1 - j; k++) {

                    if (letters[k] > letters[k + 1]) {
                        char temp = letters[k];
                        letters[k] = letters[k + 1];
                        letters[k + 1] = temp;
                    }
                }
            }

            String key = new String(letters);

            if (map.containsKey(key)) {
                map.get(key).add(word);
            } else {
                java.util.ArrayList<String> list =
                    new java.util.ArrayList<>();

                list.add(word);
                map.put(key, list);
            }
        }

        java.util.List<java.util.List<String>> result =
            new java.util.ArrayList<>();

        for (String key : map.keySet()) {
            result.add(map.get(key));
        }

        return result;
    }
}
