package DivideNConqr;
public class qk {
    public static void main(String args[]){
    int arr[]={34,12,90,56,76,84};
    quickSort(arr, 0, arr.length-1);
    printarray(arr);
    }
    public static void quickSort(int arr[], int start, int end){
        if(start>=end){
            return;
        }
       int pdx= pivot(arr,start,end);
        quickSort(arr, start, pdx-1);
        quickSort(arr, pdx+1, end);
    }
    public static int pivot(int arr[],int start,int end){
        int pivot=arr[end];
        int i=start-1;
        for(int j=start;j<=end;j++){
            if(arr[j]<pivot){
                i++;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
        i++;
            int temp=arr[i];
            arr[i]=pivot;
            arr[end]=temp;
            return i;
    }
    public static void printarray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}
