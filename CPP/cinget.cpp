#include <iostream>
using namespace std;
int main()
{
    // Jab bhi humhe Space \n \t input lena hai to consider krenge cin.get();
    char c;
    c = cin.get();
    int count = 0;
    while (c != '$')
    {
        count++;
        c = cin.get();
    }
    cout << count << endl;
}