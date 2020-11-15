#include <iostream>
#include <cmath>
using namespace std;
void task19()
{
	cout << "\n\n Task #19 \n";
	double y = 0, t = 0, z = 4;
	for (double x = 4; x < 29; x++)
	{
		t = x + 2;
		y = (2 * pow(t, 2)) + (5.5 * t) - 2;
		cout << "\n\n Y(" << z << ")=" << y;
		z++;

	}
}
void task54()
{
	cout << "\n\nTask#54\n";
	cout << "Input n: ";
	double n = 0, answer = 0;
	cin >> n;
	if (n > 0)

	{
		for (int i = 1; i <= n; n--)
		{
			answer = 1 / n + answer;
		}
		cout << "\n\nAnswer=" << answer << "\n";
	}
	else
	{
		if (n < 0)
		{
			for (int i = -1; i >= n; n++)
			{
				answer = 1 / n + answer;
			}
			cout << "\n\nAnswer=" << answer << "\n";
		}
		else
		{
			cout << "\n We can't do 1/0, try another number";
		}
	}
}
void task89()
{
	cout << "\n\n Task #89 \n";
	int n = 0, a = 0, step = 0, c = 0, sum = 0, g = 1, d = 0;
	cout << "\n Input n: ";
	cin >> n;
	cout << "\n Input first a: ";
	cin >> a;
	cout << "\n Input step from a1 to a2: ";
	cin >> step;
	for (int i = 0; i < n; n--)
	{
		cout << "\nA(n)=" << a << " (" << g << ")";
		g++;
		c = pow(a, 2);
		a = a + step;
		cout << c;
		sum += c;
	}
	cout << "\n\nSum of their squares is : " << sum << "\n";

}
void task124()
{
	cout << "\n\nTask#124\n";
	cout << "Введите радиус R = ";
	int k = 0, r = 0;
	cin >> r;
	k = r * 4 + 1;
	for (int i = 1; i <= r; i++)
	{
		k += int(sqrt(r * r - (i * i))) * 4;
	}
	cout <<"\nТочек с целочисленными координатами в вашем радиусе : " << k << "\n";
}
void task159()
{
	cout << "\n\nTask#159\n";
	int a = 0, b = 0, p = 0, q = 0;
	cout << "Введите числитель вашей дроби (a) = ";
	cin >> a;
	cout << "Введите знаменатель вашей дроби (b) = ";
	cin >> b;
	for (int i = 2; i <= a && i <= b;) {
		if (a % i == 0 && b % i == 0) {
			a = a / i;
			b = b / i;
		}
		else i++;
	}
	cout << "Сокращённая дробь имеет вид: ";
	p = a;
	q = b;

	cout << "\n P=" << p << "\n Q=" << q << "\n";
}
void task194()
{
	cout << "\n\nTask#194\n";
	int a = 2, b = 0, c = 0;
	do {
		a = a + 2;
		c = c + a;
		b++;
		cout << "\n\nA= " << a;
		cout << "\n\nC=" << c;
	} while (c < 1000);
	cout << "\n\nПоследнее слагаемое: " << a;
	cout << "\nКол-во операций: " << b;
	cout << "\nСумма:  " << c << "\n";

}
void task229()
{
	cout << "\n\nTask#229\n";
	double a = 0, b = 0, h = 0, x = 0, d = 0, fx = 0, x1 = 0;
	cout << "\nВведите начальную точку (A): ";
	cin >> a;
	cout << "\nВведите конечную точку (B): " ;
	cin >> b;
	cout << "\nВведите шаг (h): ";
	cin >> h;
	x1 = a;
	cout << "\nX(" << d << ")= " << x1;
	fx = sin(x1) - cos(x1);
	cout << "	F(X)(" << d << ")= " << fx;
	while (a <= b - h)
	{
		d++;

		x = a + h;
		a = a + h;
		cout << "\nX(" << d << ")= " << x;
		fx = sin(x) - cos(x);
		cout << "	F(X)(" << d << ")= " << fx;
	}


}
void task264()
{
	cout << "\n\nTask#264\n";
	cout << "\nПри значениях Х от -2 до 2 с шагом 0.5 переменная (У) приобретает следующие значения: \n";
	double a = 3, b = 1, y = 0, c = 0.02,x=-2;
	while (x <= 2)
	{
		y = 10 * a + 2 * (sqrt(c * pow(a, 2) * b * x - (a * x) / (1 - b * x)));
		cout << "\nY=" << y;
		x+=0.5;
	}
	

}
int main()
{
	setlocale(LC_ALL, "Russian");
	task19();
	task54();
	task89();
	task124();
	task159();
	task194();
	task229();
	task264();
}
