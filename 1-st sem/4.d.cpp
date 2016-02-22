#include <iostream>

using namespace std;

const int size = 10;
int counter;
bool isStreight;
void line_to_line(double (&arr)[size][size])
{
 counter = 1;
 for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = counter++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            {
            cout << arr[i][j] << "\t";
            }
        cout<<endl;
    }
}
void from_right_to_left (double (&arr)[size][size])
{
    counter = 1;
    for (int i = 0; i < size; i++)
        {
            for (int j = size - 1; j >= 0; j--)
            {
                arr[i][j] = counter++;
            }
        }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            {
            cout << arr[i][j] << "\t";
            }
        cout<<endl;
    }
}
void snake (double (&arr)[size][size])
{
    isStreight = true;
    counter = 1;

    for (int j = 0; j < size; j++)
    {
        if (isStreight)
        {
            for (int i = 0; i < size; i++)
            {
                arr[i][j] = counter++;
            }
        }
        else
            {
                for (int i = size - 1; i >= 0; i--)
                {
                    arr[i][j] = counter++;
                }
            }
        isStreight = !isStreight;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            {
            cout << arr[i][j] << "\t";
            }
        cout<<endl;
    }
}
void plow (double (&arr)[size][size])
{
    isStreight = true;
    counter = 1;
    for (int i = 0; i < size; i++)
    {
        if (isStreight)
        {
            for (int j = 0; j < size; j++)
            {
                arr[i][j] = counter++;
            }
        }
        else
        {
            for (int j = size - 1; j >= 0; j--)
            {
                arr[i][j] = counter++;
            }
        }
    isStreight = !isStreight;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            {
            cout << arr[i][j] << "\t";
            }
        cout<<endl;
    }
}
void spiral (double (&arr)[size][size])
{
    int depth = 0;
    counter = 1;
    for (int depth = 0; depth < (double)size / 2; depth++)
    {
        for (int j = depth; j < size - depth; j++)
        {
            arr[depth][j] = counter++;
        }
        for (int i = depth + 1; i < size - depth; i++)
        {
            arr[i][size - depth - 1] = counter++;
        }
        for (int j = size - depth - 2; j >= depth; j--)
        {
            arr[size - depth - 1][j] = counter++;
        }
        for (int i = size - depth - 2; i >= depth + 1; i--)
        {
            arr[i][depth] = counter++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    double arr[size][size];
    setlocale( LC_ALL,"Russian" );
    cout <<endl<<"Слева-направо"<<endl;
    line_to_line(arr);
    cout <<endl<<"Справа-налево"<<endl;
    from_right_to_left(arr);
    cout <<endl<<"«Змейкой"<<endl;
    snake (arr);
    cout <<endl<<"Плуговым письмом"<<endl;
    plow (arr);
    cout <<endl<<"Спиралью"<<endl;
    spiral(arr);
    return 0;
}
