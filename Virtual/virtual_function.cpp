// Declaration

// virtual void display() = 0; // no initialization and pure virtual function

// ex
#include<iostream>
using namespace std;
class A{
    public:
        virtual void draw()=0;

        void show(){
            cout << "idk dawg\n";
        }
};
class child : public A{
    public:
     void draw() override{
        cout<<"huh?\n";
     }
};
int main(){
    child c;
    c.show();
    c.draw();
}