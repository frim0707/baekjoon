package bj18115;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Deque;
import java.util.LinkedList;

public class bj18115 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String[] commands = br.readLine().split(" ");
        
        Deque<Integer> queue = new LinkedList<>();
        int card = 1;

        for (int i = N - 1; i >= 0; i--) {
            int cmd = Integer.parseInt(commands[i]);

            switch(cmd) {
                case 1 :
                queue.offerFirst(card);
                break;

                case 2 :
                int tmp = queue.poll();
                queue.offerFirst(card);
                queue.offerFirst(tmp);
                break;

                case 3 :
                queue.offerLast(card);
                break;
            }

            card++;
        }

        StringBuilder sb = new StringBuilder();

        while(!queue.isEmpty()) {
            sb.append(queue.poll()).append(" ");
        }

        System.out.println(sb);
    }
}
