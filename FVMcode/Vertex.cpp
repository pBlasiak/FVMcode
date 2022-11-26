#include "Vertex.h"

Vertex operator+ (const Vertex& l, const Vertex& r)
{
	return Vertex
	(
		l.x() + r.x(),
		l.y() + r.y(),
		l.z() + r.z()
	);
}