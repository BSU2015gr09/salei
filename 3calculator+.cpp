/*"Ќормальный" калькул¤тор. ќбработка ситуации делени¤ на 0. –езультат вычислений остаетс¤ как текущее значение.
 ≈сли вместо операции ввести символ ТcТ, то калькул¤тор сбрасываетс¤ в начало, при вводе символа ТeТ вместо
  операции калькул¤тор завершает работу (exit)
*/
#include <iostream>
using namespace std;
int main()
{
	int val=0,i=1;
	float res=0;
	char operation, c, e;
	while (i == 1)
	{
		i++;
		cout << "enter first value.. " << endl;// а кирилица где?????
		cin >> res;
		cout << "select option (+, -, *, /)  for exit press (e)   for the cleaning press (c)   " << endl;
		cin >> operation;
		switch (operation)
		{
		case 'c':
			i = 1;
			break;
		case 'e':
			i = 3;
			break;
		}
		while (i == 2)
		{
			cout<<"Enter second value.. "<<endl;
			cin>>val;
			switch (operation)
			{
			case '+':
				res+=val;
				cout<<"Result = "<<res<<endl;
				break;
			case '-':
				res-=val;
				cout<<"Result = "<<res<<endl;
				break;
			case '*':
				res*=val;
				cout<<"Result = "<<res<<endl;
				break;
			case '/':
				switch (val)
				{
				case 0:
					cout<<"Division by zero is meaningless. "<<endl;// а кирилица где?????
					break;
				default:
					res/=val;
					cout<<"Result = "<<res<<endl;
					break;
				}
				break;
			case 'c':
				i = 1;
				break;
			case 'e':
				i = 3;
				break;
            default:
                cout<<"Invalid operation, try again.."<<endl;// а кирилица где?????
			}
			switch (i)
			{
			case 2:
				cout<<"select option (+, -, *, /)  for exit press (e)   for the cleaning press (c)"<<endl;
				cin>>operation;
				switch (operation)
				{
				case 'c':
					i = 1;
					break;
				case 'e':
					i = 3;
					break;
				}
			default:
				break;
			}
		}
	}
	return 0;
}
