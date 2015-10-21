/* квадратное уравнение ( попытка сделать на свичах, работает только при целых а, б, с по причине того, что свич не
 распознает дабл под собой, была идея добавить переменные по типу буул и делать через них, но отказался от этого)*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a=0,b=0,c=0;
    double D=0,x1=0,x2=0;
    cout << "enter a,b,c" << endl;
    cin >>a>>b>>c;
    D=b*b-4*a*c;

    switch (int(a)){
    case 0:
        switch (int(b)){
        case 0:
            switch (int(c)){
            case 0:
                cout<<"x = any number";
            break;
            default:
                cout<<"no roots";
            }
            break;
        default:
            switch (int(c)){
            case 0:
                cout<<"x1 = "<<x1;
            break;
            default:
                x1=-c/b;
                cout<<"x1 = "<<x1;
            }
        break;
        }
    break;
    default:
        switch (int(b)){
        case 0:
            switch (int(c)){
            case 0:
                cout<<"x1=x2= 0";
            break;

            default:
                x1=-c/a;
                if (x1<0){
                    x1=sqrt(-x1);
                    cout<<"x1 = "<<x1<<"i"<<endl;
                }
                else{
                    x1=sqrt(x1);
                    x2=-sqrt(x1);
                    cout<<"x1 = "<<x1<<endl<<"x2 = "<<x2<<endl;
                }
            }
            break;
        default:
            switch (int(c)){
            case 0:
                x1=0;
                x2=-b/a;
                cout <<"x1 = "<<x1<<endl<<"x2 = "<<x2;
            break;
            default:
                if (D==0)
                {
                    x1=(-b)/(2*a);
                    cout<<"x1=x2= "<<x1<<endl;
                }
                else
                {
                    if (D>0)
                    {
                    x1=((b*(-1)-sqrt(D))/(2*a));
                    x2=((b*(-1)+sqrt(D))/(2*a));
                    cout<<"x1 = "<<x1<<endl<<"x2 = "<<x2<<endl;
                    }
                    else
                    {
                        x1=-b/(2*a);
                        D=sqrt(-D)/(2*a);
                        cout<<"x1 = "<<x1<<"+"<<D<<"i"<<endl<<"x2 = "<<x1<<"-"<<D<<"i"<<endl;
                    }
                }
            }
            break;
        }
        break;
    }
return 0;
}
