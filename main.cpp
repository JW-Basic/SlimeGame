#include "raylib.h"
#include "grafik/include/View.h"
#include <memory>




void setup(std::unique_ptr<View>& view){
    view = std::make_unique<View>();
}

int main(void){
    std::unique_ptr<View> view;

    setup(view);

    while(!WindowShouldClose()){
        
    }

    CloseWindow();
    return 0;
}