#include <iostream>
using namespace std;

int main()
{
    long int n;
    int a=0,sum=0;
    cout<<"enter a number  ";
    cin>>n;
    while (n>=0)
    {
        a=0;
        a=n%10;
        if (a!=0)
        {
            sum=sum+a;
            n=n/10;
        }
        else
        {
            cout<<sum;
            return 0;
        }
    }
    cout<<sum;
    return 0;
}
