package bj2075;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Queue;

public class bj2075 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        Queue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        for (int i = 0; i < N; i++) {
            String[] strArr = br.readLine().split(" ");
            for(int j = 0; j < strArr.length; j++) {
                pq.offer(Integer.parseInt(strArr[j]));
            }
        }

        for(int i = 0; i < N; i++) {
            if(i == (N - 1)) System.out.println(pq.poll());
            else pq.poll();
        }
    }
    
}