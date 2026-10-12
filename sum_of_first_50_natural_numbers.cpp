
/*
 * Program    : Sum of First 50 Natural Numbers (C++)
 * Name       : M.Arham Sikander 
 * Reg No     : L1S26BSCS0059
 * Assignment : 01 - Getting Started with GitHub
 */

#include <iostream>
using namespace std;

int main()
{
    const int N = 50;
    int sum = 0;

    // Method 1: Add numbers one by one using a loop
    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }

    cout << "Sum of first " << N
        << " natural numbers (loop): " << sum << endl;

    // Method 2: // Method 2: Verify the result using formula n(n+1)/2
    int formulaSum = N * (N + 1) / 2;

    cout << "Sum using formula n(n+1)/2: "
        << formulaSum << endl;

    return 0;
}
