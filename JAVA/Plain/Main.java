package Plain;
class Demo1 {
    int a = 10;
    int b = 20;
    public void sub(int x, int y){
        int c=x-y;
        System.out.println("Difference is: "+c);
    }
    public void sum(int x, int y) {
        int c = x + y;
        System.out.println("Sum: " + c);
    }
}

public class Main { 
    public static void main(String[] args) {
        Demo1 obj1 = new Demo1();
        obj1.sum(obj1.a, obj1.b);
        obj1.sub(obj1.a, obj1.b);
    }
}