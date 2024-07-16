cmake_minimum_required(VERSION 3.10)
project(postgresql_cpp_connector)

set(CMAKE_CXX_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_check_modules(PQXX REQUIRED libpqxx)

add_executable(main main.cpp PostgresDB.cpp)

target_include_directories(main PRIVATE ${PQXX_INCLUDE_DIRS})
target_link_libraries(main PRIVATE ${PQXX_LIBRARIES})
