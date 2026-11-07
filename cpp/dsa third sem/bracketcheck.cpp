#include<bits/stdc++.h>
using namespace std;

bool isValid(string expression) {
    stack<char> s;

    for (char ch : expression) {
     
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        }
       
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (s.empty())
                return false;

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string expression;

    cout << "Enter expression: ";
    getline(cin, expression);

    if (isValid(expression))
        cout << "Result: VALID" << endl;
    else
        cout << "Result: INVALID" << endl;

    return 0;
}