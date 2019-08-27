#include <control.h>
Controller ::Controller(){}
void Controller ::start()
{
    View v;
    v.start_menu();
    cin >> current_menu;
    proccesing_answer();
}
void Controller ::proccesing_answer()
{
    if (current_menu > 3)
        return;
    else
    {
        View v;
        v.set("date");
        cin >> model.date;
        switch (current_menu)
        {
        case 1:
            {
                //Open Graphic
                open_file(&model);
                break;
            }
        case 2:
            {
                //Create Graphic
                create_file(&model);
                break;
            }
        case 3:
            {
                //Search Graphic
                open_file(&model);
                break;
            }
        }
    }
}
void Controller ::open_file(Model* mdl)
{
    View v;
    ifstream file;
    string path = mdl->date;
    path += ".txt";
    file.open(path);
    if(!file.is_open())
    {
        return v.error("Not Found The File!");
    }
    while (file >> model.date >> model.hours >> model.minutes >> model.temp)
    {

       v.showGraphicsLine(*mdl);
    }
    file.close();
    v.sub_menu();
}
void Controller::create_file(Model* mdl)
{
    View v;
    ofstream file;
    string path = mdl->date;
    path += ".txt";
    file.open(path);
    file.close();
    v.edit_menu();
}
