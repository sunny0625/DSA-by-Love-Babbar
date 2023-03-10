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
        int space = n - row;
        // Space print karlo
        while (space)
        {
            cout << " ";
            space--;
        }
        // Star print karlo
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        
        row++;
    }
    
    return 0;
}