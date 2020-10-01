#ifndef ADRESS_HPP
#define ADRESS_HPP

#include <string>

class Adress {
	private:
		std::string City, Street;
		unsigned int House, Flat;
	public:
		std::string GetCity();
		std::string GetStreet();
		Adress() : City(), Street(), House(), Flat() {};
		Adress(const std::string &city, const std::string &street, const unsigned int &house, const unsigned int &flat) : City(city), Street(street), House(house), Flat(flat) {};
		~Adress() {};

		static bool CompareString(const std::string &lhs, const std::string &rhs);
		static bool IsEqual(const Adress &lhs, const Adress &rhs);
		static bool IsInCity(const Adress &adress, const std::string &city, const std::string &street);
		static bool Neighbors(const Adress &lhs, const Adress &rhs);
};

#endif // ADRESS_HPP