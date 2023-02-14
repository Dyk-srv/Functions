#include <iostream>

// Функция, не возвращающая никаких значений и выводящая сообщение
void say_hello() {
	std::cout << "Hello World!\n";
	std::cout << "Bye World!\n";
}

// Функция, не возвращающая никаких значений, но принимающая 2 числа и выводящая их сумму
void print_sum(int num1, int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}

// Функция, возвращающая сумму 2-х переданных в неё целых чисел
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	return num1 + num2; // вернуть сумму num1 и num2
}

// Функция вывода одномерного массива
void print_arr(int array[], const int size) {
	std::cout << '[';
	for (int i = 0; i < size; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n";
}

// Функция подсчета суммы одномерного массива
int sum_arr(int array[], const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += array[i];
	return sum;
}


void x2(int num) {
	num *= 2; // num - аргумент функции
}

void arr_x2(int arr[]) {
	arr[3] *= 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Функции void
	/*say_hello(); // Вызов функции с типом void и без параметров
	std::cout << "Введите 2 числа: ";
	std::cin >> n >> m;
	print_sum(n, m); // Вызов функции с типом void с 2-мя параметрами*/

	// Функции, возвращающие значения
	/*std::cout << "Введите 2 числа: ";
	std::cin >> n >> m;
	int result = sum(n, m); // запись в перменную result результата работы фyнкции sum()
	std::cout << "Сумма = " << result << '\n';*/ 

	// Массивы и функции
	/*const int size = 5;
	int arr[size] = { 1,2,3,4,5 };
	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "Сумма элементов массива = " << sum_arr(arr, size) << '\n';*/

	n = 10;
	//std::cout << x2(n) << '\n';
	x2(n); // n - аргумент функции
	std::cout << n << '\n'; // n = 10

	int mass[5]{ 4, 5, 7, 9, 3 };
	x2(mass[3]);
	std::cout << mass[3] << '\n';
	arr_x2(mass);
	std::cout << mass[3] << '\n';

	return 0;
}
