#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
	Product(double inputPrice, std::string& inputName);

	double getPrice() const;

	std::string getName() const;

private:
	double _price = 0;
	std::string _name;
};


#endif // !PRODUCT_H

