#include <iostream>
using namespace std;

int main()
{

       int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
