import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.lang.StringBuilder;
import java.util.Queue;
import java.util.PriorityQueue;
import java.util.Comparator;

public class bj2696 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        StringBuilder sb = new StringBuilder();
        
        for(int i = 0; i < T; i++) {
            Queue<Integer> low = new PriorityQueue<>();
            Queue<Integer> high = new PriorityQueue<>(new Comparator<Object>() {
                public int compare(Object o1, Object o2) {
                    return (int)o2 - (int)o1;
                }
            }
            );

            int M = Integer.parseInt(br.readLine());
            sb.append((M + 1) / 2).append("\n");

            String[] strArr = br.readLine().split(" ");

            for(int j = 0; j < M; j++) {
                Integer num = Integer.parseInt(strArr[j]);
                
                high.offer(num);
                if(j % 2 == 0) {
                    low.offer(high.poll());
                    sb.append(low.peek()).append(" ");
                    if(j % 20 == 0) sb.append("\n");
                }
            }
        }
        
        System.out.println(sb);
    }
}
