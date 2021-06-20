#include <iostream>
using namespace std;

int main()
{

       int S, E, W;
    cin >> S >> E >> W;
    while (S <= E)
    {
        int cel = (S - 32) * 5 / 9;
        cout << S << "\t" << cel << endl;
        S = S + W;
    }
}
