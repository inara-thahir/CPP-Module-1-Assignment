#include <iostream>
using namespace std;

int main()
{
    int n, original, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0)
    {
        int digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if (sum == original)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}