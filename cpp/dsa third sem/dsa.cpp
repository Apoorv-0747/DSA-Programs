// create 3 fuction name f1 f2 f3 and each will print function name define main function and first print main then call f1 f2 and f3 and at last print n call main function and show the n
#include <iostream>
using namespace std;

void f1()
{
    cout << "Function f1" << endl;
}

void f2()
{
    cout << "Function f2" << endl;
}

void f3()
{
    cout << "Function f3" << endl;
}

int main()
{
    cout << "Main function" << endl;

    f1();
    f2();
    f3();

    cout << "End of main function" << endl;

    return 0;
}