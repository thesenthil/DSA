#include <iostream>
#include <vector>
using namespace std;

// Function to find 2's complement of a binary number
vector<int> findComplement(vector<int> binary)
{
    int n = binary.size();

    // Store 1's complement
    vector<int> twoComp(n + 1, 0);

    // Step 1: Find 1's complement (flip bits)
    for (int i = 0; i < n; i++)
    {
        twoComp[i] = (binary[i] == 0) ? 1 : 0;
    }

    // Step 2: Add 1 to get 2's complement
    int carry = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = twoComp[i] + carry;

        twoComp[i] = sum % 2;
        carry = sum / 2;
    }

    // If carry remains, store it at index 0
    if (carry)
    {
        twoComp[0] = carry;
    }

    return twoComp;
}

int main()
{
    // Example binary number
    vector<int> binary = {0, 0, 0, 0};

    // Find 2's complement
    vector<int> twoComp = findComplement(binary);

    // Print result
    for (int i = 0; i < twoComp.size(); i++)
    {
        cout << twoComp[i];
    }
    cout << endl;
    return 0;
}