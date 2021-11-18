#include "Product.h"

Product::Product(double inputPrice, std::string& inputName)
	: _price{ inputPrice }, _name{ inputName } {
}

double Product::getPrice() const {
	return _price;
}

std::string Product::getName() const {
	return _name;
}
