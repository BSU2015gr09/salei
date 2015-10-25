#include <iostream>


using namespace std;

int main()
{
    long double s=1,sn=1, eps=0.00001;
    int x,i;
    cout << "enter value exp^";
    cin >>x;
    for (i=1;i<=x;i++){
    while (sn>eps){
        sn=sn*x/i;
        s=s+sn;
        cout <<sn;
        }
    }
     cout << "exp^"<<x<<" = "<<sn;

    return 0;
}
