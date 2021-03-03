#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b ,c;
    double area , s;
    cin >> a >> b >> c;
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << area;
}
