package bj10809;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        for (int i = (int)'a'; i <= (int)'z'; i++) {
            char ch = (char)i;
            System.out.printf("%d ", str.indexOf(i));
        }
        
    }
}
