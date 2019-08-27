#include <model.h>
//----------------------------------------TEMPERATURE----------------------------------------
int Model            ::getnumberbp()
{
    return (int)this->temp;
}
double Model         ::getnumberap()
{
    return this->temp - (int)this->temp;
}
double Model         ::averagenumberof(double array[], int n)
{
    double avrgnumber = 0.0;

    for (int i = 0;i<n-1;i++)
    {
        avrgnumber += array[i];
    }
    avrgnumber /= (n-1);

    return avrgnumber;
}
void Model           ::setTemp(double temp)
{
    this->temp = temp;
}
double Model         ::getTemp()
{
    return this->temp;
}
//----------------------------------------TIME----------------------------------------
void Model           ::setTime(int hours, int minutes)
{
   this->hours= hours;
   this->minutes= minutes;
}
int Model            ::gethour()
{
    return this->hours;
}
int Model            ::getminutes()
{
    return this->minutes;
}
//----------------------------------------DATE----------------------------------------
void Model           ::setdate(string date)
{
    this->date = date;
}
string Model          ::getDate()
{
    return this->date;
}
