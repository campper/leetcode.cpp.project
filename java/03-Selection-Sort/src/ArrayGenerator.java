import java.util.Random;

public class ArrayGenerator {

    private ArrayGenerator(){}

    public static Integer[] generateOrderedArray(int n){
        Integer[] arr = new Integer[n];
        for(int i=0;i < n;i++)
            arr[i] = i;
        return arr;
    }

    // 生成一个长度为n的 随机数组
    public static Integer[] generateRandomArray(int n,int bound){
        Integer[] arr = new Integer[n];
        Random rnd = new Random();
        for(int i=0;i < n;i ++){
            arr[i] = rnd.nextInt(bound);
        }
        return arr;
    }
}