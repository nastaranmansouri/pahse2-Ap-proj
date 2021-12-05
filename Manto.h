//Manto.h definition

#include <iostream>
#include "Design.h"

#ifndef MANTO_H
#define MANTO_H


class Manto : public Design
{
    public:

        Manto();

        void set_button();

        void set_brooch();

    private:

        bool exist_button = false ;
        bool exist_brooch = false ;
};

#endif // MANTO_H
