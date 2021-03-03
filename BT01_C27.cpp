#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        int n, m;
        cin >> n;
        m = ((n % 5 == 0  && n > 0) ? n : -1);
        cout << m << endl;
        if(m == -1)
        {
            cout << "bye";
            break;
        }
    }
}
