#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number, hour;
    double amount, salary;

    cin >> number;
    cin >> hour;
    cin >> amount;

    salary = hour * amount;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}
