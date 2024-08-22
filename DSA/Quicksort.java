package DivideNConqr;

public class Quicksort {
    public static void main(String args[]){
        int arr[]={2,7,45,12,9};
        quickie(arr, 0, arr.length-1);
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
    }
}
    public static void quickie(int arr[],int st, int end){
        if(st>=end){
            return;
        }
        int pidx= pidx( arr, st , end);
        quickie(arr, st, pidx-1);
        quickie(arr, pidx+1, end);
    }

    public static int pidx(int arr[],int st, int end){
        int i=st-1;
        int pivot=arr[end];
        for(int j=st; j<end; j++){
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
}
