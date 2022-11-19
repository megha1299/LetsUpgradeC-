#include<iostream>

using namespace std;
int main()
{
    int flag,i=1,a;
    cout<<"First 10 prime numbers are:\n"<<"2";
    do
    {
    flag=0;
    a=1;
    do
    {
    if(i%a==0)
    flag++;
    a++;
    }
    while(a<=i);
    if(flag==2)
    cout<<"\n"<<i;
    i++;
    }
    while(i<=25);
return 0;
}