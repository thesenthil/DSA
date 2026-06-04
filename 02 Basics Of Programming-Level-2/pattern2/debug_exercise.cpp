           // 1.Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

/*
#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter the character: ";
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << 0;
    }
    else if (c >= 'A' && c <= 'Z') {
        cout << 1;
    }
    else {
        cout << -1;
    }

    return 0;
}
*/

       // 2.Debug the code. It is trying to print the given pattern.

/*
Pattern
1
23
345
4567
*/


/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n) {         // loop for rows
        int j = i, count = 1;
        while (count <= i) { // print i numbers in row
            cout << j;
            j = j + 1;
            count = count + 1;
        }
        cout << "\n";
        i = i + 1;
    }

    return 0;
}
    */





        // 3. Debug the code. It is trying to print the given pattern.
    /*
Pattern
N = 4
   *
  ***
 *****
*******
*/
  
/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n:"<<endl;
    cin >> n;   // Example input: 4

    int i = 1;
    while (i <= n) {   // ✅ must include '='
        // print spaces
        int spaces = n - i;
        int k = 1;
        while (k <= spaces) {   // ✅ use <=
            cout << " ";
            k++;
        }

        // print stars
        int stars = 2 * i - 1;
        int m = 1;
        while (m <= stars) {   // ✅ use <=
            cout << "*";
            m++;
        }

        cout << "\n";   // new line after each row
        i++;
    }
    return 0;
}

*/
  
      // 4. Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4
1
22
333
4444
*/

/*
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
  cout<<"enter n:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){

        for(j=1;j<=i;j++){

        cout<<i;
        }
    cout<<endl;
    }
}
    */

        //  5. Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4
1
21
321
4321
*/
 #include<iostream>
using namespace std;


int main(){
  int i,j,n;
  cout<<"enter n:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
       int p=i;
        for(j=1;j<=i;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}

      8//  5. Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;

int main() {
    int i,j,n;;
    cin>>n;
    for(i=1;i<=n;i++){
        char p='A'-i;
        for(j=1;j<=i;j++){
            cout<<p;
            p++;  
        }
        cout<<endl;
    }
}