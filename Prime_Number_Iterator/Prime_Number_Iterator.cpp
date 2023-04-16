// Prime_Number_Iterator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

void prime(int n) {
    // Prime value check variable
    bool isPrime = true;

    // Check if n is less than 2 or an even number above 2
    if (n < 2 || n > 2 && n % 2 == 0) isPrime = false;
    else {
        // Check if n is divisible by every odd number from 3 and up to the (rounded-up) square root of n
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                isPrime = false;
            }
        }
    }
    // Print message that the provided value is not a prime numeber if the prime value check variable is false
    if(!isPrime) cout << n << " is not a prime number!" << endl;
    else {
        cout << "Here are all prime numbers, up to the number you provided:" << endl;
        cout << 2 << endl;
        // Begin print ieration of all prime numbers up to the provided prime number
        for (int i = 3; i <= n; i+=2) {
            if (i > 2 && i % 2 == 0) isPrime = false;
            else {
                // Check if n is divisible by every odd number from 3 and up to the (rounded-up) square root of n
                for (int j = 3; j <= sqrt(i); j += 2) {
                    if (i % j == 0) {
                        isPrime = false;
                    }
                }
            }
            // Print the prime number
            if (isPrime) cout << i << endl;
            else isPrime = true;
        }        
    }
}

int main()
{
    int userInput = -1;
    while (userInput != 0) {
        cout << "Enter a prime number to iterate through prime numbers, starting from 2 to that prime number." << endl;
        cout << "Or enter '0' to run and then exit." << endl;
        cin >> userInput;
        prime(userInput);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


