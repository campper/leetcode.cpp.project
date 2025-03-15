public class Main {
    public static void main(String[] args){
    
        // Integer[] data = {24,18,12,9,16,66,32,4};
        int[] dataSize = {1000000 ,10000000};
        for(int n:dataSize){
            Integer[] data = ArrayGenerator.generateOrderedArray(n);

            // LinearSearch linearSearch = new LinearSearch();
            long startTime = System.nanoTime();
            for(int k = 0; k < 100; k++)
                LinearSearch.search(data,n);

            long endTime = System.nanoTime();
            double time = (endTime - startTime) / 1000000000.0;
            System.out.println("n=" + n + ", 100 runs:" + time + " s");
        }

//        System.out.println(res);

//        int res2 = LinearSearch.search(data,666);
//        System.out.println(res2);
//
//        Student[] students = {new Student("Alice"),
//        new Student("Bobo"),new Student("Charles")};
//
//        Student bobo = new Student("Bobo");
//
//        int res3 = LinearSearch.search(students,bobo);
//        System.out.println(res3);
    }
}