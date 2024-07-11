#ifndef POSTGRESDB_HPP
#define POSTGRESDB_HPP

#include <pqxx/pqxx>
#include <string>
#include <iostream>
#include <stdexcept>

class PostgresDB {
public:
    PostgresDB(const std::string& dbname, const std::string& user, const std::string& password, const std::string& host, int port);
    ~PostgresDB();

    std::string getCityById(int id);

private:
    pqxx::connection* conn;
};

#endif // POSTGRESDB_HPP
