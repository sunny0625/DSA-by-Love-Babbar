// Two Method for solving this type of pattern :)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Value: ";
    cin >> n;
    char ch;
    // char ch = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch;
            j++;
        }
        cout << endl;
        // ch++;        
        i++;
    }
    return 0;
}