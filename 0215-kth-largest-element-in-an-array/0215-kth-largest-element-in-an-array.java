import java.util.*;
class Solution {
    public int findKthLargest(int[] nums, int k) {
        int max = 0;
        int  element = 0;
            PriorityQueue<Integer>  pq = new PriorityQueue<>(Collections.reverseOrder());
            for(int  x : nums ){
                pq.add(x);
            }
            while(k-->1){
                pq.poll();

            }
                max = pq.peek();
        return max;
    }
}