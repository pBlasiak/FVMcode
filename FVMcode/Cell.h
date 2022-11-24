#pragma once
#include <vector>
#include "Node.h"
#include "Edge.h"
#include "Face.h"

class Cell
{
protected:
	std::vector<Face> faces_;

public:
	//virtual std::vector<Node> nodes() const = 0;
	//virtual std::vector<Face> faces() const = 0;
	virtual Node cellCenter() const = 0;
};
