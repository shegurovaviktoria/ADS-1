// Copyright 2022 NNTU-CS
#include "alg.h"
#include <iostream>
#include <cstdint>

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
