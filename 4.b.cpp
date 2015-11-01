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
    arr[0] = 55;
    prev = arr[0];
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
}

void print_reverse(double (&arr)[size])
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}
void print_neche_che(double (&arr)[size])
{
    for (int i = 0; i < size; i+=2)
        cout<< arr[i] << endl;
    for (int i = 1; i < size; i+=2)
        cout<< arr[i] << endl;
}
void print_sign(double (&arr)[size],int&neg,int&pos,int&zero)
{
    neg=0;
    pos=0;
    zero=0;
    for(int i = 0; i < size; i++)
        if (arr[i]>0)
            pos++;
        else
        {
            if (arr[i]<0)
                neg++;
            else zero++;
        }
    cout<<pos<<"/"<<neg<<"/"<<zero<<endl;
}
void print_max_min (double (&arr)[size],int&mx,int&mn)
{
    mn=50;
    mx=-50;
    for(int i = 0; i < size; i++)
    {
        if (arr[i]<mn)
            mn=arr[i];
        if (arr[i]>mx)
            mx=arr[i];
    }
    cout<<mx<<"/"<<mn<<endl;
}
void print_max_min_quantity (double (&arr)[size],int&mx,int&mn,int&nmax,int&nmin)
{
    nmin=1;
    nmax=1;
    mn=50;
    mx=-50;
    for(int i = 0; i < size; i++)
    {
        if (arr[i]<mn)
        {
             mn=arr[i];
             nmin=1;
        }
        else
        {   if (arr[i]==mn)
                nmin++;
        }
        if (arr[i]>mx)
        {
            mx=arr[i];
            nmax=1;
        }
        else
        {   if (arr[i]==mx)
                nmax++;
        }
    }
    cout<<nmax<<"/"<<nmin<<endl;
}
void print_firstpos_secondneg_withb (double (&arr)[size],double&r,double (&b)[size])
{
    int nump=0,numn=1;
    for (int i=0; i<size; i++)
    {
		if (arr[i]>=0)
        {
			b[nump] = arr[i];
            nump++;
		}
		else
            {
                b[size-numn] = arr[i];
                numn++;
            }
	}
    for(int i=1;i<size;i++)
        cout<<b[i]<<endl;
}
void print_firstpos_secondneg (double (&arr)[size],double&r)
{
    r=0;
    for (int i=1;i<size-1;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if (arr[i]<arr[j])
            {
                r=arr[i];
                arr[i]=arr[j];
                arr[j]=r;
            }
        }
    }
    for(int i=1;i<size;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    setlocale( LC_ALL,"Russian" );
    double arr[size],r,b[size];
    int pos=0,neg=0,zero=0,mx=0,mn=0,nmax=0,nmin=0;
    generate_arr(arr);
    cout<<"Оригинальный массив"<<endl;
    print_array(arr);
    cout<<"Перевернутый массив"<<endl;
    print_reverse(arr);
    cout<<"Элементы с нечетными/четными номерами"<<endl;
    print_neche_che(arr);
    cout<<"Количество положительных/отрицательных/равных нулю элементов"<<endl;
    print_sign(arr,neg,pos,zero);
    cout<<"Максимальный и минимальный элементы массива"<<endl;
    print_max_min (arr,mx,mn);
    cout<<"Количество максимальных/минимальных элементов в массиве"<<endl;
    print_max_min_quantity (arr,mx,mn,nmax,nmin);
    cout<<"Сначала положительные потом отрицательные со вспомогательным массивом В"<<endl;
    print_firstpos_secondneg_withb(arr,r,b);
    cout<<"Предыдущее задание в одном массиве"<<endl;
    print_firstpos_secondneg(arr,r);
    return 0;
}


















