import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class bj1927 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cnt = Integer.parseInt(br.readLine());

        PriorityQueue<Integer> queue = new PriorityQueue<>();

        while (cnt-- > 0) {
            Integer x = Integer.valueOf(br.readLine());
            if(x == 0) {
                if(queue.isEmpty()) System.out.println(0);
                else System.out.println(queue.poll());
            } else {
            queue.offer(x);
            }
        }
    }
}
