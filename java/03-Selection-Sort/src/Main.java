import javax.swing.*;

public class Main {

    public static <E extends Comparable<E>> void main(String[] args) {
//        Integer[] arr = {1,4,2,3,5};
//        SelectionSort.sort(arr);
//        for(int e:arr){
//            System.out.print(e + " ");
//        }
//        System.out.println();
//
//        Student[] students = new Student{
//            new Student("Alice",98),
//            new Student("Bobo",100),
//            new Student("Charles",66)};
//
//        SelectionSort.sort(students);
//        for(Student s:students){
//            System.out.print(s + " ");
//        }
//        System.out.println();

        int[] dataSize = {10000,100000};
        for(int n:dataSize)
        {
            Integer[] arr = ArrayGenerator.generateRandomArray(n, n);
            SortingHelper.sortTest("SelectionSort", arr);
        }
    }
}