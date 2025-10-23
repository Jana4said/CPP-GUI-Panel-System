
# If you are compiling natively on a mac, you will need to use the following flags.
# When you are compiling your executable: 
#
#     g++ $(macflag) -o <exectuable> <source files> $(maclib)
#
# For example:
#
# 	  g++ $(macflag) -o a1 main.o Panel.o Button.o CuWindow.o Tester.o $(maclib)
#
# When you are compiling your object files:
#
#	  g++ $(macflag) -c <source file> $(macinclude)
#
# macinclude is used to include the X11 library, if you have installed it using XQuartz.
# maclib is used to link the X11 library, if you have installed it using XQuartz.
# macflag is used to enable C++11 features, which are required for this assignment.



# Put your Makefile instructions below.

.PHONY: all clean

all: a1

a1: main.o RGB.o Button.o Panel.o CuWindow.o Tester.o
	g++ -o a1 main.o RGB.o Button.o Panel.o CuWindow.o Tester.o -lX11

main.o: main.cc
	g++ -c main.cc

RGB.o: RGB.cpp RGB.h
	g++ -c RGB.cpp

Button.o: Button.cpp Button.h RGB.h
	g++ -c Button.cpp

Panel.o: Panel.cpp Panel.h Button.h
	g++ -c Panel.cpp

CuWindow.o: CuWindow.cpp CuWindow.h Panel.h RGB.h
	g++ -c CuWindow.cpp

Tester.o: Tester.cpp Tester.h
	g++ -c Tester.cpp

clean:
	rm -f main.o RGB.o Button.o Panel.o CuWindow.o Tester.o a1