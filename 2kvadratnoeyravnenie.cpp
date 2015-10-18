// квадратное уравнение
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a=0,b=0,c=0,D=0,x1=0,x2=0;
    cout << "enter a,b,c" << endl;
    cin >>a>>b>>c;
    D=b*b-4*a*c;
    if ((a==0)&&(b==0)&&(c==0)){
        cout<<"x = any number";
    }
    else
    {
        if ((a==0)&&(b==0))
        {
            cout<<"no roots";
        }
        else
        {
            if((a==0)&&(c==0))
            {
                cout<<"x1 = "<<x1<<"i";
            }
            else
            {
                if ((b==0)&&(c==0))
                {
                    cout<<"x1=x2= 0";
                }
                else
                    {if(a==0)
                    {
                        x1=-c/b;
                        cout<<"x1 = "<<x1;
                    }
                    else
                    {
                        if(b==0)
                        {
                            x1=-c/a;
                            if (x1<0)
                            {
                                x1=sqrt(-x1);
                                cout<<"x1 = "<<x1<<"i"<<endl;
                            }
                            else
                            {
                                x1=sqrt(x1);
                                x2=-sqrt(x1);
                                cout<<"x1 = "<<x1<<endl<<"x2 = "<<x2<<endl;
                            }
                        }
                        else
                        {
                            if (c==0)
                            {
                                x1=0;
                                x2=-b/a;
                                cout <<"x1 = "<<x1<<endl<<"x2 = "<<x2;
                            }
                            else
                            {
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
                        }
                    }
                }
            }
        }
    }
    return 0;
}
