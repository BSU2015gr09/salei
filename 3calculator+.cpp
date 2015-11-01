/*"Нормальный" калькул¤тор. Обработка ситуации делени¤ на 0. Результат вычислений остаетс¤ как текущее значение.
 Если вместо операции ввести символ (с), то калькул¤тор сбрасывается в начало, при вводе символа (е) вместо
  операции калькулятор завершает работу (exit)
*/
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian")
	int val=0,i=1;
	float res=0;
	char operation, c, e;
	while (i == 1)
	{
		i++;
		cout << "Введите первое число.. " << endl;
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
			cout<<"Введите второе число.. "<<endl;
			cin>>val;
			switch (operation)
			{
			case '+':
				res+=val;
				cout<<"Результат = "<<res<<endl;
				break;
			case '-':
				res-=val;
				cout<<"Результат= "<<res<<endl;
				break;
			case '*':
				res*=val;
				cout<<"Результат = "<<res<<endl;
				break;
			case '/':
				switch (val)
				{
				case 0:
					cout<<"Деление на ноль невозможно. "<<endl;
					break;
				default:
					res/=val;
					cout<<"Результат = "<<res<<endl;
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
                cout<<"Некорректная операция.."<<endl;
			}
			switch (i)
			{
			case 2:
				cout<<"Выберите операцию (+, -, *, /)  Для выхода нажмите (e)   Для очистки нажмите (c)"<<endl;
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
