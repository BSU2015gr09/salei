#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    {
    srand(time(0));
    int sy=0,sc=0,b=0,a=0,c=0,d=0,draw=0,win=0,lose=0 ;
    char ch;
    do
    {
    cout<<"If you want to play press (p) ";
    cin>>ch;
    cout<<endl;
    if(ch=='p'||ch=='P'){
        a= rand()%6+1;
        b= rand()%6+1;
        c= rand()%6+1;
        d= rand()%6+1;
        switch (a){
            case 1:
                cout<<" ------- "<<endl;
                cout<<"|       |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"|       |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 2:
                cout<<" ------- "<<endl;
                cout<<"| o     |"<<endl;
                cout<<"|       |"<<endl;
                cout<<"|     o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 3:
                cout<<" ------- "<<endl;
                cout<<"| o     |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"|     o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 4:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"|       |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 5:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 6:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
        }
        switch (b){
            case 1:
                cout<<" ------- "<<endl;
                cout<<"|       |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"|       |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 2:
                cout<<" ------- "<<endl;
                cout<<"| o     |"<<endl;
                cout<<"|       |"<<endl;
                cout<<"|     o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 3:
                cout<<" ------- "<<endl;
                cout<<"| o     |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"|     o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 4:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"|       |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 5:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 6:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
        }
        sy=a+b;
        cout << a<<" "<<b <<endl<<"your sum = "<<sy<< endl;
        switch (c){
            case 1:
                cout<<" ------- "<<endl;
                cout<<"|       |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"|       |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 2:
                cout<<" ------- "<<endl;
                cout<<"| o     |"<<endl;
                cout<<"|       |"<<endl;
                cout<<"|     o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 3:
                cout<<" ------- "<<endl;
                cout<<"| o     |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"|     o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 4:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"|       |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 5:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 6:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;

        }
        switch (d){
            case 1:
                cout<<" ------- "<<endl;
                cout<<"|       |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"|       |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 2:
                cout<<" ------- "<<endl;
                cout<<"| o     |"<<endl;
                cout<<"|       |"<<endl;
                cout<<"|     o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 3:
                cout<<" ------- "<<endl;
                cout<<"| o     |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"|     o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 4:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"|       |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 5:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"|   o   |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
            case 6:
                cout<<" ------- "<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<"| o   o |"<<endl;
                cout<<" ------- "<<endl;
            break;
        }
        sc=d+c;
        cout << c<< " "<<d<<endl<<"computer sum = "<<sc<<endl;
        if (sy==sc){
            cout<<"...draw..."<<endl<<endl;
            draw+=1;
        }
        else {
            if (sy>sc){
                cout <<"...you WIN!..."<<endl<<endl;
                win+=1;
            }
            else{
                cout <<"...you LOSE..."<<endl<<endl;
                lose+=1;
            }
        }
    }
    else
    cout <<"Your statistics:"<<endl<<"WINS: "<<win<<endl<<"LOSES: "<<lose<<endl<<"DRAWS:"<<draw<<endl<<endl<<"Bye-Bye..."<<endl;
    }
    while (ch=='p'||ch=='P');
    }
    return 0;
}
