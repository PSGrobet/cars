#include <iostream>
#include "car.hpp"

int main() {

	Car mustang, tesla, bugatti, vocho, new_car;
    mustang.set_stats("Mustang", "Yellow", 200);
	tesla.set_stats("Tesla", "Red", 230);
	vocho.set_stats("Beetle", "Blue", 90);
	bugatti.set_stats("Bugatti", "Purple", 278);

    int car_select;
    std::cout << "Pick a car [mustang: 1 | tesla: 2 | vocho: 3 | bugatti: 4]:\n>>> ";
    std::cin >> car_select;
    
    // Esto se puede hacer una función, pero necesitas un "reference" como parámetro
    // para poder modificar new_car desde adentro.
    if(car_select == 1){
        new_car = mustang;
    } else if (car_select == 2) {
        new_car = tesla;        
    } else if (car_select == 3) {
        new_car = vocho;
    } else if (car_select == 4) {
        new_car = bugatti;
    };
    new_car.show_stats();
    
    std::cout << "You need some fuel, where do you go? [Exxon: 1 | Shell: 2 | Pemex: 3 | Luna: 4]\n>>> ";
    std::string station;
    std::cin >> station;
    
    new_car.new_speed(new_car.get_gas(station), new_car.get_speed());
    
	return 0;
};
