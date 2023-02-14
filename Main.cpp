#include <iostream>

// �������, �� ������������ ������� �������� � ��������� ���������
void say_hello() {
	std::cout << "Hello World!\n";
	std::cout << "Bye World!\n";
}

// �������, �� ������������ ������� ��������, �� ����������� 2 ����� � ��������� �� �����
void print_sum(int num1, int num2) {
	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
}

// �������, ������������ ����� 2-� ���������� � �� ����� �����
int sum(int num1, int num2) {
	//int tmp = num1 + num2;
	return num1 + num2; // ������� ����� num1 � num2
}

// ������� ������ ����������� �������
void print_arr(int array[], const int size) {
	std::cout << '[';
	for (int i = 0; i < size; i++)
		std::cout << array[i] << ", ";
	std::cout << "\b\b]\n";
}

// ������� �������� ����� ����������� �������
int sum_arr(int array[], const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += array[i];
	return sum;
}


void x2(int num) {
	num *= 2; // num - �������� �������
}

void arr_x2(int arr[]) {
	arr[3] *= 2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ������� void
	/*say_hello(); // ����� ������� � ����� void � ��� ����������
	std::cout << "������� 2 �����: ";
	std::cin >> n >> m;
	print_sum(n, m); // ����� ������� � ����� void � 2-�� �����������*/

	// �������, ������������ ��������
	/*std::cout << "������� 2 �����: ";
	std::cin >> n >> m;
	int result = sum(n, m); // ������ � ��������� result ���������� ������ �y����� sum()
	std::cout << "����� = " << result << '\n';*/ 

	// ������� � �������
	/*const int size = 5;
	int arr[size] = { 1,2,3,4,5 };
	std::cout << "������:\n";
	print_arr(arr, size);
	std::cout << "����� ��������� ������� = " << sum_arr(arr, size) << '\n';*/

	n = 10;
	//std::cout << x2(n) << '\n';
	x2(n); // n - �������� �������
	std::cout << n << '\n'; // n = 10

	int mass[5]{ 4, 5, 7, 9, 3 };
	x2(mass[3]);
	std::cout << mass[3] << '\n';
	arr_x2(mass);
	std::cout << mass[3] << '\n';

	return 0;
}
