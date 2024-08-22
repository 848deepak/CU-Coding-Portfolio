package Function;
import java.util.*;
public class Recur {
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the starting number: ");
        int a=s.nextInt();
       printNum(a);
    }
    public static void printNum(int a){
        if(a>=0){
            System.out.println(a);
        }
        if(a>0){
        printNum(a-1);
    }
}
}