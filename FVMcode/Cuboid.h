#pragma once
#include "Cell.h"
class Cuboid :
    public Cell
{
private:
    //- Length 
    double l_;

    //- Width 
    double w_;

    //- Height 
    double h_;

public:
    //- Constructors
    Cuboid();
    Cuboid(Face& f, double dx);

    //- Destructor
    virtual ~Cuboid();
};

