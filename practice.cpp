#include <iostream>
using namespace std;
int bublesort(int arr[],int n){
    for(int i = 0; i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarr(int arr[],int n){
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int ar[5]= {5,8,9,10,3};
    bublesort(ar,5);
    printarr(ar,5);
    return 0;
}