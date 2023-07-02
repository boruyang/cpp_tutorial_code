#include <iostream>

int main() {
    //Assigmnment notation
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion: " << narrowing_conversion_assignment << std::endl;

    std::cout << "size of int: " << sizeof(int) << std::endl;
    std::cout << "size of truck_count" << sizeof(truck_count) << std::endl;
    
    return 0;
}