#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double R,P,A;

    P = 3.14159;

    cin >>R;

    A = P*R*R;
    cout<<"A="<<fixed<<setprecision(4) <<A << endl;

return 0;
}
