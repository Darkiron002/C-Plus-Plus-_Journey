// ...existing code...
#include <iostream>
using namespace std;
int FirstOcc(int arr[],int size,int key){
    int start= 0;
    int end= size -1;
    int ans = -1;
    int mid = start +(end-start)/2;
    while(start <end){
        if(arr[mid]==key){
            ans = mid;
            start = mid -1;
        }
        else if(key >arr[mid]){
            start = mid +1;
        }
        else if(key <arr[mid]){
            end = mid -1;
        }
        
        mid = start +(end-start)/2;
    }
    return ans;
}
int LastOcc(int arr[],int size,int key){
    int start= 0;
    int end= size -1;
    int ans = -1;
    int mid = start +(end-start)/2;
    while(start <end){
        if(arr[mid]==key){
            ans = mid;
            start = mid +1;  
        }
        else if(key >arr[mid]){
            start = mid +1;
        }
        else if(key <arr[mid]){
            end = mid -1;
        }
        
        mid = start +(end-start)/2;
    }
    return ans;
}
int main() {
    int a[10]= {2,4,6,8,6,10,12};
    cout <<"The index of the First occerence key is : "<<FirstOcc(a,6,6);
    cout <<"\nThe index of the Last occerence key is : "<<LastOcc(a,6,6);
    
    return 0;
}