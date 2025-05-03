import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;

public class bj10866 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cnt = Integer.parseInt(br.readLine());
        ArrayDeque<Integer> deque = new ArrayDeque<>();

        while(cnt-- > 0) {
            String cmdLine = br.readLine();
            String[] strArr = cmdLine.split(" ");
            String cmd = strArr[0];
            int x = 0;
            if(strArr.length == 2) x = Integer.parseInt(strArr[1]);


            switch(cmd) {
                case ("push_front") :
                deque.offerFirst(x);
                break;

                case ("push_back") :
                deque.offerLast(x);
                break;

                case ("pop_front") :
                if(deque.isEmpty()) System.out.println(-1);
                else {
                    int a = deque.pollFirst();
                    System.out.println(a);
                }
                break;

                case ("pop_back") :
                if(deque.isEmpty()) System.out.println(-1);
                else {
                    int a = deque.pollLast();
                    System.out.println(a);
                }
                break;

                case ("size") :
                System.out.println(deque.size());
                break;

                case ("empty") :
                if(deque.isEmpty()) System.out.println(1);
                else System.out.println(0);
                break;

                case ("front") :
                if(deque.isEmpty()) System.out.println(-1);
                else System.out.println(deque.peekFirst());
                break;

                case ("back") :
                if(deque.isEmpty()) System.out.println(-1);
                else System.out.println(deque.peekLast());
                break;
            }
        }
    }
    
}
