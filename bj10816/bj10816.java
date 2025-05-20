package bj10816;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Map;
import java.util.HashMap;
import java.lang.StringBuilder;

public class bj10816 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        Map<Integer, Integer> deck = new HashMap<>();
        String[] strArr = br.readLine().split(" "); 

        for(int i = 0; i < N; i++) {
            Integer card = Integer.parseInt(strArr[i]);
            deck.put(card, deck.getOrDefault(card, 0) + 1);
        }

        int M = Integer.parseInt(br.readLine());
        String[] cards = br.readLine().split(" ");

        StringBuilder sb = new StringBuilder();
        
        for(int i = 0; i < M; i++) {
            Integer card = Integer.parseInt(cards[i]);
            if(deck.get(card) == null) sb.append("0 ");
            else sb.append(deck.get(card)).append(" ");
        }

        System.out.println(sb);
    }
}
