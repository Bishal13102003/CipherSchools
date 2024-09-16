#include<iostream>
#include<string>
using namespace std;

class car{
    private:
    string brandName;
    string mode;
    string engine;
    int nSeats;

    public:
    car(string bN, string m, string e, int nS){
        this->brandName = bN;
        this->mode = m;
        this->engine = e;
        this->nSeats = nS;
    }

    void display(){
        cout<<"Brand Name: " <<brandName <<endl;
        cout<<"Mode: " <<mode <<endl;
        cout<<"Engine: " <<engine <<endl;
        cout<<"No. of Seats: " <<nSeats <<endl;
    }
};

int main(){
    string bN;
    cout<<"Enter the brand name: ";
    getline(cin, bN);

    string m;
    cout<<"Enter the mode: ";
    getline(cin, m);

    string e;
    cout<<"Enter the engine: ";
    getline(cin, e);

    int nS;
    cout<<"Enter the number of Seats: ";
    cin>>nS;
    cin.ignore();

    car obj(bN, m, e, nS);

    obj.display();

    return 0;
}