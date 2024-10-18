#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cout<<"enter the first name:";
    getline(cin,a);

    cout<<"enter the last name:";
    getline(cin,b);

    cout<<"full name is "<<a.append(" "+b);
    return 0;

}
