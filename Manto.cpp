//Manto.cpp definition

#include <iostream>
#include "Design.h"
#include "Manto.h"

using namespace std;

Manto::Manto()
{
}

void Manto::set_button()
{
    char response;

    cout<<"Do you want to set a button on your manto?"<<endl<<"If you want, please enter 'y' else please enter 'n':\t";

    cin>>response;

    cout<<endl;

    if(response == 'y')
    {
        exist_button = true;
    }

}


void set_brooch()
{
    char response;

    cout<<"Do you want to set a brooch on your manto?"<<endl<<"If you want, please enter 'y' else please enter 'n':\t";

    cin>>response;

    cout<<endl;

    if(response == 'y')
    {
        exist_brooch = true;
    }

}



