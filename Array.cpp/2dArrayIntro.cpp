#include<iostream>
#include<climits>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int row= 0; row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;

}
// //to print row-wise sum
// void printSum(int arr[][3], int row, int col){
//     cout<<"Printing the sum of the array"<<endl;
    
//     for(int row= 0; row<3;row++){
//         int sum = 0;
//         for(int col=0;col<3;col++){
//             sum += arr[row][col];
//         }
//         cout<< sum << endl;;
//     }

//     cout<<endl;

// }

//to print column-wise sum
void printColSum(int arr[][3], int row, int col){
    cout<<"Printing the sum of the array"<<endl;
    
    for(int col= 0; col<3;col++){
        int sum = 0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout<< sum << endl;;
    }

    cout<<endl;

}

int largestRowSum(int arr[][3],int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int col= 0; col<3;col++){
        int sum = 0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }

    cout<<"The maximum sum is: "<< maxi <<endl;
    return row;

    
   
}


int main(){

    //create 2D array
    int arr[3][3];

    cout<<"Enter the elements of the array"<<endl;
    
    //taking input-->row wise input
    for(int row= 0; row<3;row++){
        for(int col=0;col<3;col++){
            cin >> arr[row][col];
        }
    }

    // //taking input-->column wise input
    // for(int col = 0; col<=4;col++){1
    //     for(int row=0;row<3;row++){
    //         cin >> arr[row][col];
    //     }
    // }
    
    cout<<"Printing the array"<<endl;
    //print
    for(int i = 0; i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    // cout<< " Enter the element to search "<<endl;
    // int target;
    // cin>>target;
    // if(isPresent(arr,target,3,3)){
    //     cout<<"element found"<<endl;
    // }
    // else{
    //     cout<<"not found";
    // }

    // // printSum(arr,3,3);
    // printColSum(arr,3,3);

    cout<<"Max row is at index: "<< largestRowSum(arr,3,3)<<endl;
    return 0;



}
