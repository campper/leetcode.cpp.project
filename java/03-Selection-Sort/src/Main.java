public class Main {
    public static void main(String[] args) {
        int[] arr = {1,4,2,3,5};
        SelectionSort.sort(arr);
        for(int e:arr){
            System.out.print(e + " ");
        }
        System.out.println();
    }
}