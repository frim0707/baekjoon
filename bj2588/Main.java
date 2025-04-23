package bj2588;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

    private static void calc(int a, int b) {
        String str = String.valueOf(b);
        String[] strArr = str.split("");
        int[] intArr = new int[str.length()];
        int sum = 0;
        
        for (int i = intArr.length - 1; i >= 0; i--) {
            intArr[i] = Integer.parseInt(strArr[i]);

            int pow = (int)Math.pow(10, intArr.length - 1 - i);

            System.out.println(a * intArr[i]);
            sum += a * intArr[i] * pow;
        }

        System.out.println(sum);
    }
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        try{
        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        calc(a, b);
        } catch(Exception e){
            e.getStackTrace();
        }
        
    }
}
