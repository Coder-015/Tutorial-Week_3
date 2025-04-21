#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    double price;
    int quantity;

public:
    // Constructor
    Product(int id, string name, double p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    // Calculate total price
    double calculateTotalPrice() {
        return price * quantity;
    }

    // Display product details
    void productDetails() {
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << productName << endl;
        cout << "Price: " << price << " Quantity: " << quantity << endl;
        cout << "Total Price: " << calculateTotalPrice() << endl;
    }
};

int main() {
    Product cart[] = {
        Product(1, "Laptop", 50000, 1),
        Product(2, "Mouse", 500, 2),
        Product(3, "Keyboard", 1000, 1)
    };

    cout << "Shopping Cart:" << endl;
    for (int i = 0; i < 3; i++) {
        cart[i].productDetails();
        cout << "------------------" << endl;
    }

    return 0;
}
