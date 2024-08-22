package Recursion;

public class rec {
    public static void main(String args[])
{
int a=1;
int b=10;
System.out.println(printRev(b));
}
public static int printNum(int a){
    if(a==10){
        return a;
    }
    System.out.println(a);
    return printNum(a+1);
}
public static int printRev(int b){
    if(b==1){
        return b;
    }
    System.out.println(b);
    return printRev(b-1);
}
}
