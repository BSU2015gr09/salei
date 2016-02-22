//	В одномерном массиве найти k-й максимальный элемент.
#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdlib>

using namespace std;

void data_input(int &N,int &k){
    int f=0;
    while (!f){
        cout<<"Введите количество элементов массива: ";
        cin>>N;
        if(N>0)f++;
    }
    while(f){
        cout<<endl<<"Введите номер максимума: ";
        cin>>k;
        if(k>0 && k<N)f--;
    }
    cout<<endl<<endl;
}

void generate_array(int *arr,int N){
	for (int i=0; i < N; i++){
        *(arr+i) = rand()%100;
        cout<< *(arr+i) << "  ";
	}
    cout<< endl;
}

void quickSort(int *arr, int left, int right) {
    int l = left, r = right;
    int temp;
    int opor = *(arr+((left + right) / 2));;
    while (l <= r) {
        while (*(arr+l) < opor)
                l++;
        while (*(arr+r) > opor)
                r--;
        if (l <= r) {
            temp = *(arr+l);
            *(arr+l)= *(arr+r);
            *(arr+r) = temp;
            l++;
            r--;
        }
    }
    if (left < r)
        quickSort(arr, left, r);
    if (l < right)
        quickSort(arr, l, right);
}

void print_array(int *arr,int N){
    cout<<endl<<endl;
    for(int i=0;i<N;i++)
        cout<< *(arr+i) << "  ";
    cout<<endl<<endl;
}

void found_k_max (int *arr,int N,int k){
    int t=k,g=0;
    int f=1;
    for(int i=0;i<N;i++){
        if(*(arr+N-i)!=*(arr+N-i-1)&&t>0)t--;
        if(t)f++;
    }
    cout<<endl<<k<<"-й максимум равен: "<<*(arr+N-f);
}

int main() {
    setlocale(LC_ALL, "Russian");
    int N=0,k=0;
    srand(time(0));
    data_input(N,k);
    int* const arr=new(int[N]);
    generate_array(arr,N);
    quickSort(arr,0,N-1);
    print_array(arr,N);
    found_k_max(arr,N,k);
    delete []arr;
    return 0;
}
