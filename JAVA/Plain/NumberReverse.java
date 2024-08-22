package Plain;
public class NumberReverse {
    public static void main(String[] args) {
        int a=9987;
        while(a>0){
           int  lastdigit=a%10;
            System.out.println(lastdigit);
            a=a/10;
        }
    }
}
