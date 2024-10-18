#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double pa,ri,tp;

    cout<<"enter princi amt:";
    cin>>pa;
    cout<<"enter rate of int:";
    cin>>ri;
    cout<<"enter the time:";
    cin>>tp;

    double si=(pa*ri*tp)/100;
    double ci=pa*pow((1+(ri/100)),tp)-pa;

    cout<<"simple interest is:"<<si<<endl;
    cout<<"compound interest is:"<<ci;
    return 0;



}
