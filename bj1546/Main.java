import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int subCount = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        double max = 0;
        double sum = 0;

        while(st.asIterator().hasNext()) {
            Double score = Double.parseDouble(st.nextToken());
            if(score > max) max = score;
            sum += score;
        }

        System.out.println(sum / max * 100 / subCount);
    }
}
