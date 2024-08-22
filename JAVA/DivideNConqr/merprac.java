package DivideNConqr;
import java.util.*;
public class merprac {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int a = 13;
        int arr[] = new int[a];
        System.out.println("Enter the cards, from 1 of ACE to 13 of king: ");
        for(int i = 0; i < arr.length; i++){
            arr[i] = s.nextInt();
        }
        for(int i = 0; i < arr.length; i++){
            System.out.println("Card entered by user at position [ " + i + " ] is: " + arr[i]);
        }
        mergeS(arr, 0, arr.length - 1);
        for(int i = 0; i < arr.length; i++){
            System.out.println("After sorting, Card entered by user at position [ " + i + " ] is: " + arr[i]);
        }
    }

    public static void mergeS(int arr[], int st, int end){
        if(st < end){
            int mid = st + (end - st) / 2;
            mergeS(arr, st, mid);
            mergeS(arr, mid + 1, end);
            mergeit(arr, st, mid, end);
        }
    }

    public static void mergeit(int arr[], int st, int mid, int end){
        int temp[] = new int[end - st + 1];
        int i = st;
        int j = mid + 1;
        int k = 0;

        while(i <= mid && j <= end){
            if(arr[i] < arr[j]){
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        while(i <= mid){
            temp[k++] = arr[i++];
        }
        while(j <= end){
            temp[k++] = arr[j++];
        }
        for(i = st, k = 0; k < temp.length; i++, k++){
            arr[i] = temp[k];
        }
    }
}