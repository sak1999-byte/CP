#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Start value: " << endl;
    int start;
    int end;
    int step;
    cin >> start >> end >> step;
    while (start <= end)
    {
        int cel = (start - 32) * 5 / 9;
        cout << start << "\t" << cel << endl;
        start = start + step;
    }
}