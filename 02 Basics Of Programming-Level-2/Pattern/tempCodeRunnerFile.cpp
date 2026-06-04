#include <iostream>
using namespace std;
void hollowpyramid(int n) {
    for(int row=0;row<n;row++){
        //spaces
        for(int space=0;space<n-row-1;space++){
            cout<< " ";
        }
            //stars
            for(int star=0;star<row+1;star++) {
                if( row == 0 || row== n-1 || star==0 || star==row+1-1)
                cout<<"* "; 
                else
                cout<<"   ";
            }
            cout<<endl;
        }
    }
  
int main() {
    int n;
    cout<<"enter n:"<<endl;
    cin>> n;
    hollowpyramid(n);
    return 0;
}
