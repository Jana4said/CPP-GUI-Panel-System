#include "Button.h"
#include <iostream>
#include <X11/Xlib.h> 
using namespace std;


Button::Button() : x(0), y(0), width(50), height(30), label("Button"), fill(CuBlack), border(CuWhite) {}
// RGB colors
Button::Button(int x, int y, int width, int height, string label, RGB fill, RGB border)
    : x(x), y(y), width(width), height(height), label(label), fill(fill), border(border) {}

//CuColour colors
    Button::Button(int x, int y, int width, int height,string label, CuColour fill, CuColour border)
    : x(x), y(y), width(width), height(height), label(label), fill(fill), border(border) {}

//Draw
void Button::draw(Display *display, Window win, GC gc, int parentX, int parentY) {
    //filled rect
     XSetForeground(display, gc, fill.getColour());
    XFillRectangle(display, win, gc, parentX + x, parentY + y, width, height);
    //button border
     XSetForeground(display, gc, border.getColour());
    XDrawRectangle(display, win, gc, parentX + x, parentY + y, width, height);
    //button label
     XSetForeground(display, gc, border.getColour());  // Use border color for text
    XDrawString(display, win, gc, parentX + x + 10, parentY + y + 20, label.c_str(), label.length());
    }

    //checking
    bool Button::overlaps(Button& b) {
    if (x + width <= b.x || b.x + b.width <= x || y + height <= b.y || b.y + b.height <= y) {
        return false;// No overlap
    }
    return true;// Overlap

}

void Button::print() const {
    cout << "Button: " << label << endl;
    cout << "Position: " << x << ", " << y << endl;
    cout << "Size: " << width << " x " << height << endl;
    cout << "Fill Color: R=" << fill.getR() << ", G=" << fill.getG() << ", B=" << fill.getB() << endl;
    cout << "Border Color: R=" << border.getR() << ", G=" << border.getG() << ", B=" << border.getB() << endl;
}
int Button::getX() const { return x; }
int Button::getY() const { return y; }
int Button::getWidth() const { return width; }
int Button::getHeight() const { return height; }
string Button::getLabel() const { return label; }
RGB Button::getFill() const { return fill; }
RGB Button::getBorder() const { return border; }
