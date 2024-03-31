// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

using namespace std;

bool checkPrime(uint64_t);
uint64_t nPrime(uint64_t);
uint64_t nextPrime(uint64_t);
uint64_t sumPrime(uint64_t);

int main() {
	setlocale(LC_ALL, "Russian");
	uint64_t number;

	cout << "Проверить число на простоту" << endl << "Найти n - е простое число(в ряду)" << endl \
		<< "Найти ближайшее следующее простое число к value(заданому)" << endl <<"Найти сумму всех чисел до hbound (не включая его)";
	cout << "Введите число" << endl;
	cin >> number;

	//Проверить число на простоту
	if (checkPrime(number)){
		cout << "число простое" << endl;
	}
	else {
		cout << "число не простое" << endl;
	}

	//Найти n - е простое число(в ряду)
	if (checkPrime(number)) {
		if (nPrime(number) == 0)
			cout << "такого числа нет в ряду" << endl;
		else
			cout << "число находится на " << nPrime(number) << " позиции" << endl;
	}
	else
		cout << "введите простое число!" << endl;

	//Найти ближайшее следующее простое число к value(заданому)
	if (nextPrime(number) == 0)
		cout << "такого числа нет в ряду" << endl;
	else
		cout << "следующее простое число - "<<nextPrime(number)<<endl;

	//Найти сумму всех чисел до hbound (не включая его)
	if (sumPrime(number)==0)
		cout << "такого числа нет в ряду" << endl;
	else
		cout << "сумма всех чисел до числа(не включая его) = " << sumPrime(number) << endl;

	return 0;
}

bool checkPrime(uint64_t value) {
// вставьте код функции
  uint64_t i;
	if (value < 2) return false;
	else if (value == 2) return true;
	else {
		for (i = 2; i < value; i++) {
			if (value % i == 0) return false;
		}
	}
	return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t mas[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	uint64_t index;
	uint64_t i;
	for (i = 0; i < 19; i++)
		if (mas[i] == n) {
			index = i;
			break;
		}
		else index = 0;
	return index;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t mas[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
  uint64_t i;
  uint64_t next;
  if (nPrime(value) == 0)
  	return next = 0;
  else {
  	for (i = nPrime(value) + 1; i < 19; i++)
  		if (checkPrime(mas[i])) {
  			next = mas[i];
  			break;
  			return next;
  		}
  }
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t mas[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	uint64_t i;
	uint64_t sum = 0;
	if (nPrime(hbound) == 0)
		sum = 0;
	else {
		for (i = 0; i < nPrime(hbound); i++) {
			sum += mas[i];
		}
	}
	return sum;
}
