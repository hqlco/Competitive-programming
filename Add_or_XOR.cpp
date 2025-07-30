#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int count = 0;
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        // printf("a: %d b: %d x: %d y: %d\n", a, b, x, y);

        if (a % 2 == 1 && a - b > 1)
        {

            cout << -1 << endl;
            continue;
        }

        if (a % 2 == 0 && a - b > 0)
        {

            cout << -1 << endl;
            continue;
        }

        if (a % 2 == 1 && a - b == 1)
        {

            cout << y << endl;
            continue;
        }

        if (a == b)
        {

            cout << 0 << endl;
            continue;
        }

        if (x == y)
        {

            cout << (b - a) * x << endl;
            continue;
        }

        if (x < y)
        {

            cout << (b - a) * x << endl;

            continue;
        }

        if (x > y)
        {
            // cout << "coba " << x << endl;

            if (a % 2 == 1)
            {
                // cout << "coba " << x << endl;
                // ganjil
                // x+y+x+y+x
                int a_x = 0;
                int b_y = 0;

                if (b % 2 == 0)
                {
                    a_x = (b - a) / 2 + 1;
                    b_y = (b - a) / 2;
                }
                else
                {
                    a_x = (b - a) / 2;
                    b_y = (b - a) / 2;
                }

                cout << (a_x)*x + (b_y)*y << endl;
                continue;
            }
            else if (a % 2 == 0)
            {
                // cout << "coba " << x << endl;

                // genap
                // y+x+y+x+y
                int a_x = 0;
                int b_y = 0;

                if (b % 2 == 0)
                {
                    a_x = (b - a) / 2;
                    b_y = (b - a) / 2;
                }
                else
                {
                    a_x = (b - a) / 2;
                    b_y = (b - a) / 2 + 1;
                }

                cout << (a_x)*x + (b_y)*y << endl;
                continue;
            }
        }
    }
}