package Sorting;

public class Insert {
    public static void main(String args[]){
        int arr[]={23,12,44,37,9,78,80,61};
        insertionSort(arr);
        printArray(arr);
    }
    public static void insertionSort(int arr[]){
        for(int i=0;i<arr.length-1;i++){
            int j=i;
            while(j>0 && arr[j]<arr[j-1]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;

                j--;
            }
        }
    }
    public static void printArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}
