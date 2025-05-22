package bj14425;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedHashMap;
import java.util.Map;

public class bj14425 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] cmd = br.readLine().split(" ");

        int N = Integer.parseInt(cmd[0]);
        int M = Integer.parseInt(cmd[1]);

        Map<String, Integer> map = new LinkedHashMap<>();
        int res = 0;

        for (int i = 0; i < N; i++) {
            String str = br.readLine();
            map.put(str, map.getOrDefault(str, 0) + 1);
        }

        for (int i = 0; i < M; i++) {
            String str = br.readLine();
            if(map.get(str) != null && map.get(str) > 0) res++;
            else continue;
        }

        System.out.println(res);
    }
    
}
