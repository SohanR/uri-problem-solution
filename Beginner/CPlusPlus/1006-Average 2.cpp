#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A,B,C,m;

    cin>>A>>B>>C;

    m = ((A*2)+(B*3)+(C*5))/(2+3+5);

    cout<<"MEDIA = "<<fixed<<setprecision(1)<<m<<endl;

    return 0;
}
