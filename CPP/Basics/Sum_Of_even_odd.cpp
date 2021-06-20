#include <iostream>
using namespace std;

int main()
{
    int n, a, sum_even = 0, sum_odd = 0;
    cin >> n;
    while (n > 0)
    {
        a = n % 10;
        if (a % 2 == 0)
        {
            sum_even += a;
        }
        else
        {
            sum_odd += a;
        }
        n = n / 10;
    }
    cout << sum_even << " " << sum_odd;
}
