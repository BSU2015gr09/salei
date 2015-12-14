#include <iostream>
using namespace std; 

void enter_array (char a[], int size){
	cout<<"Введите 20 символов"<<endl;
	for (int i=0;i<size;i++){
		cin>>a[i];
	}
}

void print_array(char a[], int size){
	for (int i=0;i<size;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}

void found_z(char a[], int size){
	int p=0;
	for (int i=size-1;i!=0;i--){
		if (a[i]=='Z' || a[i]=='z'){
			a[i] ='F';
		    ++p;
			break;
		}
	}
	if (!p)cout<<"Массив не содержит букву Z "<< p<<endl;
}

int main(){
	setlocale(LC_ALL, "Russian");
	int const size=20;
	char a[size];
	enter_array(a,size);
	print_array(a,size);
	found_z(a,size);
	print_array(a,size);
	return 0;
}
