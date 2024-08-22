package Array;
import java.util.*;
public class ArrayRev {
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the number of elements for array: ");
        int a=s.nextInt();
        int arr[]=new int[a];
        System.out.println("Enter the "+a+" elements for array: ");
        for(int i=0;i<arr.length;i++){
            arr[i]=s.nextInt();
        }
        for(int i=0;i<arr.length;i++){
            System.out.println("Element at position "+i+" is: "+arr[i]);
        }
        reverse(arr);
    }
    public static void reverse(int arr[]){
        int start=0;
        int end=arr.length-1;
        while(start<end){
            int temp=arr[end];
            arr[end]=arr[start];
            arr[start]=temp;
            start ++;
            end --;
        }
        for(int i=0;i<arr.length;i++){
        System.out.println("element at position "+i+" is: "+ arr[i]);
    }
}
}
