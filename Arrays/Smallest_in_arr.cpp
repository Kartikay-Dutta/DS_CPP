#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin>> n;
    int arr[100];
    cout<< "Enter the elements:"<< endl;
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }
    int min = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<< "Smallest number is: "<<min<<endl;
    return 0;

}