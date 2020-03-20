#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int code1,unit1,code2,unit2;
    double price1,price2,A,B,paid;

    cin>>code1>>unit1>>price1;

    cin>>code2>>unit2>>price2;

    A = unit1*price1;

    B = unit2*price2;

    paid=A+B;

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<paid<<endl;

    return 0;
}
