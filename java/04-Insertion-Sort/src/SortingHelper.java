

public class SortingHelper {

    private SortingHelper() {}

    // 判断数组是否有序
    public static <E extends Comparable<E>> boolean isSorted(E[] arr) {
        for (int i = 1; i < arr.length; i++) {
            if (arr[i-1].compareTo(arr[i]) > 0) {
                return false;
            }
        }
        return true;
    }

    public static <E extends Comparable<E>> void sortTest(String sortname,E[] arr){
        long startTime = System.nanoTime();
        if(sortname.equals("SelectionSort"))
            SelectionSort.post_sort(arr);
        else if(sortname.equals("InsertionSort"))
            InsertionSort.sort(arr);
        else if(sortname.equals("InsertionSort2"))
            InsertionSort.sort2(arr);
        else if(sortname.equals("InsertionSort3"))
            InsertionSort.sort3(arr);

        long endTime = System.nanoTime();

        double time = (endTime - startTime) / 1000000000.0;

        if(!SortingHelper.isSorted(arr))
            throw new RuntimeException(sortname + " failed");
        System.out.println(String.format("%s,n=%d : %f s",sortname,arr.length,time));

    }
}
