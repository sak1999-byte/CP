#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n :" << endl;
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces = spaces + 1;
        }
        int j = 1;
        while (j <= 2 * i - 1)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}