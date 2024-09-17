#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int age;
    float marks;

    public:
    Student(string name, int age, float marks){
        this->name = name;
        this->age = age;
        this->marks = marks;
    }

    void displayDetails(){
        cout<<"Student Details:" <<endl;
        cout<<"Name: " <<this->name <<endl;
        cout<<"Age: " <<this->age <<endl;
        cout<<"Marks: " <<this->marks <<endl;
    }
};

int main(){
    Student student1("Bishal Paul", 20, 95);
    student1.displayDetails();

    return 0;
}