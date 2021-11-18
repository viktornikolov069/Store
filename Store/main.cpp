#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

#include "Store.h"

int main() {
	
	Store store;
	std::string product;
	std::string name;
	double price = 0.0;
	std::istringstream istr;

	while (true) {
		getline(std::cin, product);
		istr.str(product);
		istr >> name;
		istr >> price;
		if (name == "end") {
			break;
		}
		store.addProduct(price, name);
		istr.str("");
		istr.clear();
	}
	std::ofstream os("store-products.txt"); // Is this the correct way of saving to a file
	os << store;
	store.printProducts();
	store.deleteProducts();
}