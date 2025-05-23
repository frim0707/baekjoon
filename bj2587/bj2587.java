package bj2587;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;

public class bj2587 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] numbers = new int[5];
        int sum = 0;

        for (int i = 0; i < 5; i++) {
            numbers[i] = Integer.parseInt(br.readLine());
            sum += numbers[i];
        }

        int avg = sum / 5;

        Arrays.sort(numbers);
        int median = numbers[2];

        StringBuilder sb = new StringBuilder();
        sb.append(avg).append('\n').append(median);
        System.out.println(sb);
    }
}