import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.List;
import java.util.LinkedList;
import java.lang.StringBuilder;

public class bj2696 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        StringBuilder sb = new StringBuilder();

        for(int i = 0; i < T; i++) {
            int M = Integer.parseInt(br.readLine());
            String[] nums = br.readLine().split(" ");
            
            sb.append((M + 1 )/ 2);
            
            List<Integer> list = new LinkedList<>();
            for(int j = 0; j < M; j++) {
                list.add(Integer.parseInt(nums[j]));
                
                if(j % 2 == 0) {
                    if(j % 20 == 0) sb.append("\n");

                    list.sort(null);
                    sb.append(list.get(j / 2) + " ");
                }
            }
            sb.append("\n");
        }
        System.out.println(sb);
    }
}
