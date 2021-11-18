#ifndef STORE_H
#define STORE_H
#include <string>
#include <vector>

// Note: Because I am using Product* pointers I can do the so called 
// Forward Declaration which allows me to decrease build time.
// Instead of including the hole Product.h because I am using a pointer 
// it is enough to declare that Product is a class and that we are using it 
// in some way. 
// The acutal #include "Product.h" will be in the Store.cpp file and it will
// not able to spread to other places.
// In General: By not including Product.h in Store.h we will not spread 
// the information that Product.h carries in all the places that Store.h is included

class Product;

class Store {
public:
	void addProduct(double inputPrice, std::string& inputName);

	void printProducts() const;

	void deleteProducts();

	friend std::ostream& operator<<(std::ostream& out, const Store& store);
	// Is it better to friend this function or should I keep it inside the class

private:
	std::vector<Product*> _products;
};


#endif // !STORE_H