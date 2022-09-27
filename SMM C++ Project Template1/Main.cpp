#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;

template <typename T>
void showArr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

template <typename T>
void clear_arr(T arr[], const int length,T clear) {
	for (int i = 0; i < length; i++)
		if (arr[i] == clear)
			arr[i] = 0;
		
}
template <typename T>
int index_sum(T arr[],T trr[], const int length1, const int length2, T value) {
	return arr[value] + trr[value];
}
template <typename T>
int mean_arr(T arr[], const int length) {
	int max = 0;
	int min = 0;
	int sum = 0;
	int res = 0;
	for (int i = 0; i < length; i++){
		if (arr[i] > max)
			max = arr[i];}
	for (int j = 0; j < length; j++){
	if (arr[j] < min)
		min = arr[j];
}
	sum += min + max;
	return res = sum / length;
}

int prime_rang(int A, int B) {
	for (int i = A; i < B; i++) {
		int counter = 0;
		for (int j = 1; j <= i; j++)
			if (i % j == 0)
				counter++;
		if (counter <= 2)
			return i;
	}
		
}




int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	//Задача 1.
	int n;
	const int size = 7;
	int mass[size];
	for (int k = 0; k < size; k++)
		mass[k] = rand() % (20 - 1) + 1;
	showArr(mass, size);
	cout << "Введите ключевое число: \n";
	cin >> n;
	cout << "\nФункция, обнуляет элементы равные n\n";
	clear_arr(mass, size, n);
	showArr(mass, size);


	//Задача 2.
	int V;
	const int size1 = 7;
	const int size2 = 7;
	int mass1[size1]{ 3, 6, 7, 8, 7, 9, 3 };
	int mass2[size2]{ 4, 5, 56, 33, 23, 23, 3 };
	cout << "Введите число индекса: \n";
	cin >> V;
	cout << index_sum(mass1, mass2, size1, size2, V);

	//Задача 3.готово
	const int size3 = 6;
	double mass3[size3]{ 45, 6, 3, 2, 7, 4 };
	cout << mean_arr(mass3, size3);

	//Задача 4.готова
	int a;
	int b;
	cout << "Введите два числа определяющие диапазон: \n";
	cin >> a >> b;
	cout << prime_rang(a, b);



	return 0;
}
