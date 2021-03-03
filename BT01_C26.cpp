
#include<iostream>
using namespace std;

int main()
{
    int n;
    double s = 0;
    cin >> n;
    int a[30];
    for(int i = 0 ; i < n; i++)
        cin >> a[i];
    for(int i = 0 ; i < n; i++)
        s += a[i];
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1


             ; j < n ; j++)
            {
                if(a[i] > a[j]){
                swap (a[i], a[j]);
                }
            }
    }
        cout << s / n << endl << a[0] << endl << a[n - 1] << endl;
}
