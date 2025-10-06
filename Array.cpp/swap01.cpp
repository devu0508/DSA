#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
    cout<< endl;
}

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left<right){
        
        while(arr[left] == 0 && left < right){
            left++;
        }
    
        while(arr[right] == 1 && left < right){
             right--;
        }

        if(left<right)
        {

        swap(arr[left], arr[right]);
        left++;
        right--;

        }
    }


}
int main(){
 int arr[9] = {1,1,0,0,1,1,0,1,0};

 sortOne(arr, 8);
 printArray(arr, 8);
  return 0;
}





// bool isPosssible(vector<int>& position, int m,int mid){

//     int basketCount = 1;
//     int lastPos = position[0];

//     for(int i = 0; i<position.size(); i++){
//         if(position[i]-lastPos >=mid){
//             basketCount++;
//             if(basketCount==m){
//                 return true;
//             }
//             lastPos = position[i];
//         }
//     }
//     return false;
// }
// class Solution {
// public:
//     int maxDistance(vector<int>& position, int m) {
//         sort(position.begin(), position.end());
//         int s = 0;
//         int maxi = -1;
//         for(int i = 0;i<position.size();i++){
//             maxi = max(maxi, position[i]);
//         }
//         int e = maxi;
//          int ans = -1;
//         int mid = s + (e-s)/2;

//         while(s<=e){
//             if(isPosssible(position,m,mid)){

//                 ans = mid;
//                 s = mid+1;

//             }
//             else{
//                 e = mid-1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;

        
//     }
// };