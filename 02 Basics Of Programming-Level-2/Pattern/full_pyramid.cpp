#include <iostream>
using namespace std;
void fullpyramid(int n) {
    for(int row=0;row<n;row++){
        //spaces
        for(int space=0;space<n-row-1;space++){
            cout<<" ";
        }
            //stars
            for(int star=0;star<row+1;star++){
                cout<<"* "; 
            }
            cout<<endl;
        }
    }
  
int main() {
    int n;
    cout<<"enter n:"<<endl;
    cin>> n;
    fullpyramid(n);
    return 0;
}
