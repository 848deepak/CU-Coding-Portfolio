package Recursion;
import java.util.*;
public class fibonacci {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter a fibonacci term: ");
        int a=s.nextInt();
        System.out.println(fibo(a));
    }
    public static int fibo(int a){
        if(a==0|| a==1){
            return a;
        }
        int x=fibo(a-1)+fibo(a-2);
        return x;

    }
    // set of numbers in which current number is the sum of previous 2 numbers
}
