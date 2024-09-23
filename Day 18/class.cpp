#include<iostream>
#include<string>
#include<tuple>
using namespace std;

class Person{
    private:
    string firstName;
    string lastName;
    int age;

    public:
    Person(const string& fN, const string& lN, int a){
        firstName = fN;
        lastName = lN;
        age = a;
    }

    string getFullName(){
        return firstName + " " + lastName;
    }

    tuple<string, string, int> getDetails() const{
        return make_tuple(firstName, lastName, age);
    }
};

int main(){
    Person person("Bishal", "Paul", 20);

    cout<<"Full Name: " <<person.getFullName() <<endl;

    auto [fN, lN, a] = person.getDetails();

    cout<<"First Name: " <<fN <<endl;
    cout<<"Last Name: " <<lN <<endl;
    cout<<"Age: " <<a <<endl;

    return 0;
}