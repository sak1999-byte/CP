#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n: " << endl;
    int n;
    cin >> n;
    int i = 1;
    int val = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1;
            // val = val + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        // val = val - 1;
    }
}