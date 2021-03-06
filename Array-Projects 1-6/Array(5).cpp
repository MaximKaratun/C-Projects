/* 
Задача:
       Заполнить массив вещественных чисел с клавиатуры, посчитайте: 
*/
       ///(A) Сумму
       ///(B) Произведение
       ///(C) Среднее арифметическое элементов массива.

#include <iostream> //Подключение библиотеки ввода-вывода.
using namespace std;

int main(void)
{
	setlocale(LC_ALL, "ru");
	double  sum = 0, сomp = 1, sumD2 = 0;
	int i;


	const int n = 10; //n = постоянное целое число 10.
	double array[n]; // array = целый массив от 0 до 10.
	for (i = 0; i < n; i++) {  // Заполнение массива от 0 до 9(Всего 10 элементов)
		double k = rand()%100 / (double)10 + (-10.0); // Заполнение вещественных чисел с функции рандом(Хотя требовалось с клавиатуры(cin >> k, где k - float and array - float)
		array[i] = k;
		cout << array[i] << " ";
	}

	//-------------------------------------

	///(A) Сумма (Start):
	 for (int i = 0; i<n; i ++) {      //Считаем сумму..
		sum = sum + array[i];       //Складываем все индексы(для этого мы завели переменную sum, чтобы "запихивать" туда сумму чисел.
	}
	  cout << endl;
	  cout << "Сумма четных элементов = " << sum;
	  cout << endl;
	///(End).

	//-------------------------------------

	///(B) Произведение (Start):
	 for (int i = 0; i<n; i++) {      //Считаем произведение
		 сomp = сomp * array[i];       //Умножаем все индексы(для этого мы завели переменную sum, чтобы "запихивать" туда сумму чисел.
	}
	  cout << endl;
	  cout << "Произведение всех элементов = " << сomp;
	  cout << endl;
	///(End).

	//-------------------------------------

	///(C) Среднее арифметическое элементов массива (Start):
	  for (int i = 0; i<n; i++) {      //Считаем сумму для формулы...
		  sumD2 = sumD2 + array[i];       //Складываем все индексы(для этого мы завели переменную sum, чтобы "запихивать" туда сумму чисел.
	  }
	    cout << endl;
	    cout << "Сумма четных элементов = " << sumD2/n; //По формуле мы имеем, что сумму всех элементов нужно поделить на кол-во. Так и здесь, делим на n, т.е на 10.
	    cout << endl;
	///(End).

	//-------------------------------------

	system("pause");
	return 0;
}
//Замечание: Можно все это было сделать в разные функции, тем самым упростить чтение кода. (Но что-то, я подумал об этом только сейчас) =)
