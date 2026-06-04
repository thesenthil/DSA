#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;

 for(int row=0; row<n; row++)
     {
        for(int colm=0;colm<n-row;colm++)
        {
            if(row==0 || colm==0 || row==n-1 ||row+colm==n-1){
            cout<<"* ";
            }else{
                cout<<"  ";
            }
        }cout<<endl;
    }
return 0;
}