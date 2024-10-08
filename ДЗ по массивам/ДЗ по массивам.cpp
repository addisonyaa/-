#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    //Задание 1
    int list1[] = { 9, 0, -3, 22, -19, 4, 5 };
    float Sum = { 0.0 };
    float sred = { 0.0 };
    for (int i : list1)
    {
        Sum += i;
    }
    cout << "Сумма значений элементов массива с циклом for: " << Sum << endl;
 
    Sum = 0;
    int i = 0;  // Сбрасываем индекс для суммирования
    while (i < size(list1))
    {
        Sum += list1[i]; // Добавляем текущий элемент к сумме
        i++;
    }
    cout << "Сумма значений элементов массива с циклом while: " << Sum << endl;
    

    //Задание 2 
    sred = Sum / size(list1);
    cout << "Среднее значение = " << sred << endl;

    //Задание 3
    for (int i = 0; i < size(list1); i++)
    {
        if (list1[i] >= 0)
        {
            cout << "Положительные элементы:  " << list1[i] << endl;
        }
        else
        {
            cout << "Отрицательные элементы:  " << list1[i] << endl;
        }
    }

    //Задание 4
    for (int i = 0; i < size(list1); i++)
    {
        if (list1[i] % 2 == 0)
        {
            cout << "Чётные элементы: " << list1[i] << endl;

        }
        else
        {
            cout << "Нечётные элементы: " << list1[i] << endl;
        }
    }
}

