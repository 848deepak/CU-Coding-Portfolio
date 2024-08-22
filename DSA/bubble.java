package Sorting;

public class bubble {
    public static void main(String args[]){
        int arr[]={12,34,67,81,7,62,19};
        selectionsort(arr);
        printarray(arr);
    }
    public static void bublleSort(int arr[]){
        for(int i=arr.length-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
   public static void selectionsort(int arr[]){
    for(int i=0;i<arr.length-2;i++){
        int min=i;
        for(int j=i;j<arr.length-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
   }
   public static void printarray(int arr[]){
    for(int i=0;i<arr.length;i++){
        System.out.println(arr[i]);
    }
   }
}
