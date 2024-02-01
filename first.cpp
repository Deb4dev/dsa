#include <iostream>
#include <cmath>

class Sphere {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    double calculateVolume() {
        return (4.0 / 3.0) * M_PI * pow(radius, 3);
    }
};

int main() {
    double radius;
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    std::cout << "Volume of the sphere: " << Sphere(radius).calculateVolume() << std::endl;
    return 0;
}




