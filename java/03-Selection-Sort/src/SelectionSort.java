// package 03-Selection-Sort.SelectionSort;

public class SelectionSort {

    private SelectionSort(){}

    public static <E extends Comparable<E>> void pre_sort(E[] arr){
        for(int i=0;i<arr.length;i++){
            int minIndex = i;
            for(int j=i; j < arr.length;j++) {
                if (arr[j].compareTo(arr[minIndex]) < 0) {
                    minIndex = j;
                }
            }
            swap(arr,i,minIndex);
            // System.out.println(arr[i]);
        }
    }

    public static <E extends Comparable<E> > void post_sort(E[] arr){
        for(int i=arr.length-1;i>0;i--){
            int minIndex = i;
            for(int j=i-1;j>=0;j--){
                if(arr[j].compareTo(arr[minIndex]) > 0){
                    minIndex = j;
                }
            }
            swap(arr,i,minIndex);
            //System.out.println(arr[i]);
        }
    }

    private static <E> void swap(E[] arr, int i, int j) {
        E t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}
