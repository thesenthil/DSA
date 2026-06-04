#include <iostream>
using namespace std;

int main(){
    int side;
    cout<<"enter side:"<<endl;
    cin>>side;

 for(int row=0; row<side; row++)
     {
        for(int colm=0;colm<side;colm++)
        {
        // 1st and last row all star
        if(row==0 || row==side-1||row==colm){
            cout<<"* ";
        }
  else{
    // middle rows
    if(colm==0 || colm==side-1||row==colm){
        cout<<"* ";
    }else
    {
        cout<<"  ";
    }
  }
     }cout<<endl;
}
return 0;
}