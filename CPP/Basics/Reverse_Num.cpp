#include <iostream>
using namespace std;
int main()
{
    // cout << "Enter n: " << endl;
    int n;
    cin >> n;
    int revNum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        revNum = revNum * 10 + rem;
        n = n / 10;
    }
    cout << revNum << endl;
}