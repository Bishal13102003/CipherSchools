#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;

    public:
    Rectangle(int l, int w) : length(l), width(w){
        cout<<"Parameterized constructor called!" <<endl;
    }

    Rectangle(const Rectangle& other){
        cout<<"\nCopy constructor called!" <<endl;
        length = other.length;
        width = other.width;
    }

    int area() const{
        return length * width;
    }

    void display() const{
        cout<<"Length: " <<length <<", Width: " <<width <<endl;
    }
};

int main(){
    Rectangle rect1(10, 5);
    cout<<"Original Rectangle: ";
    rect1.display();
    cout<<"Area: " <<rect1.area() <<endl;

    Rectangle rect2 = rect1;
    cout<<"Copied Rectangle: ";
    rect2.display();
    cout<<"Area: " <<rect2.area() <<endl;

    return 0;
}