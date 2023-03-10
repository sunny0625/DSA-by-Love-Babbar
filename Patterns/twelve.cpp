// Two Method for solving this type of pattern :)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char b;
        // char b = 65;
        while (j <= n)
        {
            b = 'A' + j - 1;
            cout << b;
            // cout << b++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}