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

SquareFace::SquareFace(const Vertex& n, double l) : Face(), basePoint_{n}, length_{l}
{
	edges_.push_back(Edge(basePoint_, basePoint_ + Vertex(l,0,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(l,0,0), basePoint_ + Vertex(l,l,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(l,l,0), basePoint_ + Vertex(0,l,0)));
	edges_.push_back(Edge(basePoint_ + Vertex(0,l,0), basePoint_));

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