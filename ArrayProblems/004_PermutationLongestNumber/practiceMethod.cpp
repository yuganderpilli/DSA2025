#include <bits/stdc++.h>
using namespace std;
void multiply(vector<int> &data, int &sizes, int multiplier)
{
    int carry = 0;
    for (int i = 0; i < sizes; i++)
    {
        int res = data[i] * multiplier + carry;
        data[i] = res % 10;
        carry = res / 10;
    }
    while (carry > 0)
    {
        data[sizes] = carry % 10;
        carry = carry / 10;
        sizes++;
    }
}

int main()
{
    int num = 5;
    int sizes = 1;
    vector<int> temp(1000, 0);
    temp[0] = 1;
    for (int i = 2; i <= num; i++)
    {
        multiply(temp, sizes, i);
    }

    for (int i = sizes - 1; i >= 0; i--)
    {
        cout << temp[i];
    }
}