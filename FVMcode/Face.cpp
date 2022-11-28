#include "Face.h"

long Face::faceNum_ = 0;

Face::Face(const Face& f) : label_{ faceNum_++ }, area_{ f.area() }{}
