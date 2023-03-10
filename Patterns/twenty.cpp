#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Value of N: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int start = n - row + 1;
        while (start)
        {
            cout << "*";
            start--;
        }
        cout << endl;
        row++;
    }
    return 0;
}