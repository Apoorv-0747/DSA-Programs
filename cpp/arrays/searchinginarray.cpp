#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,45,8,7,5};
    int n=sizeof (arr)/sizeof (arr[0]);
    int x;
    cout<<"enter the searching digit"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if (arr[i]==x){
            cout<<x<<" is present";
            break;
        }
 
    }
    
}