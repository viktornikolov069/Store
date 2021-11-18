#include <iostream>

#include "Product.h"
#include "Store.h"

void Store::addProduct(double inputPrice, std::string& inputName) {
	_products.push_back(new Product(inputPrice, inputName));
}

void Store::printProducts() const {
	for (std::vector<Product*>::const_iterator it = _products.begin(); it != _products.end(); ++it) {
		std::cout << (*it)->getName() << " " << (*it)->getPrice() << std::endl;
	}
}

void Store::deleteProducts() {	    //Why can this be const? Answer: (p) is just a copy it 
	for (Product* p : _products) {  //does not affect _products but try to put a reference(&) next
		delete p;				    //to the pointer and it will not work.
		p = nullptr;
		// Is this the correct way to delete an object on the heap
		// is it possible that after deleting the pointer 
		// allocated memory is left without access

		//Should Product* p be passed by reference does it matter if it is const or not?
	}
}
std::ostream& operator<<(std::ostream& out, const Store& store) {
	//std::ostringstream out;
	for (Product* product : store._products) {
		out << product->getName() << " " << product->getPrice() << '\n';
	}
	return out;
}

