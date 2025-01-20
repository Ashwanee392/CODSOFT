#include<iostream>
#include<cstdlib>
using namespace std;

void menu();
char input_user_choise();
int input_numbers();
float calculator(float a,float b);
int working();

char choise;
int loop;

void menu()
{
    cout<<endl<<endl<<endl<<endl;
    cout<<"---------------------------------------------------PRESS '+' for ADDITION-----------------------------------------------"<<endl<<endl;
    cout<<"---------------------------------------------------PRESS '-' for SUBTRACTION--------------------------------------------"<<endl<<endl;
    cout<<"---------------------------------------------------PRESS '*' for MULTIPLICATION-----------------------------------------"<<endl<<endl;
    cout<<"---------------------------------------------------PRESS '/' for DIVISION-----------------------------------------------"<<endl<<endl;
    cout<<endl<<endl<<endl<<endl;

    //char choise = input_user_choise();
    //input_numbers();
}

char input_user_choise()
{
    char x;
    cout<<"---------------------------------------------------ENTER YOUR CHOISE-----------------------------------------------------> ";
    cin>>x;
    cout<<endl;
    return x;
}

int input_numbers()
{
    float a;
    float b;

    cout<<"---------------------------------------------------ENTER NUMBER 1--------------------------------------------------------> ";
    cin>>a;
    cout<<"---------------------------------------------------ENTER NUMBER 2--------------------------------------------------------> ";
    cin>>b;

    calculator(a,b);
    return 0;
}

float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float dive(float a,float b)
{
    return a/b;
}


float calculator(float a,float b)
{
    // choise=input_user_choise();

   switch(::choise)
   {
   case '+':
    {
        float answer = add(a,b);
        cout<<"---------------------------------------------------NUMBER 1 + NUMBER2 -------------------------------------------------------------> "<<answer<<endl<<endl;
        break;
    }
    case '-':
    {
        float answer = sub(a,b);
        cout<<"---------------------------------------------------NUMBER 1 - NUMBER2 -------------------------------------------------------------> "<<answer<<endl<<endl;
        break;
    }
    case '*':
    {
        float answer = mul(a,b);
        cout<<"---------------------------------------------------NUMBER 1 * NUMBER2 -------------------------------------------------------------> "<<answer<<endl<<endl;
        break;
    }
    case '/':
    {
        float answer = dive(a,b);
        cout<<"---------------------------------------------------NUMBER 1 + NUMBER2 -------------------------------------------------------------> "<<answer<<endl<<endl;
        break;
    }
    default :
        cout<<endl<<endl<<"########################################### ERROR INVALID CHOISE ##############################################"<<endl<<endl;
   }

    //loop;
   cout<<"--------------------------------------------DOES USER WANTS TO CONTINUE--------------------------------------------"<<endl<<endl;
   cout<<"                  ------------------------------PRESS 1 FOR CONTINUE------------------------------------                   : >";
   cin>>::loop;

   return 0;
}

int working()
{

   ::choise = input_user_choise();
    input_numbers();

    return ::loop;

}

int main()
{
     menu();
    int call= working();

    if(call == 1)
    {
        system("cls");
        menu();
        working();
    }

    else
        cout<<endl<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$-----------COMPLETED----------$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    return 0;
}
