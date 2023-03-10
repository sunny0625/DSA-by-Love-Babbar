// Two Method for solving this type of pattern :)
#include<iostream>
using namespace std;
int main()
{
    int n;
    // int val;
    cout<<"Enter vlaue: ";
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        // val = i;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            // cout << val ++;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}