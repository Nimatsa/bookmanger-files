#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand( time (0) );
    int thenumber;
    int usernumber;
    int i;
    i=0;
    char diffculty;
    cout<<"********number guessing game********\n";
    cout<<"choose difficulty hard=A    normal=B    easy=C\n";
    cin>>diffculty;
    switch(diffculty){



    case 'A': 
    i=0;
    cout<<"you chose the hard diffculty\n";
    thenumber = rand() % 100 + 1;
    cout<<"take a guess";
    while (i<=3)
    {
        cin>>usernumber;
        i++;
        if (usernumber<thenumber)
        cout<<"pick a higher number\n";
        else if(usernumber>thenumber)
        cout<<"pick a lower number\n";
        else{
        cout<<"you guesed it right :D\n";
        break;
        }
        if(i==3)
        cout<<"3 tries you loose :( \n";   
    }
break;
    

    case 'B':
    i=0;
    cout<<"you chose the normal diffculty\n";
    thenumber = rand() % 100 + 1;
    cout<<"take a guess";
    while (i<=10)
    {
        cin>>usernumber;
        i++;
        if (usernumber<thenumber)
        cout<<"pick a higher number\n";
        else if(usernumber>thenumber)
        cout<<"pick a lower number\n";
        else{
        cout<<"you guesed it right :D\n";
        break;
        }
        if(i==10)
        cout<<"10 tries you loose :( \n";     
    }
break;    


    case 'C':
    i=0;
    cout<<"you chose the easy diffculty\n";
    thenumber = rand() % 100 + 1;
    cout<<"take a guess";
    
   while (i<=15)
   {
    cin>>usernumber;
        i++;
        if (usernumber<thenumber)
        cout<<"pick a higher number\n";
        else if(usernumber>thenumber)
        cout<<"pick a lower number\n";
        else{
        cout<<"you guesed it right :D\n";
        break;
        }
        if(i==15) 
        cout<<"15 tries you loose :( \n";     
   }
break;
default:
        cout << "Invalid choice! Please restart the game and choose A, B, or C.\n";
break;   
    }    

return 0;

}