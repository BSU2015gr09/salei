#include <iostream>
#include <clocale>
#include <cmath>
#include <cstdlib>

using namespace std;

void initialize (int arr[], int n){
	for (int i=0;i<n;i++)	{
	arr[i]=i+1;
	}
}

void cout_f (int arr[], int n){
	for (int i=0;i<n;i++){
	cout<<arr[i]<<"  ";
	}
	cout<<" "<<endl;
}

void inn (int & n){
	cout<<"введите число"<<endl;
	cin>>n;
}

void enter ( int arr[], int & n){
  int k;
	cout<<"введите число которое хотите добавить в массив"<<endl;
	cin>>k;
	n++;
	for (int i=0;i<n;i++){
		if (k==arr[i]){
			 for (int a=n;a>=i;a--){
	   		  arr[a]=arr[a]+1;
			 }
			arr[i]=k;
		}

	}
	if (k<arr[0]){
		  for (int a=n;a>=n;a--){
	   		  arr[a]=arr[a]+1;
			 }
		  arr[0]=k;
		}
	if (k>arr[n]){
		arr[n+1]=k;
		}
}

void sec_enter (int arr[], int & n){
	int k,w=0;
	cout<<"введите число,если оно будет в массиве оно удалится"<<endl;
	cin>>k;
	for (int i=0;i<n;i++){
		if (arr[i]==k){
			for (int a=i;a<n;a++){
				arr[a]=arr[a+1];
				}
				n--;
			}
	}

}

	int main ()
{	

	setlocale (LC_ALL,"Russian");
	const int N=100;
	int arr[N];
	int n,q=1;
	int k;
	inn(n);
	initialize (arr,n);
	cout_f (arr,n);
	while (q==1)
	{
		enter (arr,n);
		sec_enter (arr,n);
		cout_f (arr,n);
	}
	return 0;
}
