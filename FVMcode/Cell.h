#pragma once
#include <vector>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

class Cell
{
protected:
	std::vector<Face> faces_;

public:
	//virtual std::vector<Vertex> nodes() const = 0;
	//virtual std::vector<Face> faces() const = 0;
	virtual Vertex cellCenter() const = 0;
};
