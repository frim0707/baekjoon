import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class bj1874 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cnt = Integer.parseInt(br.readLine());

        Stack<Integer> stack = new Stack<>();
        StringBuilder sb = new StringBuilder();

        int prev = 0;

        while(cnt --> 0) {
            int num = Integer.valueOf(br.readLine());
            
            if(num > prev) {
                for (int i = prev + 1; i <= num; i++) {
                    stack.push(i);
                    sb.append("+\n");
                }
                prev = num;
            }

            if(stack.peek() != num) {
                System.out.println("NO");
                return;
            }

            stack.pop();
            sb.append("-\n");
            
        }


        System.out.println(sb);
    }
}
