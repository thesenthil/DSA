#include <iostream>
using namespace std;
void invertedfullpyramid(int n) {
    //outerloop
    for(int row=0;row<n;row++){
        //spaces
        for(int space=0;space<row;space++){
            cout<<" ";
        }
            //stars
            for(int star=0;star<n-row;star++){
                cout<<"* "; 
            }
            cout<<endl;
        }
    }
  
int main() {
    int n;
    cout<<"enter n:"<<endl;
    cin>> n;
    invertedfullpyramid(n);
    return 0;
}
