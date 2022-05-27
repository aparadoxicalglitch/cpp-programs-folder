// Factorial of 212 with modulo 10^9+7

#include <iostream>

using namespace std;

int factorial(int n, int m)
{
    if (n == 0)
        return 1;
    return (n % m * factorial(n - 1, m)) % m;
}

int factorial1(int n, int m)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = (ans * i) % m;
    }
    return ans;
}

int main()
{
    int m = 1000000007;
    cout << "Factorial of 212 with modulous of 10^9+1" << factorial(212, m);
}

// Program to find the factorial using mod of pow(10, 9) + 7...

// #include <bits/stdc++.h>
//     using namespace std;

// int factorial(int n)
// {
//     int f = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         f = (f * i) % 1000000007;
//     }
//     return f;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout << factorial(n) << endl;
//     return 0;
// }
