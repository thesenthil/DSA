#include<iostream>
using namespace std;

int getMultiplication(int x, int y ,int z){
    int result = x*y*z;
    return result;
}
void printNametenTimes(){
    for(int i=1; i<=10; i++){
        cout << "senthil" <<endl;
    }
}
void printMultiplies(int num) {
      for(int i=1; i<=10; i++) {
          cout << num * i << endl;
      }
}

int convertIntoCelcius(int far) {
int celcius =(far-32)*5/9;
return celcius;
}
char convertIntoUpperCase(char ch){
    char answer = ch-'a' + 'A';
return answer;
}
int main() {
    //function call
    
// 1st function

    // int multiplicationAnswer= getMultiplication(5,4,3);
    // cout << multiplicationAnswer << endl;

// 2nd function
           //    printNametenTimes();


//    3rd function
        //   printMultiplies(7);

// 4th function
    //   int far=32;
    //   int calculated_celcius = convertIntoCelcius(far);  
    //   cout<< "in celcius:" <<calculated_celcius<<endl;


//5th function
     char result = convertIntoUpperCase('s');
     cout<<"converted case:" << result<<endl;
    
    return 0;
}
