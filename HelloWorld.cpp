#include <iostream>
using namespace std;

int main(){
    int matx[3][3];
    for(int i = 0; i <3;i++){
        for (int j =0; j <3 ; j++){
            cin >> matx[i][j];
        }
    }
    cout << "Matrix is: " << endl;
    for(int i = 0; i <3;i++){
        for (int j =0; j <3 ; j++){
            cout << matx[i][j]<< " ";
        }cout<< "\n";
    }
    
    return 0;
}