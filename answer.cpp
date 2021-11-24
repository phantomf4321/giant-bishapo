#include <iostream>

using namespace std;

void map(int x, int y)
{
    if (x == y)
    {
        if (x != 7)
        {
            cout << 1 << endl;
            cout << 7 << " " << 7 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << 2 << " " << 2 << endl;
        }
    }
    else
    {
        cout << 1 << endl;
        cout << 7 << " " << 7 << endl;
    }
}

int main()
{
    int x, y;
    cin >> x >> y;

    map(x, y);

    system("pause");
    return 0;
}
