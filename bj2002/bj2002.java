package bj2002;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Queue;
import java.util.LinkedList;
import java.util.List;
import java.util.ArrayList;

public class bj2002 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        int res = 0;

        Queue<String> enter = new LinkedList<>();
        List<String> exit = new ArrayList<>();
        
        for (int i = 0; i < N; i++) {
            enter.offer(br.readLine());
        }

        for (int i = 0; i < N; i++) {
            exit.add(br.readLine());
        }

        for (int i = 0; i < N; i++) {
            String car = exit.get(i);
            
            if (car.equals(enter.peek())) enter.poll();
            else {
                enter.remove(car);
                res++;
            }
        }

        System.out.println(res);
    }
}
