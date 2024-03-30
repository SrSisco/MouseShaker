#include <windows.h>
#include <iostream>
int main() {
    int max = 20;
    int min = -20;
    int RANDOM_X;
    int RANDOM_Y;
    POINT p;
    LONG CURSOR_X;
    LONG CURSOR_Y;
    int MAX_MOV;

    std::cout << "Number of shakes \n";
    std:: cin >> MAX_MOV;
    for(int i =0;i<MAX_MOV;i++)
    {

        RANDOM_X = rand()%(max-min+1)+min;
        RANDOM_Y = rand()%(max-min+1)+min;

        if(GetCursorPos(&p))
        {

            CURSOR_X = p.x;
            CURSOR_Y = p.y;


            SetCursorPos(CURSOR_X + RANDOM_X, CURSOR_Y + RANDOM_Y);
        }
        Sleep(50);

    }

    return 0;
}
//