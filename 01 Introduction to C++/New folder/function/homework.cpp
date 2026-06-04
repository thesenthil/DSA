
/*

#include <iostream>
using namespace std;
 
// function to print number from 1 to 1oo

void printNumber100Times(){
   for(int i=1; i<=100; i++)
   cout<<i<<endl;
}

//    function to find simple intrest

void simpleInterest(float principal, float rate, float time) {
    float si = (principal * rate * time) / 100;
    cout << "Simple Interest = " << si << endl;
}


function to print prime number from 1 to 100




main() {


// printNumber100Times();


                            // simple intrest 
// float P, R, T;

// cout<< "enter principle :" <<endl;
// cin >> P;

// cout<< "enter rate :" <<endl;
// cin >> R;

// cout <<"enter time:" <<endl;
// cin >> T;

                            // call function
// simpleInterest(P,R,T); 



    return 0;
}

*/






/*
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) 
    return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to print prime numbers from 1 to 100
void printPrimes() {
    cout << "Prime numbers from 1 to 100 are:" << endl;
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    printPrimes();
    return 0;
}
*/






/*

#include <iostream>
using namespace std;

// Function to check voting eligibility
void checkVotingEligibility(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are NOT eligible to vote." << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Call function
    checkVotingEligibility(age);

    return 0;
}


*/





#include <iostream>
#include <cmath>  // for pow()
using namespace std;

// Function to calculate Future Value of SIP
double calculateSIP(double P, double annualRate, int years) {
    double r = annualRate / (12 * 100); // Monthly rate (convert % to decimal)
    int n = years * 12;                 // Total months

    // Formula: FV = P * ((1+r)^n - 1) / r * (1+r)
    double FV = P * ( (pow(1 + r, n) - 1) / r ) * (1 + r);

    return FV;
}

int main() {
    double P, rate;
    int years;

    // Input
    cout << "Enter monthly SIP amount: ";
    cin >> P;
    cout << "Enter annual interest rate (%): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> years;

    // Calculate future value
    double futureValue = calculateSIP(P, rate, years);

    // Output
    cout << "\nFuture Value of your SIP investment = " << futureValue << endl;

    return 0;
}












