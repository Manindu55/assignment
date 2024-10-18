#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<"enter the text:";
    getline(cin,a);

    cout<<a.length()<<" characters are in the string.";
    return 0;
}
