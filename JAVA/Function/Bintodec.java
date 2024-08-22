package Function;
import java.util.*;
public class Bintodec {
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter a binary value: ");
        int a=s.nextInt();
        bintodec(a);
    }
    public static void bintodec(int a){
        int pow=0;
        int bin=0;
        while(a>0){
        int lastdigit=a%10;
        bin=bin+(lastdigit*(int)Math.pow(2, pow));
        a=a/10;
            pow ++;
        }
    System.out.println(bin);
    }
}
