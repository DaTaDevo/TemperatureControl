#ifndef GRAPHIC_H
#define GRAPHIC_H
#include <database.h>

class Graphic
{
private:
//    DataBase* data = new DataBase[size_data];
    int size_data;
    friend std::ostream& operator<< (std::ostream &out, const DataBase &point);

public:
    void buildGrapgic(DataBase* data);
//    void getDataForProcessing(DataBase* shared, int n);
};

#endif // GRAPHIC_H
