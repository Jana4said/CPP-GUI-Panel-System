# C++ GUI Panel System

A graphical user interface project built in **C++** using the **X11 graphics library**.  
It implements a simple visual system composed of **Panels** containing **Buttons**, each with customizable colors, sizes, and labels.

---

## Features
- RGB color class for defining and converting colors
- Button class for rendering labeled UI elements
- Panel class to manage and draw multiple buttons
- Overlap detection between buttons and panels
- Built with a Makefile for easy compilation

---

## File Overview
| File | Description |
|------|--------------|
| **RGB.h** | Defines the RGB color class and conversion to `CuColour` |
| **Button.cc** | Implements button drawing, border rendering, and overlap logic |
| **Panel.h** | Defines a panel that holds multiple buttons and renders them |
| **Makefile** | Build configuration for compiling and linking all components |

---

## Technologies Used
- **C++**
- **Object-Oriented Programming**
- **X11 Graphics Library**
- **Makefile**

---
**Gana Said**  
Bachelor of Computer Science (AI Stream) – Carleton University  
📧 [janasaid@cmail.carleton.ca](mailto:janasaid@cmail.carleton.ca)

---

## How to Build
```bash
make
To run:
./main
---
This project demonstrates object-oriented design and graphical rendering using low-level C++ and X11.
