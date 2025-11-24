#ifndef BLOCKPOSITION_H
#define BLOCKPSOITION_H

/**
 * The Point of coordinate origin
 * Map origin is the Block with the Position
 * x = 0 and y = 0;
 */
class BlockPosition{
private:
    int x;
    int y;

public:
    BlockPosition(int xCoordinate, int yCoordinate);
    int getX();
    int getY();
    void setX(int newX);
    void setY(int newY);

};

#endif