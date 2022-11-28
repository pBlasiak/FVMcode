#pragma once
#include <vector>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

class Cell
{
protected:
	static long cellNum_;
	const long label_;
	double volume_;
	std::vector<Face*> faces_;

public:
	//- Constructors
	Cell() : label_{ cellNum_++ }, volume_{ 0 } {}
	
	//- Destructor
	virtual ~Cell() {}

	//- Methods
	long cellNum() const
	{
		return cellNum_;;
	}

	long label() const
	{
		return label_;
	}
	//virtual std::vector<Vertex> nodes() const = 0;
	//virtual std::vector<Face> faces() const = 0;

	virtual Vertex cellCenter() const = 0;
};
