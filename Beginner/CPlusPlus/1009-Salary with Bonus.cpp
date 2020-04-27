#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string name;
    double salary, sale, bonus, result;

    cin >> name;

    cin >> salary;
    cin >> sale;

    bonus = sale * 0.15;

    result = salary + bonus;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << result << "\n";

    return 0;
}