#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n" << endl;
    int n;
    cin >> n;
    int d = 1;
    int sum = 0;
    while (d <= n)
    {
        if (d % 2 == 0)
        {
            sum = sum + d;
        }
        d = d + 1;
    }
    cout << sum << endl;
}