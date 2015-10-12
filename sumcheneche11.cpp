#include <iostream>

using namespace std;

int main()
{
    long int n;
    int sche=0,sneche=0,a=0,z=3;
    cout << "enter a value ";
    cin >> n;
    while (n!=0){
        a=n%10;
        if (z%2==1){
            sneche+=a;
        }
        else{
            sche+=a;
        }
        n/=10;
        z+=1;
    }
    if (sche==sneche){
        cout<<"delitsa na 11";
    }
    else {if (sche>sneche){
                if (sche-sneche==11){
                    cout<<"delitsa na 11";
                }
                else {
                    cout<<"ne delitsa na 11";
                }
    }
             else {if (sneche-sche==11){
                    cout<<"delitsa na 11";
                   }
                   else {
                    cout<<"ne delitsa na 11";
                   }
            }
    }
    cout <<endl<< "sum nechet = "<<sneche<<endl<<"sum chet = "<<sche<<endl;
    return 0;
}
