//write a c++ program to find the next greater element for every element in n array using stack.the next graeter element foran element is the first greater element present on its right side. if no greater elemnt exixts print -1 for that element
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> st;
    for(int i=0;i<n;i++){

    }
  int ele;
  cin>>ele;
  st.push(ele);
}

vector<int> nextg(n,-1);
int mx =st.top();
int idx=n-2;
while(!st.empty()){
    if(st.top(<mx{
        nextg[idx]=mx;
        else
        mx=st.top();
        idx--;
        st.pop();
        for(int i=0;i<n;i++){
            cout<<nextg[i]<<"";
        }
    }))
}



    for (int i = 0; i < n; i++) {
        cout << nextg[i] << " ";
    }

    return 0;
