#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    double price;
    int year;
    static int totalCars;

public:
    // Constructor
    Car(string b, string m, double p, int y) {
        brand = b;
        model = m;
        price = p;
        year = y;
        totalCars++;
    }

    // Display car details
    void displayCarInfo() {
        cout << "Brand: " << brand << " Model: " << model << endl;
        cout << "Price: " << price << " Year: " << year << endl;
    }

    // Display total cars
    static void showTotalCars() {
        cout << "Total Cars in Inventory: " << totalCars << endl;
    }
};

// Initialize static variable
int Car::totalCars = 0;

int main() {
    Car car1("Toyota", "Camry", 30000, 2023);
    Car car2("Honda", "Civic", 25000, 2022);

    car1.displayCarInfo();
    car2.displayCarInfo();

    Car::showTotalCars();

    return 0;
}
