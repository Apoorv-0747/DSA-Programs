//write a c++ program to find the next greater element for every element in n array using stack.the next graeter element foran element is the first greater element present on its right side. if no greater elemnt exixts print -1 for that element
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> st;
    vector<int> nextg(n, -1);

    for (int i = n - 1; i >= 0; i--) {

        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            nextg[i] = st.top();
        }

        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << nextg[i] << " ";
    }

    return 0;
}