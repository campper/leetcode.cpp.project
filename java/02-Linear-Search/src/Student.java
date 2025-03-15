public class Student {

    private String name;
    private int id;

    public Student(String name) {
        this.name = name;
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
}
