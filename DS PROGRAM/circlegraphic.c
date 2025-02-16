// C Implementation for drawing circle 
#include <graphics.h>;
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 320, y = 240, radius = 100;
    circle(x, y, radius);
    getch();
    closegraph();
    return 0;
}
