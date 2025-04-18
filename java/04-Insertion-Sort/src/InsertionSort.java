public class InsertionSort {
    private InsertionSort(){}

    public static <E extends Comparable<E>> void sort(E[] arr){
        for(int i=0;i<arr.length;i++){

            // 将arr[i] 插入到合适的位置
//            for(int j=i;j - 1 >= 0;j--){
//
//                if(arr[j].compareTo(arr[j-1])<0)
//                    swap(arr,j,j-1);
//                else break;
//
//            }
            for(int j=i;j - 1 >= 0 && arr[j].compareTo(arr[j-1]) < 0; j--)
                swap(arr,j,j-1);
            // System.out.println(arr[i]);
        }
    }

    public static <E extends Comparable<E>> void sort2(E[] arr){
        for(int i=0;i<arr.length;i++)
        {
            // 将arr[i] 插入到合适的位置，暂存需要插入的元素
            E t = arr[i]; //暂存
            int j;
            for(j = i; j - 1 >=0 && t.compareTo(arr[j - 1]) < 0;j--){
                arr[j] = arr[j-1]; //元素向后平移
            }
            arr[j] = t;
        }
    }

    public static <E extends Comparable<E>> void sort3(E[] arr){
        // 将arr[i] 插入到合适的位置，暂存需要插入的元素，循环arr[0,i)已排好序；arr[i...n)未排序
        // arr[0,i)未排序;arr[i...n)已排序：循环不变量
        for(int i=arr.length-1;i>=0;i--){
            E t = arr[i];
            int j;
            for(j = i;j+1 <arr.length  && t.compareTo(arr[j+1]) > 0;j++)
            {
                arr[j] = arr[j+1];
            }
            arr[j] = t;
        }
    }

    private static <E> void swap(E[] arr, int i, int j) {
        E t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }

}
