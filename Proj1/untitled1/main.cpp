#include <iostream>
#include "database.h"
#include "graphic.h"
using namespace std;
#define ADMIN
#define TYPE cout << "i'm here" << endl;

void setData()
{
    DataBase db;
    cout <<"Please, set your temperature: "<< endl;
    cout << "--------------------" << endl;
    cout << "|Example:          |" << endl;
    cout << "|Temperature:36.6  |" << endl;
    cout << "|Time:10:00        |" << endl;
    cout << "--------------------" << endl;
    cout <<"Tempearture:";
    cin >> db.temp;
    cout <<"Time:";
    cin >> db.time;
    db.moveToBase();
}
void check(DataBase*var)
{
    cout <<"check:"<<var->temp<<" "<<var->time<< endl;
}
void showGraphic()
{

    DataBase data;//DataBase variable for sharing data to graphic's class
    Graphic build;//Graphic variable for get access to builder-function

    //BEGIN getting data
    ifstream file;

    file.open("database.txt",ios::binary);

    while(!file.eof())
    {
        file >> data.temp >> data.time;
        build.buildGrapgic(&data); //build graphic for this data
    }

    file.close();
    //END getting data and building graphic
}

int main()
{
    //menu       
    bool end = 1;
    do
    {
        cout <<"\n1.Set Tempearture\n2.Show Graphic\n3.Exit\n(1,2 or 3)"<< endl;
        #ifdef ADMIN
        cout <<"4.DataBase"<< endl;
        #endif
        int a;
        cin >> a;
        switch(a)
        {
            case 1:
            {
                setData();
                end = 1;
                break;
            }
            case 2:
            {
            TYPE;
                showGraphic();
                end = 1;
                break;
            }
            case 3:
            {
                end = 0;
                break;
            }
            #ifdef ADMIN
            case 4:
            {
                ifstream database;
                int a;
                cout <<"1.clear\n2.open"<< endl;
                cin >> a;
                if(a==1)
                {
                   database.open("database.txt",ios::trunc);
                }
                else
                {
                    database.open("database.txt");
                    string str;
                    while(getline(database,str))
                        cout <<str<<endl;
                }

                database.close();
                break;
            }
            #endif
            default:
            {
                cout <<"Error 001: You put incorect number! "<< endl;
                end = 1;
            }
        }
    }
    while(end == 1);
    
    return 0;
}
