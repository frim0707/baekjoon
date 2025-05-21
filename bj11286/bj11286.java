package bj11286;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.PriorityQueue;
import java.io.IOException;

public class bj11286 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int N = Integer.parseInt(br.readLine());
        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> {
            int absA = Math.abs(a);
            int absB = Math.abs(b);
            if (absA == absB) return Integer.compare(a, b); // 절댓값 같으면 실제 값 비교
            return Integer.compare(absA, absB);
        });

        while (N-- > 0) {
            int x = Integer.parseInt(br.readLine());
            if (x == 0) {
                sb.append(pq.isEmpty() ? 0 : pq.poll()).append("\n");
            } else {
                pq.offer(x);
            }
        }

        System.out.println(sb);
    }
}