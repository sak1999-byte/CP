#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    int square = 0, i = 0;
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
    cout << i << endl;
}