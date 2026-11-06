#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,45,55};
    int n=sizeof (arr)/sizeof (arr[0]);
    int large=0;
    for(int i=0;i<n;i++){
        if (arr[i]>arr[0])
        large=arr[i];
        
 
    }
    cout<<large;
}