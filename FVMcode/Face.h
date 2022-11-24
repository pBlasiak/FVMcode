#pragma once
#include <string>
#include <vector>
#include "Edge.h"

class Face
{
protected:
	static long faceNum_;
	long label_;
	double area_;
	std::vector<Edge> edges_;

public:
	virtual double faceArea() const = 0;
	virtual double faceCenter() const = 0;

	Face() : label_{++faceNum_}, area_ { 0 } { }
};
