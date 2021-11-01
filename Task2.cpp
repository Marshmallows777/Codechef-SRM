#include "bits/stdc++.h"
using namespace std;
int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
int main()
{
    int n, m;
    double x, y;
    cin >> n;
    int org_n = n;
    n = n * n;
    int digits = countDigits(n);
    if (digits % 2 == 0)
    {
        m = digits / 2;
        x = n / pow(10, m);
        y = n % pow(10, m);

        if (x + y == org_n)
        {
            cout << "Chef Number";
        }
        else
        {
            cout << "Not Chef Number";
        }
    }
    return 0;
}
