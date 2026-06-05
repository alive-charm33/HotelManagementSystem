#include "Database.h"
#include <iostream>

using namespace std;

Database::Database() {
    conn = mysql_init(NULL);
    if (conn) {
        char enforce_ssl = 0;
        mysql_options(conn, MYSQL_OPT_SSL_ENFORCE, &enforce_ssl);
        char verify_cert = 0;
        mysql_options(conn, MYSQL_OPT_SSL_VERIFY_SERVER_CERT, &verify_cert);
    }
}

bool Database::connect() {

    MYSQL* result = mysql_real_connect(
        conn,
        "127.0.0.1",
        "root",
        "",
        "hotel_db",
        3306,
        NULL,
        0
    );

    if(result) {
        conn = result;
        cout << "Database Connected\n";
        return true;
    }

    cout << "Connection Failed: " << mysql_error(conn) << "\n";
    return false;
}

MYSQL* Database::getConnection() {
    return conn;
}

Database::~Database() {
    mysql_close(conn);
}