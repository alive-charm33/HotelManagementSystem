#ifndef DATABASE_H
#define DATABASE_H

#include <mysql.h>

class Database {
private:
    MYSQL* conn;

public:
    Database();

    bool connect();

    MYSQL* getConnection();

    ~Database();
};

#endif