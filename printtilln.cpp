#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Value of n: ";
    cin >> n;
    cout << "Printing the number till n:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;
}