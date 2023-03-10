#include<iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout<<"Enter vlaue: ";
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ++ count <<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}