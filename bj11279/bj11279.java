package bj11279;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Comparator;
import java.util.PriorityQueue;

public class bj11279 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cnt = Integer.parseInt(br.readLine());
        
        PriorityQueue<Integer> queue = new PriorityQueue<>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2 - o1;
            }
        });

        while(cnt-- > 0) {
            int x = Integer.parseInt(br.readLine());

            if(x == 0) {
                if(queue.isEmpty()) {
                    System.out.println(0);
                } else {
                    System.out.println(queue.poll());
                }
            } else {
                queue.offer(x);
            }
        }
    }
    
}
