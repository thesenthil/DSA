 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (half diamond): ";
    cin >> n;

    // Upper half
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++)
            cout << " ";
        for (int star = 0; star < i+1; star++)
        if(i==0 /*|| i==n-1 */|| star==0 || star==i)
            cout << "* ";
            else
            cout<<"  ";
        cout << endl;
    }

    // Lower half (start from n-2 to avoid repeating middle row)
    for (int i = n - 1; i >= 0; i--) {
        for (int space = 0; space < n - i - 1; space++)
            cout << " ";
        for (int star = 0; star <= i; star++)
        if(i==0|| /*i==n-1 ||*/ star==0 || star==i)
            cout << "* ";
            else
            cout<<"  ";
        cout << endl;
    }

    return 0;
}
