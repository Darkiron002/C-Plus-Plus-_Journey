#include <iostream>
#include<vector>
using namespace std;
//The function of operation 
void wavecall(int arr[][3],int mrow, int mcol){
    for(int col = 0;col <mcol;col++){
        if(col%2!=0){
            for(int row=mrow-1;row >=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row = 0; row< mrow;row++ ){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}
//printing the array 
void printarr(int arr[][3]){
    cout<<"The matrix that you have entered is -"<<endl;
    for(int i =0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//The main function 
int main() {
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j = 0; j<3;j++){
            cin>>arr[i][j];
        }
    }
    wavecall(arr,3,3);
    return 0;
}