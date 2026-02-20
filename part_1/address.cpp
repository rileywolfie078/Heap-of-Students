#include <iostream>
#include <sstream>
#include "address.h"

Address::Address(){
        street = "";
        city =  "";
        state =  "";
	zip =  "";
} // end constructor

void Address::init(const std::string &street_, const std::string &city_, const std::string &state_, const std::string &zip_){
	street = street_;
	city = city_;
	state = state_;
	zip = zip_;
}

void Address::printAddress(){
        std::cout << street << " " << city << " " << state << " " << zip << std::endl;
}
