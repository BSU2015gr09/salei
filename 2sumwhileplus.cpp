//ввод и сумма чисел до первого отрицательного числа
#include <iostream>

using namespace std;

int main()
{
    double sum=0,num=0;
    while (num>=0)
    {
        cin>>num;
        sum+=num;
    }
    sum-=num;
    cout<<"sum = "<<sum<<endl;
    return 0;
}
