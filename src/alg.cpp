// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
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
  uint64_t mas[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
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
  uint64_t mas[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
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
  uint64_t mas[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
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
