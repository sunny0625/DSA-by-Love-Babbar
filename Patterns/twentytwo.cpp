#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of N: ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // Space print karlo
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        // Number print karlo
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << row;
            col++;
        }
        cout << endl;  
        row++;
    }
    return 0;
}