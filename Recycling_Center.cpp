// Codeforces Round 1039 (Div. 2)

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int T;
    cin >> T;
 
    while (T--)
    {
        int count = 0;
        int n, c;
        cin >> n >> c;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end(), greater<int>());
        int kali = 1;
        // printf("Sorted array: ");
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", a[i]);
        // }
        // printf("\n");
 
        for (int i = 0; i < n; i++)
        {
            if (a[i] * kali <= c)
            {
                // printf("%d\n", a[i] * kali);
                // printf("kali: %d\n", kali);
                // count++;
                a[i] = -1;
                kali = kali * 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != -1)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}