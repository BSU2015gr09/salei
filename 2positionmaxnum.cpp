//ввод целое число, вывод его максимальной цифры и номера позиции этой цифры.
#include <iostream>

using namespace std;

int main()
{
    long long int num=0;
    short int pos=0,mx=0,i=0,p=0;
    cout << "Enter integer" << endl;
    cin >> num;
    while (num!=0)
    {
        i=num%10;
        num-=i;
        num/=10;
        pos++;
        if (mx<=i)
        {
            mx=i;
            p=pos;
        }
    }
    cout<<"max number = "<<mx<<"   it's position = "<<p<<endl;
    return 0;
}
