package bj1152;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class bj1152 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();

        if (str.trim().isEmpty()) {
            System.out.println(0);
        } else {
            String[] words = str.trim().split("\\s+");
            System.out.println(words.length);
        }
    }
}
