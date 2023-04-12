#include<iostream>
using namespace std;
int main()
{
    int cash;
    cout << "Enter cash amount: " << endl;
    cin >> cash;
    int hundred, fifty, twenty, ten, one, start = 0;
    if (cash >= 100)
    {
        start = 100;
    }
    else if (cash >= 50 && cash < 100)
    {
        start = 50;
    }
    else if (cash >= 10 && cash < 50)
    {
        start = 10;
    }
    else
    {
        start = 1;
    }
    switch (start)
    {
    case 100:
        hundred = cash / 100;
        cash = cash % 100;
        cout << "100 rupee notes: " << hundred << endl;
        break;
    case 50:
        fifty = cash / 50;
        cash = cash % 50;
        cout << "50 rupee notes: " << fifty << endl;
        break;
    case 20:
        twenty = cash / 20;
        cash = cash % 20;
        cout << "20 rupee notes: " << twenty << endl;
        break;
    case 10:
        ten = cash / 10;
        cash = cash % 10;
        cout << "10 rupee notes: " << ten << endl;
        break;
    case 1:
        one = cash / 1;
        cout << "1 rupee notes: " << one << endl;
        break;
    }
    return 0;
}