#include <view.h>
#include <fstream>
class Controller
{
public:
    Controller();//standart constructor
    void start();
    void proccesing_answer();
    void open_file(Model*);
    void create_file(Model* mdl);
private :
    int current_menu;
    Model model;

};
