package Recursion;
import java.util.*;
public class SumofNat {
    public static void main(String args[]){
    Scanner s= new Scanner(System.in);
    System.out.println("Enter a value for finding the sum of natural numbers from 0 to the input : ");
    int a=s.nextInt();
    System.out.println("Sum of values form 0 to "+a+" is: "+sumOfNat(a));
}
public static int sumOfNat(int a){
    if(a==0){
        return a;
    }
    int x=a+sumOfNat(a-1);
    return x;
}
}
