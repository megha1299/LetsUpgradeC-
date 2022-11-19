#include<iostream>

using namespace std;
int main()
{
    /*Assignment operator*/
    int a = 5;
    a += 3;
    cout << a<<endl;

    int b = 7;
    b /= 2;
    cout << b<<endl;

    int c = 2;
    c -= 5;
    cout << c<<endl;

    int x = 6;
    x %= 1;
    cout << x<<endl;

    int y = 5;
    y &= 3;
    cout << y<<endl;

    /*Comparison operator*/
     int a1 = 5;
     int a2 = 3;
     cout << (a1 != a2)<< endl;

     int b1 = 7;
     int b2 = 8;
     cout << (b1 <= b2)<< endl;

     int c1 = 5;
     int c2 = 4;
     cout << (c1 >= c2)<< endl;

     int x1 = 5;
     int x2 = 3;
     cout << (x1 == x2)<< endl;

     int y1 = 5;
     int y2 = 3;
     cout << (y1 > y2)<< endl;

    /*Logical operator*/
     int A1 = 4;
     int A2 = 3;
     cout << (x > 3 && x < 12)<< endl;

     int X1 = 5;
     int X2 = 3;
     cout << (x > 3 || x < 4)<< endl;

     int Y1 = 5;
     int Y2 = 3;
     cout << (!(x > 3 && x < 10))<< endl;
return 0;
}