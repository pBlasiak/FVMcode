#include "SquareFace.h"
#include <iostream>

SquareFace::SquareFace() : Face(), basePoint_{ Vertex() }, length_{ 1 }
{
	edges_.push_back(Edge(basePoint_, basePoint_ + Vertex(1,0,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(1,0,0), basePoint_ + Vertex(1,1,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(1,1,0), basePoint_ + Vertex(0,1,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(0,1,0), basePoint_));

	calcArea();
	calcCenter();
}

SquareFace::SquareFace(const Vertex n, double l) : Face(), basePoint_{n}, length_{l}
{
	edges_.push_back(Edge(basePoint_, basePoint_ + Vertex(l,0,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(l,0,0), basePoint_ + Vertex(l,l,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(l,l,0), basePoint_ + Vertex(0,l,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(0,l,0), basePoint_));

	calcArea();
	calcCenter();
}

SquareFace::SquareFace(const Edge ep, const Edge ek) : Face(), basePoint_{ ep.p() }, length_{ep.length()}
{
	// Two edges should be of equal length
	if (length_ != ek.length())
	{
		std::cout << "The edges are not equal." << std::endl;
		exit(-1);
	}

	// The end of first edge should be the begining of the second one
	if (ep.k() != ek.p())
	{
		std::cout << "The edges are not connected." << std::endl;
		exit(-1);
	}

	// Two edges should be perpendicular
	if (!(ep * ek))
	{
		std::cout << "The edges are not perpendicular." << std::endl;
		exit(-1); 
	}

	edges_.push_back(ep);
	edges_.push_back(ek);
	//edges_.push_back(e.k(), basePoint_ + Vertex(l, l, 0)));
	//edges_.push_back(Edge(basePoint_ + Vertex(l,l,0), basePoint_ + Vertex(0,l,0)));
	//edges_.push_back(Edge(basePoint_ + Vertex(0,l,0), basePoint_));

	calcArea();
	calcCenter();
}

void SquareFace::calcArea()
{
	area_ = length_ * length_;
}

void SquareFace::calcCenter()
{
	Edge diagonal(edges_[0].p(), edges_[1].k());
	center_ = diagonal / 2;
}