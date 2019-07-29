#include "database.h"
void DataBase::moveToBase()
{

    std::ofstream file;
    file.open("database.txt",std::ios::app);

    file << this->temp<<" "<<this->time<<std::endl;

    file.close();
}
//void DataBase::operator=(DataBase &data)
//{
//    this->temp = data.temp;
//    this->time = data.time;
//}
