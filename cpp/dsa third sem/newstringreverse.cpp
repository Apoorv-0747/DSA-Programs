#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    string ans = s;

    int i = 0;
    int j = s.length() - 1;

    while (i < j) {

        if (!isalpha(s[i])) {
            i++;
        }
        else if (!isalpha(s[j])) {
            j--;
        }
        else {
            swap(ans[i], ans[j]);
            i++;
            j--;
        }
    }

    cout << ans << endl;

    return 0;
}