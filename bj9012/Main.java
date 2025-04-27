import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    private static String parenthesis(String str) {
        int a = 0;
        char[] charArr = str.toCharArray();

        for(char c : charArr) {
            if(c == '(') a++;
            else if(c == ')') a--;
            if(a < 0) return "NO";
        }

        if (a == 0) return "YES";
        else return "NO";
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cnt = Integer.parseInt(br.readLine());

        String[] strArr = new String[cnt];

        for (int i = 0; i < cnt; i++) {
            String str = br.readLine();
            strArr[i] = parenthesis(str);
        }

        for (String str : strArr) {
            System.out.println(str);
        }
    }

}
