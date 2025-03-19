#include <iostream>
#include <ctime>
#include "SelectionSort.h"
#include "Student.h"
using namespace std;

int main(){
    int data[5] = {24,18,12,9,16};
    int n = sizeof(data)/sizeof(data[0]);
    SelectionSort::sort(data,n);
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;

    Student students[4] = {
        Student("Alice",100),
        Student("Bob",66),
        Student("Charlie",88),
        Student("David",95)
    };
    int n2 = sizeof(students)/sizeof(students[0]);
    SelectionSort::sort(students,n2);
    for(int i=0;i<n2;i++){
        cout<<students[i]<<" ";
    }
    return 0;
}