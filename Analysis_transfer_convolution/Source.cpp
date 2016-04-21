#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

//Функції-оператори з мови Флойда-Еванса
//Примається вказівник на стрічку-магазин, індикатор символу та вхідну стрічку

bool L0(string, int, string);
bool L1(string, int, string);
bool L2(string, int, string);
bool L3(string, int, string);
bool L4(string, int, string);
bool L5(string, int, string);
bool L6(string, int, string);
bool L7(string, int, string);
bool L8(string, int, string);
bool L9(string, int, string);
bool L10(string, int, string);
bool L11(string, int, string);
void start(string);

void main()
{
	cout << "--Program for cheking strings that belongs or not to grammar operator G0--\n";
	cout << "Input string(only symbols a,+,(,),* ): ";
	string input;
	cin >> input;
	cout << "\n-----------Analysing-----------\n";
	start(input);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\nWritten by Viktor Sadovyi.\n";
	system("pause");
}
void start(string input)
{
	string temp;
	input = '$' + input + '$';//добавляємо індикатори початку та кінця
	int i = 0;
	temp = input[i];
	if (L11(temp, i, input) == 1) //Запускаємо перший оператор L11
	{
		cout << "\n-----------Admission-----------\nThis string belongs to our gramamar operator G0";
		return;
	}
	else
	{
		cout << "\n-----------Failed-----------\n";
		return;
	}
}

bool L11(string temp, int ind, string input)
{
	ind++;//переходимо до наступного символу
	temp = temp + input[ind];
	if (L0(temp, ind, input) == 1) return 1;
	else return 0;
}

bool L0(string temp, int ind, string input)
{
	if (temp[temp.length() - 1] == '(')
	{
		ind++;//переходимо до наступного символу
		temp = temp + input[ind];//добавляємо один символ в магазин
		if (L0(temp, ind, input) == 1) return 1;
		else return 0;
	}
	if (L1(temp, ind, input) == 1) return 1;
	else return 0;

}

bool L1(string temp, int ind, string input)
{
	if (temp[temp.length() - 1] == 'a')
	{
		replace(temp.begin(), temp.end(), 'a', 'F');//заміняємо а на F
		ind++;//переходимо до наступного символу
		temp = temp + input[ind];//добавляємо один символ в магазин
		cout << '6';//видача 6
	}
	if (L2(temp, ind, input) == 1) return 1;
	else return 0;
}

bool L2(string temp, int ind, string input)
{
	if (temp.length() > 3)//необхідна перевірка для того, щоб вказівник не вийшов за межі стрічки
	{
		if ((temp[temp.length() - 4] == 'T') && (temp[temp.length() - 3] == '*') && (temp[temp.length() - 2] == 'F') == 1)
		{
			temp.replace(temp.length() - 4, 3, "T");//заміняємо T*F на T
			cout << '3';//видача 3
			if (L4(temp, ind, input) == 1) return 1;
			else return 0;
		}
	}

	if (L3(temp, ind, input) == 1) return 1;
	else return 0;

}

bool L3(string temp, int ind, string input)
{
	if (temp[temp.length() - 2] == 'F')
	{
		replace(temp.begin(), temp.end(), 'F', 'T');//заміняємо F на T
		cout << '4';//видача 4
	}
	if (L4(temp, ind, input) == 1) return 1;
	else return 0;
}

bool L4(string temp, int ind, string input)
{
	if ((temp[temp.length() - 2] == 'T') && (temp[temp.length() - 1] == '*') == 1)
	{
		ind++;//переходимо до наступного символу
		temp = temp + input[ind];//добавляємо один символ в магазин
		if (L0(temp, ind, input) == 1) return 1;
		else return 0;
	}
	if (L5(temp, ind, input) == 1) return 1;
	else return 0;
}

bool L5(string temp, int ind, string input)
{
	if (temp.length() > 3) //необхідна перевірка для того, щоб вказівник не вийшов за 				   //межі стрічки
	{
		if ((temp[temp.length() - 4] == 'E') && (temp[temp.length() - 3] == '+') && (temp[temp.length() - 2] == 'T') == 1)
		{
			temp.replace(temp.length() - 4, 3, "E");//заміняємо E+T на E
			cout << '1';//видача 1
			if (L7(temp, ind, input) == 1) return 1;
			else return 0;
		}
	}
	if (L6(temp, ind, input) == 1) return 1;
	else return 0;
}

bool L6(string temp, int ind, string input)
{
	if (temp[temp.length() - 2] == 'T')
	{
		replace(temp.begin(), temp.end(), 'T', 'E');//заміняємо T на E
		cout << '2';//видача 2
	}
	if (L7(temp, ind, input) == 1) return 1;
	else return 0;
}

bool L7(string temp, int ind, string input)
{
	if ((temp[temp.length() - 2] == 'E') && (temp[temp.length() - 1] == '+') == 1)
	{
		ind++;//переходимо до наступного символу
		temp = temp + input[ind];//добавляємо один символ в магазин
		if (L0(temp, ind, input) == 1) return 1;
		else return 0;
	}
	if (L8(temp, ind, input) == 1) return 1;
	else return 0;
}

bool L8(string temp, int ind, string input)
{
	if (temp.length() > 3) //необхідна перевірка для того, щоб вказівник не вийшов за 				  //межі стрічки
	{
		if ((temp[temp.length() - 3] == '(') && (temp[temp.length() - 2] == 'E') && (temp[temp.length() - 1] == ')') == 1)
		{
			temp.replace(temp.length() - 3, 3, "F");//заміняємо (E) на F
			ind++;//переходимо до наступного символу
			temp = temp + input[ind];//добавляємо один символ в магазин
			cout << '5';//видача 5
			if (L2(temp, ind, input) == 1) return 1;
			else return 0;
		}
	}
	if (L9(temp, ind, input) == 1) return 1;
	else return 0;
}

bool L9(string temp, int ind, string input)
{
	if ((temp[0] == '$') && (temp[1] == 'E') && (temp[temp.length() - 1] == '$') == 1) 	return 1;//якщо знайшло 
																								 //кінцевий(тобто початковий) символ, то дає допуск.
	if (L10(temp, ind, input) == 1) return 1;//в інших випадках L10 фіксує помилку.
	else return 0;

}

bool L10(string temp, int ind, string input)
{
	if (temp[temp.length() - 1] == '$') return 0;
	if (L11(temp, ind, input) == 1) return 1;
	else return 0;
}