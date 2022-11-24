#pragma once
#include <vector>
#include "Cell.h"

class Mesh
{
protected:
	virtual std::vector<Cell> cells() const = 0;
};
