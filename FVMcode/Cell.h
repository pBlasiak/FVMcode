#pragma once
#include <vector>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

class Cell
{
protected:
	//static long cellNum_;
	//const long label_;
	double volume_;

	//- Faces are constructed from edges in the
	//  way that the normal vector points outward of a cell
	std::vector<Face*> faces_;

public:
//- Constructors
	Cell() : volume_{ 0 } {}
	Cell(const Cell&) = delete;
	
//- Destructor
	virtual ~Cell() {}

//- Operators
	Cell& operator=(const Cell&) = delete;

//- Methods
	//long cellNum() const
	//{
	//	return cellNum_;;
	//}

	//long label() const
	//{
	//	return label_;
	//}

	long volume() const
	{
		return volume_;
	}
	//virtual std::vector<Vertex> nodes() const = 0;
	//virtual std::vector<Face> faces() const = 0;

	virtual Vertex cellCenter() const = 0;
	virtual double calcVolume() const = 0;
};
