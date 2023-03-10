// Two Method for solving this type of pattern :)
#include <iostream>
using namespace std;
int main()
{
    int n;
    char b = 65;
    cout << "Enter the value: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // b = 'A' + i - 1;
            // cout << b;
            cout << b << " ";
            j++;
        }
        cout << endl;
        b++;
        i++;
    }
    return 0;
}