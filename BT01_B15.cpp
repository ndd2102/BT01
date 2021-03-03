#include<iostream>
#include<string>
using namespace std;

int main()
{
    string f0, f1,f2;
    cin >> f0 >> f1;
    for(int i = 0 ; i < 10; i++)
    {
        f2 = f0 + f1;
        cout << f2 << endl;
        f0 = f1;
        f1 = f2;
    }
}
