#include<stdio.h>
#include<windows.h>
void GoTo(SHORT posX, SHORT posY);
int main(){
     GoTo(10, 15);
     printf("test");

    return 0;
}

void GoTo(SHORT posX, SHORT posY)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position;
    Position.X = posX;
    Position.Y = posY;

	SetConsoleCursorPosition(hStdout, Position); 
}