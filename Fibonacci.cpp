#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of n: ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int j = a + b;
        cout << j << " ";
        a = b;
        b = j;
    }
    return 0;
}