package bj1021;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class bj1021 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] order = new String(br.readLine()).split(" ");
        int N = Integer.parseInt(order[0]);
        int M = Integer.parseInt(order[1]);

        String[] nums = new String(br.readLine()).split(" ");

        LinkedList<Integer> deque = new LinkedList<>();
        for (int i = 1; i <= N; i++) {
            deque.offer(i);
        }

        int res = 0;

        for (int i = 0; i < M; i++) {
            int num = Integer.parseInt(nums[i]);
            int idx = deque.indexOf(num);
            int half = deque.size() / 2;

            if (idx <= half) {
                while (deque.peek() != num) {
                    deque.offerLast(deque.pollFirst());
                    res++;
                }
            } else {
                while (deque.peek() != num) {
                    deque.offerFirst(deque.pollLast());
                    res++;
                }
            }

            deque.poll();
        }

        System.out.println(res);
    }
}
