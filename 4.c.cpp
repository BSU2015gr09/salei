#include <iostream>
#include <cmath>

using namespace std;

const long size = 1000;

long xorrnd(long x)
{
	long tmp = 0;
	tmp = x ^ (x << 13);
	tmp ^= tmp >> 15;
	x = tmp ^ (tmp << 5);
	return x;
}
void generate_arr(double (&arr)[size])
{
    long prev, cur;
    arr[0] = 1;
    prev = arr[0];
	cout<<"Оригинальный массив"<<endl;
    for(int i = 1; i < size; i++)
    {
        cur = xorrnd(prev);
        arr[i] = cur % 50;
        prev = cur;
    }
}
void print_array(double (&arr)[size])
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout<<endl;
}
void max_min_quantity (double (&arr)[size],int&pmax,int&pmin)
{
    pmin=0;
    pmax=0;
    int mn=50;
    int mx=-50;
    for(int i = 0; i < size; i++)
    {
        if (arr[i]<mn)
        {
             mn=arr[i];
             pmin=i;
        }
        if (arr[i]>mx)
        {
            mx=arr[i];
            pmax=i;
        }
    }
}

void first_zero_max_min (double (&arr)[size],int&pmax,int&pmin)
{
    int i=0;
    cout<<"Измененный массив"<<endl;
    max_min_quantity(arr,pmax,pmin);
    arr[pmax-1]=222;
    arr[pmin+1]=111;
    for(i=0;i<size;i++)
    {
        if (arr[i]==0)
        {
            arr[i++]=999;
            break;
        }
    }
    for (i=0;i<size;i++)
        cout<<arr[i]<<endl;
}
int main ()
{
    setlocale( LC_ALL,"Russian" );
    double arr[size],r,b[size];
    int mx=0,mn=0,pmax=0,pmin=0,i=0;
    generate_arr(arr);
    print_array(arr);
    first_zero_max_min (arr,pmax,pmin);
    return 0;
}
