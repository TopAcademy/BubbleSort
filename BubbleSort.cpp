/*
  Проект Bubble Sort
  Сортировка массива методом "пузырька"
*/

#include <iostream>
using std::cout;
using std::endl;

// Заполнение массива случайными числами
// от 0 до diapazon
void fill(int* m, short n, int diapazon)
{
    for (int i = 0; i < n; i++)
        m[i] = std::rand() % diapazon;
}

// Вывод на экран элементов массива
void show(int* m, short n)
{
    for (int i = 0; i < n; i++)
        cout << m[i] << '\t';
    cout << endl;
}


// Функция сортировки по возрастанию
// элементов массива методом пузырька
void bubble_sort(int* mas, int _s)
{
    int temp;
    bool flag;
    do {
        flag = false;
        for (int i = 0; i < _s - 1; i++)
        {
            if (mas[i + 1] < mas[i]) {
                // exchange elements
                temp = mas[i];
                mas[i] = mas[i + 1];
                mas[i + 1] = temp;
                flag = true;
            }
        }
    } while (flag==true);

}


int main()
{
    const unsigned short N = 10;
    int mas[N];
    fill(mas, N, 20);
    show(mas, N);
    bubble_sort(mas, N);
    show(mas, N);
}
