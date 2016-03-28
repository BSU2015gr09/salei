/* 67.	Известно, что в каждой строке и каждом столбце массива А(N,N) имеется единственный отрицательный
 элемент. Переставить строки массива так, чтобы отрицательные элементы находились на главной диагонали.

Возможная матрица 10х10:
16 -7 32 6 7 8 19 39 2 56
54 83 2 57 96 31 9 5 -17 3
6 4 79 3 -21 5 27 3 83 29 
54 37 0 -12 9 14 95 34 8 5
5 24 93 27 53 2 -9 0 10 68
-37 50 4 23 46 9 34 65 4 2
81 66 -2 1 39 36 40 23 85 5
2 56 88 5 13 69 56 17 6 -8
65 1 51 4 94 -10 44 3 12 6
39 54 3 5 85 32 3 -29 0 15 
*/

#include <iostream>
#include <fstream>
#include <clocale>

using namespace std;

void data_input(int &N, int &c){
    cout<<"Выберите способ ввода матрицы:"<<endl<<"  1. C Клавиатуры" <<endl<<"  2. Из файла "<<endl;
    cin>>c;
    cout<<endl;
    switch(c){
        case 1: cout<<"Введите размерность массива NxN: ";
                cin>>N;
                c=1;
            break;
        default:c=0;
        break;
    }
}

int** get_memory (int N){
    int **A=0;
    try{
        A=new int *[N];
    }
    catch(std::bad_alloc){cout<<"no memory";}
        for (int i=0;i<N;i++){
            try{
                A[i]=new int [N];
            }
            catch(std::bad_alloc){cout<<"No memory";A=0;}
        }
    return A;
}

void init_matrix (int **arr,int N,int c){
    if (c){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
                cin>>arr[i][j];
            cout<<endl;
        }
    }
    else{
        ifstream fin ("input.txt");
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                fin>>arr[i][j];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
                cout<<arr[i][j]<<"\t";
            cout<<endl;
        }
    }
}

void lines_moving(int **arr,int N){
    int *tmp=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if (arr[j][i]<0){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
    cout<<endl<<endl;
    for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
                cout<<arr[i][j]<<"\t";
            cout<<endl;
        }
}

void free(int **arr,int N){
    for (int i=0;i<N;i++)
        delete [] arr[i];
    delete []arr;
}

int main()
{
    setlocale(LC_ALL,"Russian");
    int N=10, c=0;
    int **arr;
    data_input(N,c);
    arr=get_memory(N);
    init_matrix (arr,N,c);
    lines_moving(arr,N);
    free(arr,N);
    return 0;
}

