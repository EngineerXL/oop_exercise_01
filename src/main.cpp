#include <bits/stdc++.h>
#include "adress.hpp"

/*
 * Инютин М А М8О-207Б-19
 * Создать класс Address для работы с адресами домов. Адрес должен
 * состоять из строк с названием города и улицы и чисел с номером
 * дома и квартиры. Реализовать операции сравнения адресов, а
 * также операции проверки принадлежности адреса к улице и городу.
 * В операциях не должен учитываться регистр строки. Так же
 * необходимо сделать операцию, которая возвращает истину если два
 * адреса находятся по соседству (на одной улице в одном городе
 * и дома стоят подряд).
 */

signed main () {
	std::string city, street;
	unsigned int house = 0, flat = 0;
	std::cout << "Input first adress city: ";
	std::cin >> city;
	std::cout << "Input first adress street: ";
	std::cin >> street;
	std::cout << "Input first adress house number: ";
	std::cin >> house;
	std::cout << "Input first adress flat numer: ";
	std::cin >> flat;
	Adress a = Adress(city, street, house, flat);
	house = 0, flat = 0;
	std::cout << "Input second adress city: ";
	std::cin >> city;
	std::cout << "Input second adress street: ";
	std::cin >> street;
	std::cout << "Input second adress house number: ";
	std::cin >> house;
	std::cout << "Input second adress flat numer: ";
	std::cin >> flat;
	Adress b = Adress(city, street, house, flat);
	std::cout << std::endl;
	if (house * flat == 0) {
		std::cout << "Invalid input! Programm terminates with exit code -1\n";
		return -1;
	}
	std::cout << "Equal? " << (Adress::IsEqual(a, b) ? "YES" : "NO") << "\n";
	std::cout << "Same city and street? " << (Adress::IsInCity(a, b.GetCity(), b.GetStreet()) ? "YES" : "NO") << "\n";
	std::cout << "Neighbors? " << (Adress::Neighbors(a, b) ? "YES" : "NO") << "\n";
	return 0;
}