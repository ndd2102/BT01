#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, m = 0;
    cin >> n;
    for(int i = 1; i < sqrt(n); i++)
    {
        if(n % i == 0) m++;
    }
    if(m > 1) cout << "no";
    else cout << "yes";
}
