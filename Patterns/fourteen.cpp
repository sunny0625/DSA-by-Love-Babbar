#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Value: ";
    cin >> n;
    char ch;
    int i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j <= n)
        {
            ch = 'A' + i + j - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}