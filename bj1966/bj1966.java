package bj1966;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class bj1966 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cnt = Integer.parseInt(br.readLine());

        while (cnt-- > 0) {
            StringTokenizer st1 = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st1.nextToken());
            int M = Integer.parseInt(st1.nextToken());

            StringTokenizer st2 = new StringTokenizer(br.readLine());
            Queue<int[]> queue = new LinkedList<>();

            for (int i = 0; i < N; i++) {
                queue.offer(new int[] { i, Integer.parseInt(st2.nextToken()) });
            }

            int printed = 0;

            while (!queue.isEmpty()) {
                int[] now = queue.poll();
                boolean hasHigher = false;

                for (int[] doc : queue) {
                    if (doc[1] > now[1]) {
                        hasHigher = true;
                        break;
                    }
                }

                if (hasHigher) {
                    queue.offer(now);
                } else {
                    printed++;
                    if (now[0] == M) {
                        break;
                    }
                }
            }

            System.out.println(printed);
        }
    }

}