#include <iostream>

class Car {

	std::string model;
	std::string color;
	int max_speed;

	public :
	//Constructor
	//Car(std::string new_model, std::string new_color, int max_speed);
        
    void set_stats(std::string new_model, std::string new_color, int new_speed);

	std::string get_model();
	std::string get_color();
	int get_speed();
    void get_stats();
    std::string get_gas(std::string station);
    void new_speed(std::string fuelType, int speed);
    void show_stats();

};
