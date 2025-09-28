#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array: ";
    //print the array
    for (int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<<"Printing Done"<<endl;

}

int main(){
    //declare
    int num[15];
    //cout<<" Value at zero index: "<< num[0] << endl;

    //access an array
    cout<<" Value at first index: "<< num[9] << endl;

    //initializing an array
    int second[3] = {5, 9, 11};

    //accessing an array
    cout<<"Value at second index: " << second[2] <<endl;

    int third[15] = {2,7};
    int n = 15;
    printArray(third, n);
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"Size of third array: "<< thirdSize <<endl;


    int fourth[10] = {0};
    n=10;
    printArray(fourth, n);


    //initializing all location with 1 (not possible with below line)
    int fifth[10] = {1};
    n=10;
    printArray(fifth, n);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"Size of fifth array: "<< fifthSize <<endl;


    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout<<ch[3]<<endl;
    cout<<"Printing the array: ";
    for (int i = 0; i<5; i++){
        cout<< ch[i] << " ";
    }
    cout<<endl;

    cout<<" Everything is fine" <<endl;
    

 return 0;

}