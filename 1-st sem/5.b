#include <iostream>
#include <clocale>
using namespace std;
const int size=10;
void enter_array(int arr[size]){
	cout << "Введите " <<size<< " элементов массива"<<endl;
	for (int i=0;i<size;i++)
		cin>>arr[i];
}

void find_number(int arr[size],int num=0){
	cout <<"Введите элемент, индекс которого необходимо узнать  ";
	cin>>num;
	for (int i=0;i<size;i++){
		if (arr[i]==num){
			cout<<"Индекс элемента равен: "<<i<<endl;
			break;
		}
		else {i=-1;
            cout<<"В массиве нет данного элемента   "<<i<<endl;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[size];
	enter_array(arr);
	find_number(arr);
	return 0;
}
