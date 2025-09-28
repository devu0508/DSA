#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n){

  //int max = INT_MIN;
  int maxi = INT_MIN;
  for(int i = 0; i<n; i++){
    // 
    maxi = max(maxi, num[i]);    // second way by predefined functions
  }

  //returning max value
  return maxi;
}

int getMin(int num[], int n){

  int min = INT_MAX;
  for(int i = 0; i<n; i++){
    if(num[i] < min){
      min = num[i];
    }
  }

  //returning min value
  return min;
}


int main(){
  int size;
  cout<<"Enter the size of array: ";
  cin>>size;

  int num[100];

  //taking input in array
  for(int i=0; i<size; i++)
  {
    cin>>num[i];
  }

  cout<<" Maximum value is: " << getMax(num, size) <<endl;
  cout<<" Minimum value is: " << getMin(num, size) <<endl;
  
  return 0;
}