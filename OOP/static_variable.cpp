#include<iostream>
using namespace std;
class Demo{
    public:
    static int counter; // Declaration inside class
    Demo(){counter++;}
};
int Demo::counter = 0; // Definition outside class

int main(){
    Demo a,b;
    cout<<Demo::counter<<endl; // Prints 2 without making object of the class
    return 0;
}