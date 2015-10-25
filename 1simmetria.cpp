#include <iostream>
using namespace std;

int main()
{
    long int n=0,k=0,orig=0;
    int a=0;
    cout<<"enter a number  ";
    cin>>orig;
    n=orig;
    while (n>0)
    {
        a=n%10;
        k=(k+a)*10;
        n=(n-a)/10;
    }
    k=k/10;
    if (orig==k)
    {
        cout<<"simmetritchen";
    }
    else
    {
        cout<<"ne simmetrichen";
    }
    return 0;
}
