//TIP 要<b>运行</b>代码，请按 <shortcut actionId="Run"/> 或
// 点击装订区域中的 <icon src="AllIcons.Actions.Execute"/> 图标。
public class Main {
    public static void main(String[] args) {
//        int[] arr = new int[10];
//        for(int i= 0; i< arr.length; i++)
//            arr[i] = i;
//
//        int[] scores = new int[]{100,99,66};
//        for(int i = 0; i< scores.length; i++){
//            System.out.println(scores[i]);
//        }
//
//        for(int score: scores){
//            System.out.println(score);
//        }
//
//        scores[0] = 98;
//        for(int i=0; i< scores.length; i++){
//            System.out.println(scores[i]);
//        }
        Array arr = new Array(20);
        for(int i = 0;i <10; i++)
            arr.addLast(i);

        System.out.println(arr);

        arr.add(1,100);
        System.out.println(arr);

        arr.addFirst(-1);
        System.out.println(arr);

    }
}