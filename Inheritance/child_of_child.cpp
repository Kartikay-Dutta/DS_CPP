#include <iostream>
using namespace std;

class Base {
public:
    void fun() {
        cout << "Hello";
    }
};

class ChildBase : protected Base {
};

class GrandChild : public ChildBase {
public:
    void callFun() {
        fun(); 
    }
};
int main() {
    GrandChild g1;
    g1.callFun(); 
    return 0;
}
