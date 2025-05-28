import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class bj2750 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        List<Integer> list = new LinkedList<>();

        for (int i = 0; i < N; i++) {
            int number = Integer.parseInt(br.readLine());
            list.add(number);
        }

        Collections.sort(list);

        for(int i : list) {
            System.out.println(i);
        }
    }
    
}
