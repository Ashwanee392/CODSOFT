#include<iostream>
#include<ctime>
using namespace std;

void draw_board(char *spaces);
void playermove(char *spaces, char player);
void computermove(char *spaces, char computer);
bool checkwiner(char *spaces, char player,char computer);
bool checktie(char *spaces);


int main()
{
     char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
     char player = 'X';
     char computer = 'O';
     bool running = true;

     draw_board(spaces);

     while(running)
     {
         playermove(spaces, player);
         draw_board(spaces);
     }

    return 0;
}

void draw_board(char *spaces)
{
    cout<<"                                |     |     "<<endl;
    cout<<"                             "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<" "<<endl;
    cout<<"                           _____|_____|_____"<<endl;

    cout<<"                                |     |     "<<endl;
    cout<<"                             "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<" "<<endl;
    cout<<"                           _____|_____|_____"<<endl;

    cout<<"                                |     |     "<<endl;
    cout<<"                             "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<" "<<endl;
    cout<<"                                |     |     "<<endl;

}
void playermove(char *spaces, char player)
{
  int number;
  do
  {
      cout<<" enter a spot to place a marker (1-9)";
      cin>> number;
      number--;
      if(spaces[number] == ' ')
      {
          spaces[number] = player;
          break;
      }
  }while(!number > 0 || !number < 8);
}
void computermove(char *spaces, char computer)
{

}
bool checkwiner(char *spaces, char player,char computer)
{
    return 0;
}
bool checktie(char *spaces)
{
    return 0;
}
