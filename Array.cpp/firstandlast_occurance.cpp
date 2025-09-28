#include <iostream>
using namespace std;
int firstOcc( int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        //go to right wala part
        else if(key>arr[mid]){
            start = mid + 1;
        }
        //go to left wala part
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc( int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end) {
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        //go to right wala part
        else if(key>arr[mid]){
            start = mid + 1;
        }
        //go to left wala part
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){

    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout << " First occurance of 3 is at index: " << firstOcc(even, 11, 3) << endl;
    cout << " Last occurance of 3 is at index: " << lastOcc(even, 11, 3) << endl;


    return 0;
}


