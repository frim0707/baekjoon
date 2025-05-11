package bj4358;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Map;
import java.util.TreeMap;

public class bj4358 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Map<String, Integer> map = new TreeMap<>();

        int total = 0;
        
        String tree;

        while (true) {
            tree = br.readLine();
            if(tree == null || tree.length() == 0) break;

            map.put(tree, map.getOrDefault(tree, 0) + 1);
            total++;
        }

        StringBuilder sb = new StringBuilder();

        for(String key : map.keySet()) {
            float per = (float)map.get(key) / total * 100;
            sb.append(String.format("%s %.4f\n", key, per));
        }

        System.out.println(sb);
    }
}
