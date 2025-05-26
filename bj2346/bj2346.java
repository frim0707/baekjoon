package bj2346;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Deque;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.Map;

public class bj2346 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        Map<Integer, Integer> map = new LinkedHashMap<>();
        Deque<Integer> dq = new LinkedList<>();

        String[] input = br.readLine().split(" ");
        for (int i = 1; i <= N; i++) {
            int move = Integer.parseInt(input[i - 1]);
            map.put(i, move);
            dq.add(i);
        }

        StringBuilder sb = new StringBuilder();

        while (!dq.isEmpty()) {
            int current = dq.pollFirst();
            int move = map.get(current);
            sb.append(current).append(" ");

            if (dq.isEmpty())
                break;

            if (move > 0) {
                for (int i = 0; i < move - 1; i++) {
                    dq.addLast(dq.pollFirst());
                }
            } else {
                for (int i = 0; i < -move; i++) {
                    dq.addFirst(dq.pollLast());
                }
            }
        }

        System.out.println(sb);
    }
}
