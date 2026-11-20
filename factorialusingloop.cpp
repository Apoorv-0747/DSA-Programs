#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=1,a,fact=1;
    cin>>a;
    while (i<=a)
    {fact=fact*i;
    i++;
}
cout<<fact;
return 0;
}
