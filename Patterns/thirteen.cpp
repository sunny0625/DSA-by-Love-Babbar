#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Value: ";
    cin >> n;
    char ch = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}