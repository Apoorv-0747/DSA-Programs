// you are given two strings sand r and an array of integers with t value positive integers represents right rotation by the given value applt these t operations on s and compare the result with R if they are the same print "password accepted" otherwise print "Try again"
#include <bits/stdc++.h>

using namespace std;

int main() {
    string S, R;
    cin >> S >> R;

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int k;
        cin >> k;

        // Right rotation
        k = k % S.length();

        S = S.substr(S.length() - k) + S.substr(0, S.length() - k);
    }

    if (S == R)
        cout << "Password Accepted";
    else
        cout << "Try Again";

    return 0;
}