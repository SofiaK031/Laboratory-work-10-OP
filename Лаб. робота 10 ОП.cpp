// Лаб. робота 10 ОП.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <iomanip> 
#include <time.h>
#define i 10
#define j 10
using namespace std;
int n, d, x;
double a[i][j], b[i][j], c[i][j];
void ini(double c[i][j]) // функція введення значень масиву
{
	for (int d = 1; d <= n; d++)   //рядки
		for (int x = 1; x <= n; x++)   //стовпчики
		{
			cout << "Елемент [" << d << "][" << x << "]" << endl;
			cin >> c[d][x];
		}
}
int main()
{
	cout << endl << "  Введіть розмір матриць, число n менше 10: " << endl;
	cin >> n;
	cout << "  Введіть елементи першої матриці: " << endl;
	ini(a);
	cout << "  Введіть елементи другої матриці: " << endl;
	ini(b);
	cout << "  Елементи результуючої матриці: " << endl;
	for (int d = 1; d <= n; d++)
		for (int x = 1; x <= n; x++)
		{
			a[d][x] = a[d][x] + b[d][x];
			cout << "[" << d << "][" << x << "]=" << a[d][x] << "  " << endl;
		}
}