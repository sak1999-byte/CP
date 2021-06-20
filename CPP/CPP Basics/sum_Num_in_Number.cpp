#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n: " << endl;
    int n, even_sum = 0, odd_sum = 0;
    cin >> n;

    while (n > 0)
    {
        int rem = n % 10;
        if (rem % 2 == 0)
        {
            even_sum += rem;
        }
        else
        {
            odd_sum += rem;
        }
        n = n / 10;
    }
    cout << "even_sum:" << even_sum << endl;
    cout << "odd_sum:" << odd_sum << endl;
}