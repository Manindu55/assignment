#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double n1,n2;
cout<<"enter the first number: ";
cin>>n1;

cout<<"enter the second number:";
cin>>n2;

cout<<n1<<"^"<<n2<<" is "<<pow(n1,n2)<<endl;
cout<<"The square root of first number is "<<sqrt(n1)<<endl;
cout<<"The square root of the second number is "<<sqrt(n2)<<endl;

 cout<<min(n1,n2)<<" is the smallest."<<endl;
 cout<<max(n1,n2)<<" is the largest.";

 return 0;
}

