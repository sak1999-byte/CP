#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int n, square = 0, i = 0;
    cin >> n;
    while (square < n)
    {
        i++;
        square = i * i;
        if (square > n)
        {
            i--;
            break;
        }
    }
    cout << i;
}
