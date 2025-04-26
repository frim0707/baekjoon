package bj1316;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int cnt = Integer.parseInt(br.readLine());
        int res = 0;

        for (int i = 0; i < cnt; i++) {
            String str = br.readLine();

            boolean[] check = new boolean[26];
            boolean isGroupWord = true;
            char prev = '0';

            for (char now : str.toCharArray()) {

                if (prev != now) {
                    if (check[now - 'a']) {
                        isGroupWord = false;
                        break;
                    }
                    check[now - 'a'] = true;
                }
                
                prev = now;
            }

            if (isGroupWord)
                res++;
        }

        System.out.println(res);
    }
}
