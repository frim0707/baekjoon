package bj12789;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Queue;
import java.util.LinkedList;
import java.util.Stack;

public class bj12789 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        Queue<Integer> queue = new LinkedList<>();
        Stack<Integer> stack = new Stack<>();

        String[] strArr = br.readLine().split(" ");
        for (int i = 0; i < N; i++) {
            queue.offer(Integer.parseInt(strArr[i]));
        }

        int cnt = 1;
        String res = "Nice";

        while (!queue.isEmpty()) {
            // 1. 큐에 있거나
            if (queue.peek() == cnt) {
                queue.poll();
                cnt++;
            }
            // 2-1. 스택에 있거나
            else if (!stack.isEmpty() && stack.peek() == cnt) {
                stack.pop();
                cnt++;
            }
            // 2-2. 둘다 아니면 스택에 넣으셈
            else if (queue.peek() != cnt) {
                stack.push(queue.poll());
            }
        }

        // 마지막 스택 처리
        while(!stack.isEmpty()) {
            if(stack.peek() == cnt) {
                stack.pop();
                cnt++;
            }
            else {
                res = "Sad";
                break;
            }
        }

        System.out.println(res);
    }
}
