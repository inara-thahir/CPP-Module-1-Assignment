#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 0, b = 1;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";

        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;

    return 0;
}