#include<iostream>
using namespace std;
struct Point{
    int x;
    int y;
};
int main(){
    Point p; // Create a Point(object)
    p.x = 3;
    p.y = 7;
    cout<< p.x<<", "<<p.y<<endl;
    return 0;
}