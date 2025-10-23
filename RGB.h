#ifndef RGB_H
#define RGB_H

#include "defs.h"

class RGB {
public:
    RGB();
    RGB(int r, int g, int b);
    RGB(CuColour colour); 

CuColour getColour() const;
void setColour(CuColour colour);
 

int getR() const;
int getG() const;
int getB() const;
void setR(int r);
void setG(int g);
void setB(int b);

private:
    int r, g, b; 

};
#endif