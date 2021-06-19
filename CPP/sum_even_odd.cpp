#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n: " << endl;
    int n, even_sum = 0, odd_sum = 0;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
        i = i + 1;
    }
    cout << "even_sum :" << even_sum << endl;
    cout << "odd_sum :" << odd_sum << endl;
}