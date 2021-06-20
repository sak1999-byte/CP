#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout << "Enter n: " << endl;
    cin >> n;
    int ans;
    int a = 1;
    int b = 1;
    for (int i = 1; i < n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }
    cout << a << endl;
}