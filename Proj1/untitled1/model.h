#include <stdlib.h>
#include <string>
using namespace std;

class Model
{
public:
    int getnumberbp();
    double getnumberap();
    double averagenumberof(double array[],int n);
    void setTemp(double temp);
    double getTemp();

    double temp;

    void setTime(int hours, int minutes);
    int gethour();
    int getminutes();

    int hours;
    int minutes;

    void setdate(string);
    string getDate();

    string date;
};
