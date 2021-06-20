#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    long n;
    // cout << "Enter n: " << endl;
    cin >> n;
    int number = 0;
    int count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        number += rem * pow(2, count);
        count++;
        n = n / 10;
    }
    cout << number << endl;
}