// C program to create heart on the
// screen using graphics. This program
// would only work in Turbo C compiler
// in DOS compatible machine
#include <graphics.h>
#include <stdio.h>

// Function to create heart using
// graphic library
void heartDraw()
{
	// Initialize graphic driver
	int gd = DETECT, gm;
	clrscr();
	
	// Initialize graphics mode by passing
	// three arguments to initgraph function

	// &gdriver is the address of gdriver
	// variable, &gmode is the address of
	// gmode and "C:\\Turboc3\\BGI" is the
	// directory path where BGI files
	// are stored
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

	// Draw rectangle
	rectangle(150, 50, 450, 350);

	// Draw ellipse
	ellipse(250, 150, 0, 190, 50, 70);
	ellipse(350, 150, -10, 180, 50, 70);

	// Draw line
	line(200, 160, 300, 310);
	line(400, 160, 300, 310);

	// Set rectangle color
	setfillstyle(10, 4);
	
	// To fill color
	floodfill(155, 200, WHITE);

	// Set heart color
	setfillstyle(1, 4);
	
	// To fill color
	floodfill(300, 200, WHITE);

	// closegraph function closes the
	// graphics mode and deallocates
	// all memory allocated by
	// graphics system
	closegraph();
	closegraph();
}

// Driver Code
int main()
{
	// Function call
	heartDraw();
	return 0;
}

