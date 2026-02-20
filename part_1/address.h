#include <string>

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

class Address{
	private:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(const std::string &street_, const std::string &city_, const std::string &state_, const std::string &zip_);
		void printAddress();
};

#endif


