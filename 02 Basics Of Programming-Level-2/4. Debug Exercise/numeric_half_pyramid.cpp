#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;

 for(int row=0; row<n; row++)
     {
        for(int colm=0;colm<row+1;colm++)
        {
            cout<<colm+1<<" " ;
        }cout<<endl;
    }
return 0;
}