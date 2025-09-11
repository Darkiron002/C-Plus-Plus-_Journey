#include<iostream>
using namespace std;

const int rows = 7;
const int col = 5;

void seatlayout(char arr[rows][col]){
    cout<<"--- Seat Layout (0 = Available, 1 = Booked) ---"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void booksSeat(char arr[rows][col]){
    int r,c;
    cout<< "Enter the row and column for the seat you want to book: ";
    cin>>r>>c;
    if(r>=0 && r< rows && c>=0 && c<col&& arr[r][c]=='0'){
        arr[r][c]= '1';
        cout<<"Seat booked successfully."<<endl;
    }else{
        cout<<"Invalid seat selection or seat already booked."<<endl;
    }
}
void blockbook(char arr[rows][col]){
    int r, statcol, count;
    cout << "Enter row, starting column, and number of seats to book (0-based): ";
    cin >> r >> statcol >> count;if(r>= 0 && r< rows && statcol>=0 && statcol +count < col){
        bool canbook = true;
        for(int i = 0; i<count; i++){
            if(arr[r][statcol=+i]=1){
                canbook= false;
                break;
            }
            if(canbook){
                for(int i = 0; i < count;i++){
                    arr[r][statcol+ i]= 1;
                }
                cout <<"Block Book Successfull ";
            }else{
                cout<< "Enter valid numbers  ";
            }
        }
        
    } 
}
void cancle(char arr[rows][col]){
    int r,c;
    cout<< "Enter the row and column for the seat you want to cancel: ";
    cin>>r>>c;
    if(r>=0 && r< rows && c>=0 && c<col&& arr[r][c]=='1'){
        arr[r][c]= '0';
        cout<<"Seat booking cancelled successfully."<<endl;
    }else{
        cout<<"Invalid seat selection or seat is not booked."<<endl;
    }
}
void availableSeats(char arr[rows][col]){
    cout<<"--- Available Seats (0 = Available) ---"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]=='0'){
                cout<<"Row: "<<i<<" Col: "<<j<<endl;
            }
        }
    }
}
int main(){
    int n ;
    char seats[rows][col];
    for(int i=0; i<rows; i++)
        for(int j=0; j<col; j++)
            seats[i][j] = '0';
    while(n!=6){
        cout<<"====== Cinema Seat Booking Menue ======"<<endl;
        cout<<"1. View Seat Layout"<<endl;
        cout<<"2. Book a Single seat"<<endl;
        cout<<"3. Book a Block of seats"<<endl;
        cout<<"4. Cancel a Seat Booking"<<endl;
        cout<<"5. Display Available Seats Only"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice(1 to 6) to select a function: "<<endl;
        cin>>n;
        switch (n){
            case 1:seatlayout(seats);break;
            case 2:booksSeat(seats);break;
            case 3:blockbook(seats);break;
            case 4:cancle(seats);break;
            case 5:availableSeats(seats);break;
            case 6:cout<<"Exiting the program. Thank you!"<<endl;break;
            default: cout<<"Please enter valid choices ";break;
        }
    }
    return 0;
}