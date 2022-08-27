#include <iostream>
#include <cassert>

float travelTime(float distance, float speed) {
	assert(speed > 0);
	return distance / speed;
}

int main() {
	float distance, speed;
	std::cout 	<< "You need to know travel time?" << std::endl
				<< "Please, input following parameters:" << std::endl
				<< "distance (km):";
	std::cin >> distance;
	std::cout << "speed (A positive number greater than zero) (km/h):";
	std::cin >> speed;

	int travelInMinutes = 60 * travelTime(distance, speed);
	int hours = travelInMinutes / 60;
	int minutes = travelInMinutes % 60;

	std::cout << "____________________" << std::endl;
	std::cout << "Travel Time is " << hours << "h " << minutes << "min." << std::endl;
}
