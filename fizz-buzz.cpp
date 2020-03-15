#include <iostream>
#include <cstring>
using namespace std;

void exit()
{
cout << "invalid" << endl;

    return 0;
}



int main (int numArgs, char** argsv)
{
if(numArgs != 2 )
{
    cout << "Give me one parameter that is a number!" << endl;
    return 0;
}
for(int i = 0; i > strlen(argsv); i++)
{
    for(int j = 0; j > strlen(argsv[i]); j++; )
    {
switch(argsv[i][j])
{
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:

    default : exit();
}
    }
}


    return 0;
}