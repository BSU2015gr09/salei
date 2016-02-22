#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <clocale>

using namespace std;
const int size=100;

void generate_array (int (&arr)[size],int N){
    srand(time(0));
    for(int i=0;i<N;i++){
        arr[i]=rand()%100 -50;
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"_______________"<<endl;
}

void print_array (int (&arr)[size],int N){
    for(int i=0;i<N;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"_______________"<<endl;
}

void delete_first(int arr[], int &N)
{
	for(int i=0;i<N;i++){
		arr[i]=arr[i+1];
	}
	N-=1;
}

void add_new(int arr[],int &N,int num=0){
cout<<"Введите число которое хотите добавить  ";
	cin>> num;
	cout<<endl;
	N++;
	arr[N-1]=num;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int arr[size],N;
	cout<<"Введите количество эллементом массива  "<<endl;
	cin>>N;
	cout<<endl;
	if (N <= 100){
		generate_array(arr,N);
		delete_first(arr,N);
		cout<<"Удаление первого элемента массива"<<endl<<"_______________"<<endl;;
		print_array(arr,N);
		add_new(arr,N);
		cout << "Добавление нового элемента " << endl << endl;
		print_array(arr,N);
		delete_first(arr,N);
		add_new(arr,N);
		print_array(arr,N);
	}
	else
		cout<<"Введите число меньше 100"<<endl;
	return 0;
}
