class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        for(int i=0;i<matrix.length;i++){
            if(target<=matrix[i][matrix[i].length-1])
            {
                int left=0;
                int right=matrix[i].length-1;

                while(left<=right){
                    int mid = (left+right)/2;
                    if(target==matrix[i][mid]){
                        return true;
                    }
                    else if(target<matrix[i][mid]){
                        right=mid-1;
                    }
                    else{
                        left=mid+1;
                    }
                }  

            }

        }
        return false;
        
    }
}
