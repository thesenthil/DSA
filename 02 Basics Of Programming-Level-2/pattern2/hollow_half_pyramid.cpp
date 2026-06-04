#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;

 for(int row=0; row<n; row++)
     {
        int totalColumn=row+1;
        for(int colm=0;colm<totalColumn;colm++)
        {
            if(row==0 || row==1 || row==n-1){
                cout<<"* ";
            }
            else{
                if(colm==0 || colm==totalColumn-1){
                    cout<<"* ";
                }
                else {
                    cout<<"   ";
                }
            }
        
        }
        cout<<endl;
    }
return 0;
} 