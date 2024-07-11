#include "PostgresDB.hpp"
#include <iostream>
#include <limits>

int main() {
    try {
        PostgresDB db("postgres", "postgres", "postgres", "localhost", 5432);

        int id;
        while (true) {
            std::cout << "Enter city ID (or 0 to exit): ";
            std::cin >> id;

            if (id == 0) {
                break;
            }

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cerr << "Invalid input. Please enter a number." << std::endl;
                continue;
            }

            try {
                std::string city = db.getCityById(id);
                std::cout << "City with ID " << id << " is " << city << std::endl;
            } catch (const std::exception &e) {
                std::cerr << e.what() << std::endl;
            }
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
