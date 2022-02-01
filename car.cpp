#include <iostream>
#include "car.hpp"

// Constructor
//Car::Car(std::string new_model, std::string new_color, int speed)
//	: model(new_model), color(new_color), max_speed(speed) {}

void Car::set_stats(std::string new_model, std::string new_color, int new_speed)
{
    model = new_model;
    color = new_color;
    max_speed = new_speed;
}

void Car::show_stats()
{
    std::cout << "Model name: " << model << ".\n";
    std::cout << "Color: " << color << "\n";
    std::cout << "Max speed: " << max_speed << "\n";
}

std::string Car::get_model()
{
	return model;
}

std::string Car::get_color()
{
	return color;
}

int Car::get_speed()
{
	return max_speed;
}

std::string Car::get_gas(std::string station) 
{
    std::string fuelType;
    
    if (station == "Exxon" || station == "exxon" || station == "1")
    {
        fuelType = "biodiesel";
    } else if (station == "Shell" || station == "shell" || station == "2")
    {
        fuelType = "diesel";
    } else if (station == "Luna" || station == "luna" || station == "3")
    {
        fuelType = "hydrazine";
    } else if (station == "Pemex" || station == "pemex" || station == "4")
    {
        fuelType = "candies";
    }
    
    return fuelType;
}

void Car::new_speed(std::string fuelType, int speed)
{
    if (fuelType == "biodiesel")
    {
        std::cout << "Got some " << fuelType << ". Max speed is now " << speed * 0.75 << ". But at least it's eco-friendly.\n";
    } else if (fuelType == "diesel")
    {
        std::cout << "Got some " << fuelType << ". Max speed is now " << speed * 1.25 << ". But it's probably gonna blow up soon.\n";
    } else if (fuelType == "hydrazine")
    {
        std::cout << "Got some " << fuelType << ". Max speed is now " << speed * 5 << ". Get ready to go fly!\n";
    } else if (fuelType == "candies")
    {
        std::cout << "Got some " << fuelType << ". Max speed is 0. You just blew up.\n";
    }
    
}

void Car::get_stats()
{
    std::cout << get_color() << " " << get_model()
              << ". Max speed: " << get_speed() << ".\n";
}
