#include <iostream>
using namespace std;
int main()
{
    cout << "Enter n: " << endl;
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    bool isDec = true;
    int i = 1;
    while (i < n - 1)
    {
        int current;
        cin >> current;
        if (current < prev)
        {
            if (isDec == false)
            {
                cout << "False" << endl;
                return 0;
            }
        }
        else
        {
            if (isDec)
            {
                isDec = false;
            }
        }
        i++;
    }
    cout << "true" << endl;
}