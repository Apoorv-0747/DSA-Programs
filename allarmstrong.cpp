
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, rem, sum;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;
    sum = 0;

    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }

    if (sum == n)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
