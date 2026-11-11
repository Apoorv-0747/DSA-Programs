#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    // int n=sizeof (arr)/sizeof (arr[0]);
    int sum=0;
    for(int i=0;i<3;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
}