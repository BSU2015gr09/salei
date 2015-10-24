/* "Нормальный" калькулятор. обработка ситуации деления на 0. Результат вычислений остаетс¤ как текущее значение.
 Если вместо операции ввести символ (с), то калькул¤тор сбрасываетс¤ в начало, при вводе символа (е) вместо
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
		cout << "enter first value.. " << endl;
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
					cout<<"Division by zero is meaningless. "<<endl;
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
                cout<<"Invalid operation, try again.."<<endl;
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
