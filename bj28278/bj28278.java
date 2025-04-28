package bj28278;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
import java.util.StringTokenizer;

public class bj28278 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cnt = Integer.parseInt(br.readLine());

        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < cnt; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int[] cmd = new int[2];
            int a = 0;
            while (st.hasMoreTokens()) {
                cmd[a++] = Integer.parseInt(st.nextToken());
            }

            switch (cmd[0]) {
                case 1:
                    stack.push(cmd[1]);
                    break;

                case 2:
                    if (stack.isEmpty()) {
                        System.out.println(-1);
                    } else {
                        System.out.println(stack.peek());
                        stack.pop();
                    }
                    break;

                case 3:
                    System.out.println(stack.size());
                    break;

                case 4:
                    if (stack.isEmpty())
                        System.out.println(1);
                    else
                        System.out.println(0);
                    break;

                case 5:
                    if (stack.isEmpty())
                        System.out.println(-1);
                    else {
                        System.out.println(stack.peek());
                    }
                    break;
            }
        }

    }
}
