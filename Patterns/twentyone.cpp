#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Value of N: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // Space print karlo
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        // Star print karlo
        int start = n - i + 1;
        while (start)
        {
            cout << "*";
            start--;
        }
        cout << endl;
        i++;
    }
    return 0;
}