#include<iostream>
using namespace std;

class Point{
    private:
     int x;
     int y;

    public:
     Point(int a, int b):x(a),y(b){
        cout<<"Point initialized with x = " << x<<" and y = "<<y<<endl;
     }
};
int main(){
    Point p1(3,4);
    return 0;
}