#include <iostream>
using namespace std;
int main()
{
    // cout << "Enter n: " << endl;
    long n;
    cin >> n;
    long binary = 0;
    long pow = 1;
    while (n != 0)
    {
        long rem = n % 2;
        binary = binary + (pow * rem);
        pow = pow * 10;
        n = n / 2;
    }
    cout << binary << endl;
}