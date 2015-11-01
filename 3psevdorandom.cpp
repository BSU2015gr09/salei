#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;
int main()
{
    int a=4096,c=150889,m=714025,i=0;
    int arr[20]; 
    cout<<"Enter a value..";
    cin>>arr[0];
    cout<<"1 := "<<arr[0]<<endl;
    for (i=1;i<20;i++)
    {
        arr[i]=(a*arr[i-1]+c)%m;
        cout<<setw(2)<<left<<i+1<<":= "<<arr[i]<<endl;
    }
    return 0;
}
