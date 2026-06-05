#include "database.h"
#include <iostream>

using namespace std;

int main()
{
    Database db;

    if(db.connect())
    {
        cout << "Database Connected Successfully\n";
    }
    else
    {
        cout << "Database Connection Failed\n";
    }

    return 0;
}