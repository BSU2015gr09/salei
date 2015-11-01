//По любому натуральному число построить следующее натуральное число с той же суммой цифр.
#include <iostream>

using namespace std;

int main()
{
    unsigned int n=0,orign=0,a=0,orignext=0,so=0,sn=0,b=0, next=0;
    cout<<"Enter a value"<<endl;
    cin>>orign;
    n=orign;
    while (n!=0)
    {
        a=n%10;
        n=(n-a)/10;
        so+=a;
    }
    orignext=orign;
    do
    {
        orignext++;// рабочая но плохая идея.... Полный перебор - быдлокод )))
        next=orignext;
        sn=0;
        while (next!=0)
        {
            b=next%10;
            next=(next-b)/10;
            sn+=b;
        }
    }
    while (so!=sn);
    cout<<orignext;
    return 0;
}
