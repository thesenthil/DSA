#include<iostream>
using namespace std;

int main(){

    int height;
    cout<<"enter ur height :"<<endl;
    cin>>height;
    int weight;
      cout<<"enter ur weight:"<<endl;
    cin>>weight;
    if(height>5){
        if(weight>55)
        {
            cout<<"u are good bmi."<<endl;
        }
        else{
            cout<<"bhai tujhse na ho paayega."<<endl;
        }
    }
    else{
        cout<<"complan dila du."<<endl; 
    }

    return 0;
}