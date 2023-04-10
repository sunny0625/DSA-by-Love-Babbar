#include<iostream>
using namespace std;
int main()
{
    char ch = '1';
    int num = 2;
    switch (num)
    {
    case 1:
        cout << "First"<< endl;
        break;
    case 2:
    cout << "Second"<< endl;
    switch (ch)
    {
    case '1':
        cout << "Value of ch is " << ch << endl;
        break;
    }
    break;
    default: 
    cout << "It is default"<< endl;
    }
    return 0;
}