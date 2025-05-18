package bj11478;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Set;
import java.util.HashSet;

public class bj11478 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String S = br.readLine();
        Set<String> set = new HashSet<>();

        for(int i = 0; i < S.length(); i++) {
            for(int j = i + 1; j < S.length() + 1; j++) {
                set.add(S.substring(i,j));
            }
        }
        
        System.out.println(set.size());
    }
}
