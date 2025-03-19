#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        std::string name;
        int score;
    public:
        Student(std::string name, int score){
            this->name = name;
            this->score = score;
        }

        ~Student(){}
        std::string getName(){
            return name;
        }
        int getScore(){
            return score;
        }

        bool operator<(Student& other){
            return score < other.score;
        }
        bool operator>(Student& other){
            return score > other.score;
        }
        bool operator==(Student& other){
            return score == other.score;
        }
        bool operator<=(Student& other){
            return score <= other.score;
        }
        bool operator>=(Student& other){
            return score >= other.score;
        }
        bool operator!=(Student& other){
            return score != other.score;
        }

        bool operator<(int other){
            return score < other;
        }

        bool operator>(int other){
            return score > other;
        }

        bool operator==(int other){
            return score == other;
        }

        bool operator<=(int other){
            return score <= other;
        }

        bool operator>=(int other)
        {
            return score >= other;
        }

        bool operator!=(int other){
            return score != other;
        }

        friend std::ostream& operator<<(std::ostream& os, Student& s){
            os<<"Student: "<<s.name<<" "<<s.score<<std::endl;
            return os;
        }

        int compareTo(Student& other){
            return score - other.score;
        }

};

#endif // !_STUDENT_H_