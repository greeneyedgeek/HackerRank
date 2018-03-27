/*
* Author: greeneyedgeek
* Date: 2018-03-26
*/

    import java.io.*;
    import java.util.*;
    import java.text.*;
    import java.math.*;
    import java.util.regex.*;

    public class Solution {

        public static void main(String[] args) {

            Scanner sc=new Scanner(System.in);
            int n=sc.nextInt();            
            String ans="";
            
            //Complete the code
            ans = n%2==1 || 6 <= n && n <= 20 ? "Weird" : "Not Weird";
            
            System.out.println(ans);   
        }
    }
