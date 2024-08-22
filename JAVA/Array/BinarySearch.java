package Array;
import java.util.*;
public class BinarySearch{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int a=s.nextInt();
        int arr[]= new int[a];
        System.out.println("Enter "+a+" elements : ");
        for(int i=0;i<arr.length;i++){
            arr[i]=s.nextInt();
        }
        for(int i=0;i<arr.length;i++)
        {
        System.out.println("Element entered at position "+i+ " is: "+arr[i]);
        }
        System.out.println("Enter the term you wanna find out: ");
        int x=s.nextInt();
        System.out.println("Element "+x+" is found at position: "+binarySearch(arr, x));

    }
    public static int binarySearch(int arr[],int x){
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid=(start+end)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        }
        return -1;
    }
}