#include "graphic.h"
#include <iostream>
//void Graphic::getDataForProcessing()
//{
//    data = shared;
//    size_data = n;
//    buildGrapgic();
//}
std::ostream& operator<< (std::ostream &out, const DataBase point)
{
    out << point.temp <<" "<< point.time;

    return out;
}
void Graphic::buildGrapgic(DataBase* data)
{
         double temp = atof(data->temp);

        if(temp < 36.0)
           std::cout <<"Temperature is lower than 36.0 degrees"<< std::endl;

        switch((int)temp)
        {
        case 36:
            {
                int numlines =(temp - 36.0)*10;
                for(int i = 0;i<numlines;i++)
                {
                  std::cout <<"-";
                }
                std::cout <<*data<<" "<< std::endl;
                break;
            }
        case 37:
            {
                int numlines =(temp - 37.0+1.0)*10;
                for(int i = 0;i<numlines;i++)
                {
                  std::cout <<"-";
                }
                std::cout <<*data<< std::endl;
                break;
            }
        case 38:
            {
                int numlines =(temp - 38.0+2.0)*10;
                for(int i = 0;i<numlines;i++)
                {
                  std::cout <<"-";
                }
                std::cout <<*data<< std::endl;
                break;
            }
        case 39:
            {
                int numlines =(temp - 39.0+3.0)*10;
                for(int i = 0;i<numlines;i++)
                {
                  std::cout <<"-";
                }
                std::cout <<*data<< std::endl;
                break;
            }
        case 40:
            {
                int numlines =(temp - 40.0+4.0)*10;
                for(int i = 0;i<numlines;i++)
                {
                  std::cout <<"-";
                }
                std::cout <<*data<< std::endl;
                break;
            }
        case 41:
            {
                int numlines =(temp - 41.0+5.0)*10;
                for(int i = 0;i<numlines;i++)
                {
                  std::cout <<"-";
                }
                std::cout <<*data<< std::endl;
                break;
            }
        case 42:
            {
                int numlines =(temp - 42.0+6.0)*10;
                for(int i = 0;i<numlines;i++)
                {
                  std::cout <<"-";
                }
                std::cout <<*data<< std::endl;
                break;
            }
        }
}
