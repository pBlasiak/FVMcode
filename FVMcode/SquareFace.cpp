#include "SquareFace.h"

SquareFace::SquareFace() : basePoint_{ Vertex() }, length_{ 1 }
{
	//TODO: sprawdz czy dobrze sa punkty clock-wise dir
	edges_.push_back(Edge(basePoint_, Vertex(basePoint_, 0, 1)));
	edges_.push_back(Edge(Vertex(basePoint_, 0, 1), Vertex(basePoint_, 1, 1)));
	edges_.push_back(Edge(Vertex(basePoint_, 1, 1), Vertex(basePoint_, 1)));
	edges_.push_back(Edge(Vertex(basePoint_, 1), Vertex()));

	calcArea();
	//calcCenter();
}

SquareFace::SquareFace(const Vertex& n, double l) : basePoint_{n}, length_{l}
{
	//TODO: sprawdz czy dobrze sa punkty clock-wise dir
	edges_.push_back(Edge(basePoint_, Vertex(basePoint_, 0, 1)));
	edges_.push_back(Edge(Vertex(basePoint_, 0, 1), Vertex(basePoint_, 1, 1)));
	edges_.push_back(Edge(Vertex(basePoint_, 1, 1), Vertex(basePoint_, 1)));
	edges_.push_back(Edge(Vertex(basePoint_, 1), Vertex()));

	calcArea();
	//calcCenter();
}

void SquareFace::calcArea()
{
	area_ = length_ * length_;
}