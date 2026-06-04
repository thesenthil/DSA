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
            cout<<"*"<<" ";
        }cout<<endl;
     }

}