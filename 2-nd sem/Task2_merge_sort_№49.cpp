// 49.(9) Элементы массива А(N) упорядочить в порядке убывания, и вставить k заданных числа, не нарушая его упорядоченности.
#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdlib>

using namespace std;

void data_input(int &N,int &x,int &ox){
    int f=0;
    while (!f){
        cout<<"Введите количество элементов массива: ";
        cin>>N;
        if(N>0)f++;
    }
    while(f){
        cout<<endl<<"Введите количество элементов для дальнейшей вставки в массив ";
        cin>>x;
        if(x>0){f--;ox=x;}
    }
    cout<<endl<<endl;

}

void enter_array (int *arr,int N){
    for(int i=0;i<N;i++)
        cin>>*(arr+i);
    cout<<endl;
}

void generate_array(int *arr,int N){
	for (int i=0; i < N; i++)
        *(arr+i) = rand()%100;
    cout<<endl;
}

void init_array(int *arr,int N){
    int c=0;
    cout<<"Выберите способ инициализации массива:"<<endl<<"  1. Случайными числами "<<endl<<"  2. С клавиатуры "<<endl;
    cin>>c;
    switch(c){
        case 1: generate_array(arr,N);
            break;
        default: enter_array(arr,N);
            break;
    }
}

void merge(int *arr, int left, int mid, int right){
	int *b = new int[right+1-left];
	int l=left,i=0,lsec=mid+1;


	// Объединяем два массива в b[] пока не закончится первый
	while((l<=mid)&&(lsec<=right)){
		if(*(arr+l)<=*(arr+lsec)){
			*(b+i)=*(arr+l);
			l++;
		}
		else{
			*(b+i)=*(arr+lsec);
			lsec++;
		}
		i++;
	}
	// Заполнение массива недостающими значениями
	if(l>mid){
		for(int k=lsec;k<=right;k++){
			*(b+i)=*(arr+k);
			i++;
		}
	}
	else{
		for(int k=l;k<=mid;k++){
			*(b+i)=*(arr+k);
			i++;
		}
	}
	// Запись в оригинальный массив
	for(int k=0;k<=right-left;k++) {
		*(arr+k+left)=*(b+k);
	}
	delete []b;
}

void merge_sort(int *arr, int left, int right){
	int mid;
	if(left<right){
		mid=(left+right)/2;
		merge_sort(arr, left,mid);
		merge_sort(arr, mid+1,right);
		merge(arr, left,mid,right);
	}
}

void print_array(int *arr,int N){
    cout<<endl<<endl;
    for(int i=0;i<N;i++)
        cout<< *(arr+i) << "  ";
    cout<<endl<<endl;
}

void init_added_numbers (int *xrr ,int x){
    int c=0;
    cout<<"Выберите способ инициализации "<<x<<" чисел для добавления:"<<endl<<"  1. Случайными образом "<<endl<<"  2. С клавиатуры "<<endl;
    cin>>c;
    switch(c){
        case 1: generate_array(xrr,x);
            break;
        default: enter_array(xrr,x);
            break;
    }
}

void added_numbers_into_the_array(int *arr,int N,int num,int &ox){
    for(int i=N-1-ox;i>0;i--){
        if(*(arr+i)>num)*(arr+i+1)=*(arr+i);
        else {
            *(arr+i+1)=num;
            ox--;
            break;
        }
    }
}




int main()
{
    setlocale(LC_ALL, "Russian");
    int N=0,x=0,ox=0;
    srand(time(0));
    data_input(N,x,ox);
    int* const arr=new(int[N+x]);
    init_array(arr,N);
    print_array(arr,N);
    merge_sort(arr,0,N-1);
    print_array(arr,N);
    int* const xrr=new(int[x]);
    init_added_numbers(xrr,x);
    print_array(xrr,x);
    for(int i=0;i<x;i++)
        added_numbers_into_the_array(arr,N+x,xrr[i],ox);
    print_array(arr,N+x);
    delete []arr;
    delete []xrr;
    return 0;
}
