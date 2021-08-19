#include <iostream>

using namespace std;
//Функция №1
int powInnumber(int chislo, int powNum)
{
    int result = 1;
    for (int i = 0; i < powNum; i++)
        result *= chislo;
        return result;
}
//Функция №2
bool isLucky(int chislo) 
{
    if (chislo < 100000 || chislo > 999999) return false;
    int sum1, sum2;
    sum1 = chislo % 10 + (chislo / 10) % 10 + (chislo / 100) % 10;
    sum2 = (chislo / 1000) % 10 + (chislo / 10000) % 10 + (chislo / 100000) % 10;
    if (sum1 == sum2) return true;
    return false;
} 
    //Функция №3
    double avg(const int* MedArthmeticMas, int Length) 
{
    int sum = 0; 
    for (int i = 0; i < Length; i++)
    {
        sum += MedArthmeticMas[i]; 
    }
    return (double)sum / Length; 
}
    //Функция №4
    int RandInt(int min, int max)
    {
        if (max < min)
            swap(max, min);
        return min + rand() % (max - min + 1);
    }
    void SetRnd(int arr[], int n, int min, int max)
    {
        for (int i = 0; i < n; i++)
            arr[i] = RandInt(min, max);
    }
    void Show(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << '\t';
        cout << '\n';
    }
    int PositiveElement(int arr[], int n)
    {
        int PosEl = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
                PosEl++;
        }
        return PosEl;
    }
    int NegativeElement(int arr[], int n)
    {
        int NegEl = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                NegEl++;
        }
        return NegEl;
    }
    int ZeroElement(int arr[], int n)
    {
        int ZerEl = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                ZerEl++;
        }
        return ZerEl;
    }

   

int main()
{
    setlocale(LC_ALL, "rus");

    //Написать функцию, которая принимает два параметра: основаниестепени и показатель степени, 
    //и вычисляет степень числа на основеполученных данных.
  /*  int chislo, powNum;
    cout << "Введите число:   ";
    cin >> chislo;
    cout << endl;
    cout << "Введите степень: ";
    cin >> powNum;
    cout << endl;
    cout << "Ответ = " << powInnumber(chislo, powNum) << endl;*/

    //Написать функцию, которая определяет, является ли «счастливым»шестизначное число.

   /* int chislo;
    cout << "Введите шестизначное число: ";
    cin >> chislo;
    if (isLucky(chislo)) cout << "Число счастливое.";
    else cout << "Число не счастливое.";
    return 0;*/

    //Написать функцию, определяющую среднее арифметическоеэлементов передаваемого ей массива

   /* const int Length = 10;
    int MedArthmeticMas[Length]; 
    for (int i = 0; i < Length; i++)
    {
        MedArthmeticMas[i] = rand() % 100; 
        cout << MedArthmeticMas[i] << " "; 
    }
    cout << "\nCреднее арифметическое = " << avg(MedArthmeticMas, Length) << endl;
    return 0;
   */


    //Написать функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива.

    //int const size = 100;
    //int arr[size]{ 0 };
    //int min = -10, max = 10;
    //cout << "Введите размер массива: ";
    //int n;
    //cin >> n;
    //SetRnd(arr, n, min, max);
    //RandInt(min, max);
    //cout << "Массив: " << endl;
    //Show(arr, n);
    //cout << "- положительных: " << PositiveElement(arr, n) << endl;
    //cout << "- отрицательых:  " << NegativeElement(arr, n) << endl;
    //cout << "- нулевых:       " << ZeroElement(arr, n) << endl;



}