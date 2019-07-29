#ifndef DATABASE_H
#define DATABASE_H
#include <string>
#include <fstream>

class DataBase
{
public:
    void operator = (DataBase& data1);
    char temp[5];
    char time[6];
    void moveToBase();
};
#endif // DATABASE_H
