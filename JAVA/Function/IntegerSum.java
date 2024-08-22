package Function;
import java.util.*;
public class IntegerSum {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter the integer input: ");
        int a=s.nextInt();
        System.out.println("Sum of "+a+" is: "+findSum(a));
    }
    public static int findSum(int a){
        int sum=0;
        while(a>0){
        int x=a%10;
        sum+=x;
        a=a/10;
    }
    return sum;
}
}
