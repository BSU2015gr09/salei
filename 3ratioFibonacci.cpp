//отношение чисел Фибоначчи
#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int i=1;
    float arr[40],prev=0,next=0;
    arr[0]=0;
    arr[1]=1;
    cout<<" ________________________________"<<endl;
    cout<<"| the ratio of Fibonacci numbers |"<<endl;
    cout<<"|________________________________|"<<endl;
    cout<<"| next/previous | previous/next  |"<<endl;
    cout<<"|_______________|________________|"<<endl;
    for(i=2;i<40;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        prev=arr[i]/arr[i-1];
        next=arr[i-1]/arr[i];
        cout<<"|"<<setw(12)<<setprecision(8)<<prev;
        cout<<setw(4)<<"|";
        cout<<setw(3)<<fixed<<setprecision(8)<<" "<<next<<"   |"<<endl;
    }
     cout<<"|_______________|________________|"<<endl;
    return 0;
}
