#include <iostream>
using namespace std;

int main(){
    int length;
    int width;
    cout<<"enter length:"<<endl;
    cin>>length;

    cout<<"enter width:"<<endl;
    cin>>width;

 for(int row=0; row<length; row++)
     {
        for(int colm=0;colm<width;colm++)
        {
        // 1st and last row all star
        if(row==0 || row==length-1){
            cout<<"* ";
        }
  else{
    // middle rows
    if(colm==0 || colm==width-1){
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