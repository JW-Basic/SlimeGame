#include "View.h"

View::View(){
    const int screenStartWidth = 1280;
    const int screenStartHeight = 720;
    const char* windowStartTitel = "Slime Game";

    InitWindow(screenStartWidth, screenStartHeight, windowStartTitel);
};