#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max, maxab;

    cin >> a >> b >> c;

    maxab = ((a + b + abs(a - b))) / 2;

    max = ((maxab + c + abs(maxab - c))) / 2;
    cout << max << " "
         << "eh o maior" << endl;
    return 0;
}