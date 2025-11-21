#ifndef INNERBLOCKPOSITION_H
#define INNERBLOCKPOSITION_H

/**
 * The Point of coordinate Origin
 * is the Upper Left Corner of a Block
 * From Left to Right the x Values increase.
 * From Up to Down the y Values increase.
 */
class InnerBlockPosition{
private:
    float x;
    float y;
public:
    InnerBlockPosition(float xCoordinate, float yCoordinate);
};

#endif