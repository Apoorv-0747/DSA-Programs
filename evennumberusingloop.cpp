#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=1,c=0;
    while (i<=1250)
    {
        if (i%2==0)
        {cout<<i;
        c++;
    }
    i++ ;
    }
    cout<<"total even numbers are"<<c;
    return 0;
}