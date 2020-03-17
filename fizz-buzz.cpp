#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

int exit();
int main (int numArgs, char** argsv)
{

bool isNegative = false;



if(numArgs != 2 )
{
    cout << "Give me one parameter that is a number!" << endl;
    return 0;
}

    for(int j = 0; j < strlen(argsv[1]); j++ )
    {
       
        if(j == 0)
        {
            switch(argsv[1][j])
            {
    case '-':  
   isNegative = true;
    break;   
    case '0': break;
    case '1': break;
    case '2': break;
    case '3': break;
    case '4': break;
    case '5': break;
    case '6': break;
    case '7': break;
    case '8': break;
    case '9': break;

    default : return exit();
                
            }
        }
else
{
switch(argsv[1][j])
{
    
    case '0': break;
    case '1': break;
    case '2': break;
    case '3': break;
    case '4': break;
    case '5': break;
    case '6': break;
    case '7': break;
    case '8': break;
    case '9': break;

    default : return exit();
}
}
//loop ends
}

stringstream geek(argsv[1]);
int value = 0;
geek >> value;

//count down or up to zero
if(isNegative)
{
for(int i = value; i < 0; i++)
    {
cout << i;
if(i % 3 == 0)
{
cout << " fizz";
}
if(i % 4 == 0)
{
cout << " buzz";
}
cout << endl;
    }
}
else 
{
    for(int i = value; i > 0; i--)
    {
        cout << i;
if(i % 3 == 0)
{
cout << " fizz";
}
if(i % 4 == 0)
{
cout << " buzz";
}
cout << endl;
    
    }
}

    return 0;
}





////////////////////////////////////////////Method implementaion////////////////////////////////
int exit()
{
cout << "You gave me one parameter, but it is not an integer!" << endl;

    return 0;
}
