#include <iostream>
using namespace std;

void TOH(int n, char from, char to, char temp)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << from
             << " to " << to << endl;
        return;
    }

    // N-1 disks ko source se temporary rod par bhejo
    TOH(n - 1, from, temp, to);

    // Sabse bada disk destination par bhejo
    cout << "Move disk " << n << " from "
         << from << " to " << to << endl;

    // N-1 disks ko temporary se destination par bhejo
    TOH(n - 1, temp, to, from);
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Enter a positive number";
        return 0;
    }

    TOH(n, 'A', 'C', 'B');

    return 0;
}