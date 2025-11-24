#ifndef GRAFIKOBJECT_H
#define GRAFIKOBJECT_H

#include "raylib.h"
#include "global/include/BlockPosition.h"

class GrafikObject{
    private:
        unsigned int id;
        RAYLIB_H::Image* image;
        BlockPosition* blockPosition;
        GrafikObject* nextObject;
    public:
        GrafikObject(unsigned int id,
                    RAYLIB_H::Image* image,
                    BlockPosition* blockPosition,
                    GrafikObject* grafikObject); 
        GrafikObject(unsigned int id,
                    RAYLIB_H::Image* image,
                    BlockPosition* blockPosition);   
};

#endif 