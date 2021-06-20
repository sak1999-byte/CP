#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int allow;
    double basic;
    char grade;

    cin >> basic >> grade;
    double hra = basic * 0.2;
    double da = basic * 0.5;
    double pf = basic * 0.11;
    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    double totolSalary = (basic + hra + da + allow - pf);
    int TS = round(totolSalary);
    cout << TS << endl;
}