#include <iostream>
using namespace std;

void enter_array (char a[], int size){
	cout<<"Введите 20 символов"<<endl;
	for (int i=0;i<size;i++){
		cin>>a[i];
	}
}

void print_array(char a[], int size)
{
	cout<<"Ваш массив"<<endl;
	for (int i=0;i<size;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}

void the_most_frequently_occurring(char a[],int size){
	int z=0,k=0,b=0,n=0;
	char p=a[z],tmf=a[z];
	while (k<size){
		p=a[z];
		for (int i=k;i<size;i++){
			if (p==a[i]) n++;
		}
		k++;
		z++;
		if (b<n){
            b=n;
            tmf=p;
        }
		n=0;
	}
	cout<<"Элемент который встречается чаще всего  "<<tmf<<endl;
}

int main(){
	setlocale(LC_ALL, "Russian");
	int const size=20;
	char a[size];
	enter_array(a,size);
	print_array(a,size);
	the_most_frequently_occurring(a,size);
	return 0;
}