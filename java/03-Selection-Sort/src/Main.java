public class Main {
    public static <E extends Comparable<E>> void main(String[] args) {
        Integer[] arr = {1,4,2,3,5};
        SelectionSort.sort(arr);
        for(int e:arr){
            System.out.print(e + " ");
        }
        System.out.println();
    }
}