import java.util.*;
import java.io.*;

class Solution{
    public static void series(int a, int b, int n){
        int sum = 0;
        for (int i = 0; i < n; i++) {
                sum += (int) (Math.pow(2, i)*b);
            
            System.out.printf(sum+a+" ");
        }
        System.out.println("");
    }

    public static void main(String []argh){
        int a = 0, b = 0, n = 0;
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            a = in.nextInt();
            b = in.nextInt();
            n = in.nextInt();
            series(a, b, n);
        }
        in.close();
    }
}

