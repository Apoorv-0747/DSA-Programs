#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,45,8,7,5};
    int n=sizeof (arr)/sizeof (arr[0]);
    int x;
    cout<<"enter the searching digit"<<endl;
    cin>>x;
    bool flag = false; //false means absent
    for(int i=0;i<n;i++){
        if (arr[i]==x){
            flag=true; //true means present
            break;
        }
 
    }
    if (flag==true)cout <<x<<" is present";
    else cout<<x<<" is not present";
    
}