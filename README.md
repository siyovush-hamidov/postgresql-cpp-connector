# 🏙️ PostgreSQL C++ Connector 🌆

Welcome to **PostgreSQL with C++: City Explorer**! 🚀 This project showcases a simple yet powerful example of how to connect a C++ application to a PostgreSQL database using the `libpqxx` library. With this project, you can explore the 10 largest cities in the USA right from your terminal! 🌎

## Features ✨

- **Easy Setup** 🛠️: Quickly set up and get started with minimal configuration.
- **Simple Interface** 💻: Interact with the database through a clean and intuitive terminal interface.
- **Robust Design** 🏗️: Organized code structure with a dedicated PostgreSQL class for easy database management.
- **Educational** 📚: Perfect for learning how to integrate C++ with PostgreSQL using `libpqxx`.

## Why Use This Project? 🌟

- **Learn by Doing** 👨‍💻: Hands-on experience is the best way to learn. This project provides a practical example of database integration.
- **Boost Your Skills** 🚀: Improve your C++ and SQL knowledge by exploring real-world applications.
- **Reusable Code** ♻️: The PostgreSQL class can be easily adapted for other projects requiring database interactions.

## How to Get Started 🏁

1. **Clone the Repository** 🧩:
   ```bash
   git clone https://github.com/siyovush-hamidov/postgresql-cpp-connector.git
   cd postgresql-cpp-city-explorer
   ```

2. **Install Dependencies** 📦:
   - Make sure you have PostgreSQL and `libpqxx` installed.
   - Set up your PostgreSQL server and create the `cities` table with the top 10 largest cities in the USA.

3. **Compile the Code** 🛠️:
   ```bash
   g++ -std=c++11 main.cpp PostgresDB.cpp -o city_explorer `pkg-config --cflags --libs libpqxx`
   ```

4. **Run the Program** ▶️:
   ```bash
   ./city_explorer
   ```

5. **Explore the Cities** 🗺️:
   - Enter the city ID to see the city name.
   - Type `0` to exit the program.

## Additional Resources:

- https://www.postgresql.org/docs/7.2/libpqplusplus.html
- https://www.instaclustr.com/support/documentation/postgresql/using-postgresql/connecting-to-postgresql-with-c-plus-plus/

## Contributions Welcome! 🤝

We love contributions! Feel free to fork the repository and submit pull requests. Let's make this project even better together! 🌟

## License 📜

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
