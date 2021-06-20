#include <iostream>
using namespace std;
int main()
{
    char c;
    c = cin.get();
    int CharCount = 0, digitCount = 0, spaceCount = 0;
    while (c != '$')
    {
        if (c >= 'a' && c <= 'z')
        {
            CharCount++;
        }
        else if (c >= '0' && c <= '9')
        {
            digitCount++;
        }
        else if (c == '\n' || c == '\t' || c == ' ')
        {
            spaceCount++;
        }
        c = cin.get();
    }
    cout << CharCount << ' ' << digitCount << ' ' << spaceCount << endl;
}