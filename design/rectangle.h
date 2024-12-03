#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "figure.h"

class Rectangle : public Figure
{
public:
     Rectangle(const std::string &name = "Rectangle");// TODO: crear el constructor del Rectangle
    virtual void draw();
};

#endif
