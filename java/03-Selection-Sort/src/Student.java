public class Student  implements Comparable<Student> {

    private String name;
    private int score;
    private int id;

    public Student(String name,int score) {
        this.name = name;
        this.score = score;
    }
//    private boolean equals(Student student) {
//        return this.name.equals(student.name);
//    }

    @Override
    public boolean equals(Object student) {
        if(this == student)
            return true;
        if(student == null)
            return false;
        if(this.getClass() != student.getClass())
            return false;

        Student another = (Student)student;
        return this.name.toLowerCase().equals(another.name.toLowerCase());
    }

    @Override
    public int compareTo(Student other) {
//        if(this.score < other.score)
//            return -1;
//        else if(this.score > other.score)
//            return 1;
//        else return 0;
        return this.score - other.score;
    }

    @Override
    public String toString() {
        return String.format("Student(name:%s, score:%d)", name, score);
    }
}