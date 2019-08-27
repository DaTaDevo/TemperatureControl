#include <view.h>

View ::View(){}//standart constructor
void View::showTime(Model time)
{
    cout <<time.gethour()<<':'<<time.getminutes()<<"\t";
}
void View::showGraphicsLine(Model model)
{
//    cout << model.date.getDate() <<"\t";

    for (int i = 0; i < model.getnumberbp(); i++)
    {
        cout <<"-";//drawing the line
    }
    showTime(model);
    cout << model.getTemp()<<endl;
}
void View::start_menu()
{
    cout <<"1.Create Graphic\n2.Open Graphic\n3.Search graphic\n4.Exit"<< endl;
}
void View::sub_menu()
{
    cout <<"1.Edit\n2.Back"<< endl;
}
void View::edit_menu()
{
    cout <<"1.Add Data\n2.Edit Data\n3.Back"<< endl;
}
void View::choose_menu()
{
    cout <<"1.Change\n2.Delete\n3.Back"<< endl;
}
void View::set(char *str)
{
    cout <<"Please, set "<<str<<':';
    return;
}
void View ::error(string error)
{
    cout <<"ERROR:"<< error << endl ;
}
