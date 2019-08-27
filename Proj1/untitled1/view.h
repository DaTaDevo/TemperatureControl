#include <model.h>
#include <iostream>

class View
{
public:
    View();
    void showTime(Model);
    void set(char*);
    void showGraphicsLine(Model);
    //standart menu's functions
    void start_menu();
    void sub_menu();         //i've  choosen type integer because i'll need to
    void edit_menu();
    void choose_menu();
    void error(string);
};
