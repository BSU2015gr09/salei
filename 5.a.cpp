#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <clocale>

using namespace std;

const int size=20;

void generate_array (int (&arr)[size]){
    srand(time(0));
    for(int i=0;i<size;i++){
        arr[i]=rand()%100 -50;
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"_______________"<<endl;
}

void print_array (int (&arr)[size]){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"_______________"<<endl;
}

int first_positive_right (int fpr,const int (&arr)[size]){
    for(int i=0;i<size;i++)
        if (arr[i]>0){fpr=i;break;}
    if (fpr==size+1)cout<<"Нет положительных элементов"<<endl;
    return fpr;
}
int first_negative_left (int fnl,const int (&arr)[size]){
    for(int i=size;i!=0;i--)
        if (arr[i]<0){fnl=i;break;}
    if (fnl==size+1)cout<<"Нет отрицательных элементов"<<endl;
    return fnl;
}

void change_elements (int (&arr)[size],int fpr,int fnl){
    int p=arr[fpr];
    arr[fpr]=arr[fnl];
    arr[fnl]=p;
    print_array (arr);
}

void max_min (const int (&arr)[size],int &mx,int &mn){
    for(int i=0;i<size;i++){
        if(arr[i]>mx) mx=arr[i];
        if(arr[i]<mn) mn=arr[i];
    }
    cout<<"max="<<mx<<"  min="<<mn<<endl<<"_______________"<<endl;
}

void chet_max_nechet_min (int arr[size],int mx,int mn){
    for(int i=0;i<size;i++){
        if ((i%2)==0)arr[i]=mx;
        else arr[i]=mn;
    }
}

int once_max (int arr[size],int omx){
    int p=0;
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i]<arr[j]){
                p=arr[i];
                arr[i]=arr[j];
                arr[j]=p;
            }
    if(arr[0]!=arr[1])omx=arr[0];
    else for(int i=1;i<size;i++)
            if((arr[i-1]!=arr[i])&&(arr[i+1]!=arr[i])){omx=arr[i];break;}
    if(omx==-51)cout<<"Все элементы повторяются"<<endl<<"_______________"<<endl;
    else cout<<"Единожды встречающийся максимум  "<<omx<<endl<<"_______________"<<endl;

    return omx;
}

int many_min (int arr[size],int mmn){
    int p=0;
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i]<arr[j]){
                p=arr[i];
                arr[i]=arr[j];
                arr[j]=p;
            }
    for(int i=size;i!=0;i--)
        if(arr[i]==arr[i-1]){mmn=arr[i];break;}
    if (mmn==51)cout<<"Ни один из элементов не повторяется"<<endl<<"_______________"<<endl;
    else cout<<"Несколько раз встречающийся минимум  "<<mmn<<endl<<"_______________"<<endl;
    return mmn;
}

int main()
{
    setlocale (LC_ALL,"RUS");
    int arr[size];
    int fpr=size+1,fnl=size+1,mx=-51,mn=51,omx=-51,mmn=51;
    generate_array(arr);
    fpr=first_positive_right (fpr,arr);
    fnl=first_negative_left (fnl,arr);
    change_elements (arr,fpr,fnl);

    omx=once_max (arr,omx);
    mmn=many_min(arr,mmn);

    max_min (arr,mx,mn);
    chet_max_nechet_min (arr,mx,mn);
    print_array (arr);

    return 0;
}
