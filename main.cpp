#include <iostream>

using namespace std;

void convert_hours(int &a, int &b, int &c)
{
    b = a / 60;
    c = a % 60;

}

int main()
{   int time_task = 0;
    char input;
    int minutes = 450;
    int left_minutes = 0;
    int hours = 0;
    int task = 1;


convert_hours(minutes, hours , left_minutes);



    cout << hours <<"h " << left_minutes <<" min." << endl;

    cout << "Cate minute a durat primul task ? "; cin >> time_task ; cout << endl;
    minutes = minutes - time_task;
    convert_hours(minutes, hours , left_minutes);
     cout << hours <<"h " << left_minutes <<" min."; cout << endl;



  bool valid = true;
  while(valid == true)
  {

  cout<<"Alt task ? y/n ";  cin >> input ; cout << endl;

switch(input)
{
case 'y':
    task++;
    cout << "Task " << task << ": " << endl;
    cout << "Cate minute a durat ? "; cin >> time_task;
     minutes = minutes - time_task;
    convert_hours(minutes, hours , left_minutes);
     cout << hours <<"h " << left_minutes <<" min."; cout << endl;
     cout << endl;
    break;

case 'n':
  valid = false;
    break;

}
  }
    return 0;
}
