#include <iostream>
#include <clocale>
using namespace std;

void enter_array(int a[],int size){
	cout << "Введите десять целых чисел"<< endl;//лучше говорить size чисел
	for (int i = 0; i < size; i++){
		cin>>a[i];
	}
}

void print_array(int a[], int size, int n){
	for (int i=0;i<size-n;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}

void delete_n(int a[],int size,int &n){
	int i,k=0;
	cout << "Введите номер элемента который хотите удалить"<<endl;
    while (!k){
        cin >> i;
        if (i>=size-n || i<0) cout<<"Введите число от 1 до 10"<<endl; //лучше говорить до size 
        else{
            for (i-1;i<size;i++){// что значит i-1. Я не понимаю....
                a[i-1]=a[i];
            }
            n++;
            k++;
        }
    }
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const size=10;
	int a[size], n=0;
	enter_array(a,size);
	print_array(a,size,n);
	delete_n(a,size,n);
	print_array(a,size,n);
	return 0;
}
