import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.HashSet;
import java.util.Set;

public class bj10815 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String[] strArr = br.readLine().split(" ");
        
        Set<String> cards = new HashSet<>();
        for(int i = 0; i < N; i++) {
            cards.add(strArr[i]);
        }

        int M = Integer.parseInt(br.readLine());
        String[] cards2 = br.readLine().split(" ");

        StringBuilder sb = new StringBuilder();

        for(int i = 0; i < M; i++) {
            if(cards.contains(cards2[i])) sb.append("1 ");
            else sb.append("0 ");
        }

        System.out.println(sb);
    }
}
