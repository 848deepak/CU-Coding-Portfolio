package Recursion;
import java.util.*;
public class Tiling {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter the value of n for a ground size of 2*2: ");
        int n=s.nextInt();
        System.out.println("Possible ways of arranging tiles for particular value of n is: "+tile(n));
    }
    public static int tile(int n){
        if(n==0|| n==1){
            return 1;
        }
        int x= tile(n-1)+tile(n-2);
        return x;
    }
}
