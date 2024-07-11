#include "PostgresDB.hpp"

PostgresDB::PostgresDB(const std::string& dbname, const std::string& user, const std::string& password, const std::string& host, int port) {
    std::string connection_str = "dbname=" + dbname + " user=" + user + " password=" + password + " host=" + host + " port=" + std::to_string(port);
    conn = new pqxx::connection(connection_str);
    if (conn->is_open()) {
        std::cout << "Connected to " << conn->dbname() << std::endl;
    } else {
        throw std::runtime_error("Failed to connect to the database.");
    }
}

PostgresDB::~PostgresDB() {
    conn->disconnect();
    delete conn;
}

std::string PostgresDB::getCityById(int id) {
    pqxx::nontransaction N(*conn);
    pqxx::result R(N.exec("SELECT name FROM cities WHERE id = " + N.quote(id)));

    if (R.empty()) {
        throw std::runtime_error("City with given ID not found.");
    }

    return R[0]["name"].as<std::string>();
}
