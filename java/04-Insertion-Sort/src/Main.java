import java.util.Arrays;

public class Main {

    public static <E extends Comparable<E>> void main(String[] args) {
        // simple_test();
        // classobjects_test();
        concurrent_test();
    }
    public static void simple_test()
    {
        Integer[] arr = {1,4,2,3,5};
        InsertionSort.sort(arr);
        for(int e:arr){
            System.out.print(e + " ");
        }
        System.out.println();
    }

    public static void classobjects_test(){
        Student[] students = {
                new Student("Alice",98),
                new Student("Bobo",100),
                new Student("Charles",66)
        };

        InsertionSort.sort(students);
        for(Student s:students){
            System.out.print(s + " ");
        }
        System.out.println();
    }

    public static void concurrent_test(){
        int[] dataSize = {10000,100000};
        for(int n:dataSize)
        {
            System.out.println("Random Array:");
            Integer[] arr = ArrayGenerator.generateRandomArray(n, n);
            Integer[] arr2 = Arrays.copyOf(arr, arr.length);    //完全拷贝
            SortingHelper.sortTest("InsertionSort3", arr);
            SortingHelper.sortTest("SelectionSort", arr2);

            System.out.println();
            System.out.println("Ordered Array:");

            arr = ArrayGenerator.generateOrderedArray(n);
            arr2 = Arrays.copyOf(arr, arr.length);

            SortingHelper.sortTest("InsertionSort3", arr);
            SortingHelper.sortTest("SelectionSort", arr2);

            System.out.println();
        }

    }
}