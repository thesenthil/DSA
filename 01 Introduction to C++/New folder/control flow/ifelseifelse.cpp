 #include<iostream>
using namespace std;

int main(){

    int marks;
    cout<<"enter ur marks :"<<endl;
    cin>>marks;
    if(marks>90){
        cout<<"ur grade is A."<<endl;
    }
else if(marks>80){
        cout<<"ur grade is B."<<endl; 
    }
 else if(marks>70){
        cout<<"ur grade is C."<<endl; 
    }
else{
    cout<<"you failed"<<endl;
}
    return 0;
}