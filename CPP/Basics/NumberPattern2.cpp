#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }
        for (j = 1; j <= i; j++)
        {
            cout << i + j - 1;
        }
        cout << endl;
    }
}