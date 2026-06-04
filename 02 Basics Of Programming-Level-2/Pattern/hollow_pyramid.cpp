 #include <iostream>
using namespace std;

void hollowpyramid(int n) {
    for (int row = 0; row < n; row++) {

        for (int space = 0; space < n - row - 1; space++)
            cout << " ";

        for (int star = 0; star <= row; star++) {
            if (row == 0 || row == n - 1 || star == 0 || star == row)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    hollowpyramid(n);
    return 0;
}
