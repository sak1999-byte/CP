#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n: " << endl;
    int n;
    cin >> n;
    int d = 2;
    bool divided = false;
    while (d < n)
    {
        if (n % d == 0)
        {
            cout << "Not Prime" << endl;
            divided = true;
        }
        d = d + 1;
    }
    if (!divided)
    {
        cout << "Prime" << endl;
    }
}