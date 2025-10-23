#ifndef PANEL_H
#define PANEL_H

#include <string>
#include "Button.h"
using namespace std;

class Panel {
public:
    Panel();
    Panel(int x, int y, int width, int height,string id);

    bool addButton(Button& button);
    bool removeButton(string id);
    void draw(Display *display, Window win, GC gc);
    bool overlaps(Panel& p);
    void print() const;

    private:
    int x, y;           
    int width, height;  
    string id;     
    Button buttons[MAX_COMPONENTS];  
    int numButtons;     
};

#endif