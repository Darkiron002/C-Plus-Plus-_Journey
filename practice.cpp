#include<iostream>
using namespace std;
int main(){
    int arr[]= {5,0,4,0,8,0,9,7};
    int count = sizeof(arr)/sizeof(arr[0]);
    int zcout=0;
    for(int i = 0; i<count;i++){
        if(arr[i]==0){
            zcout++;
        }
    }
    cout << "The number of zeros in the array is: " << zcout << endl;
    return 0;
}