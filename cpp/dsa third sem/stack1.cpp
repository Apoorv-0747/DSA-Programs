#include <iostream>
using namespace std;

class Stack {
    int arr[20];
    int top;
    int size;

public:
    Stack(int n) {
        size = n;
        top = -1;
    }

    int Underflow() {
        if (top == -1)
            return 1;
        return 0;
    }

    int Overflow() {
        if (top == size - 1)
            return 1;
        return 0;
    }

    void push(int x) {
        if (Overflow() == 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (Underflow() == 1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    void display() {
        if (Underflow() == 1) {
            cout << "Stack is empty" << endl;
            return;
        }

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(20);

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();

    return 0;
}