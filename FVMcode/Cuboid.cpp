#include "Cuboid.h"
#include "SquareFace.h"

Cuboid::Cuboid() : Cell(), l_{ 1 }, w_{ 1 }, h_{ 1 }
{
	volume_ = l_ * w_ * h_;
	faces_.push_back(new SquareFace());
}
