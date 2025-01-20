#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void menu();
int random_number_creation();
int guessing_number();
int working();


int random_number;
int range_chosen;
int user_choise;
int tries = 0;
int loop;

void menu()
{
    cout<<endl<<endl<<"*******************************************CHOOSE THE RANGE OF NUMBER**************************************"<<endl<<endl;
    cout<<"-------------------------------------------A NUMBER BETWEEN 001-100 PRESS 1---------------------------------------------"<<endl<<endl;
    cout<<"-------------------------------------------A NUMBER BETWEEN 100-200 PRESS 2---------------------------------------------"<<endl<<endl;
    cout<<"-------------------------------------------A NUMBER BETWEEN 200-300 PRESS 3---------------------------------------------"<<endl<<endl;
    cout<<"-------------------------------------------A NUMBER BETWEEN 300-400 PRESS 4---------------------------------------------"<<endl<<endl<<"------------------>: ";
    cin>>::range_chosen;
    cout<<endl<<endl<<endl<<endl;


}

int random_number_creation()
{
    srand(time(0));
    switch(::range_chosen)
    {
    case (1):
    {
        srand(time(0));
        int lower = 1;
        int upper = 100;
        ::random_number = lower + rand() % (upper - lower + 1);
        break;
    }
    case (2):
    {
        srand(time(0));
        int lower = 100;
        int upper = 200;
        ::random_number = lower + rand() % (upper - lower + 1);
        break;
    }
    case (3):
    {
        srand(time(0));
        int lower = 200;
        int upper = 300;
        ::random_number = lower + rand() % (upper - lower + 1);
        break;
    }
    case (4):
    {
        srand(time(0));
        int lower = 300;
        int upper = 400;
        ::random_number = lower + rand() % (upper - lower + 1);
        break;
    }
    default :
    {
        cout<<"############################################# INVALID INPUT #############################################";
        return 1;
    }
    }
    cout<<"*******************************************NUMBER HAS BEEN GENERATED**************************************"<<endl<<endl;
    cout<<"********************************************* GUESS THE NUMBER *******************************************"<<endl<<endl;
    guessing_number();
    return 0;
}

int guessing_number()
{

    while(::tries<5)
    {
        cout<<"-------------------------------------------ENTERED GUESS NUMBER------------------------------------------------->: ";
        cin>>::user_choise;
        if(::user_choise > :: random_number)
            cout<<"--------------------------------------YOU GUESSED MORE ----------------------------------------------"<<endl;
        else if(::user_choise < :: random_number)
            cout<<"--------------------------------------YOU GUESSED LESS ----------------------------------------------"<<endl;
        else if(user_choise == ::random_number)
            break;

        ::tries++;
    }
    if(user_choise == ::random_number)
        cout<<"----------------------------------------U GUESSED THE NUMBER IN "<<::tries<<" TRIES------------------------"<<endl;
    else
        cout<<"-----------------------------------NICE TRY BETTER LUCK NEXT TIME------------------------"<<endl;
    return 0;
}

int working()
{
    menu();
    int check = random_number_creation();
    if(check == 1)
    {
        cout<<"------------------------------------DO USER WANT TO PLAY AGAIN IF YES PRESS 1-------------------------------------------------->: "<<endl;
        cin>>::loop;
        return 0;
    }
    else
    {
        cout<<"------------------------------------DO USER WANT TO PLAY AGAIN IF YES PRESS 1-------------------------------------------------->: "<<endl;
        cin>>::loop;
        return 0;
    }

}

int main()
{
    /* working();

     if(::loop == 1)
     {
         ::tries = 0;
         system("cls");
         working();
     }*/
    do
    {
        ::tries = 0;
        system("cls");
        working();
    }
    while(::loop == 1);

        cout<<"#############################################COMPLETED################################################";
    return 0;
}

