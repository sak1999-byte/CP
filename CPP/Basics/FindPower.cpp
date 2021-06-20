#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int x, n, temp = 1;
    cin >> x >> n;
    while (n > 0)
    {
        temp *= x;
        n--;
    }
    cout << temp;
}
