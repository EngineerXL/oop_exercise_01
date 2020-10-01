#include "adress.hpp"

std::string Adress::GetCity() {
	return this->City;
}

std::string Adress::GetStreet() {
	return this->Street;
}

// Returnrs true if string are equal (ignores lowcase)
bool Adress::CompareString(const std::string &lhs, const std::string &rhs) {
	if (lhs.size() == rhs.size()) {
		for (int i = 0; i < lhs.size(); ++i) {
			if (std::tolower(lhs[i]) != std::tolower(rhs[i])) {
				return false;
			}
		}
		return true;
	} else {
		return false;
	}
}

bool Adress::IsEqual(const Adress &lhs, const Adress &rhs) {
	return CompareString(lhs.City, rhs.City) && CompareString(lhs.Street, rhs.Street)
		&& (lhs.House == rhs.House) && (lhs.Flat == rhs.Flat);
}

bool Adress::IsInCity(const Adress &adress, const std::string &city, const std::string &street) {
	return CompareString(adress.City, city) && CompareString(adress.Street, street);
}

bool Adress::Neighbors(const Adress &lhs, const Adress &rhs) {
	return CompareString(lhs.City, rhs.City) && CompareString(lhs.Street, rhs.Street)
		&& (std::abs((int)lhs.House - (int)rhs.House) == 2 or rhs.House == lhs.House);
}