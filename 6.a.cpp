#include <iostream>
#include <clocale>
using namespace std;
const int maxsize=100;

void PUSH (int (&a)[maxsize],int &top,int element=0){
    top++;
    if (top<=maxsize){
        cin>>element;
        a[top]=element;
    }
    else{
        cout<< "Стек заполнен"<<endl;
        top--;
    }    
}

void view_top (int a[maxsize],int top){
    cout<<"Элемент вершины стека:  "<<a[top]<<endl;
}

void view_quantity (int a[maxsize],int top){
    cout<<"Количество элементов в стеке:  "<<top+1<<"/100"<<endl;
}

void POP (int (&a)[maxsize],int &top,int &element){
    top--;
    if (top>=-1){
        element=a[top+1];
        a[top+1]=0;
    }
    else{
        cout << "Стек пуст"<<endl;
        top++;
    }
}

void esc_element(int element){
    cout<<"Число, которое мы достали из стека:  "<<element<<endl;
}



int main(){
    setlocale (LC_ALL,"Russian");
    int a[maxsize]={};
    int top=-1,element=0;
    PUSH (a,top);
    PUSH (a,top);
    PUSH (a,top);
    view_top(a,top);
    view_quantity(a,top);
    POP (a,top,element);
    view_quantity(a,top);
    POP (a,top,element);
    esc_element(element);
    view_quantity(a,top);
    POP (a,top,element);
    esc_element(element);
    view_quantity(a,top);
    POP (a,top,element);
    PUSH (a,top);
    view_quantity(a,top);

    return 0;
}