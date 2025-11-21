#ifndef WORLDPOSITION_H
#define WORLDPOSITION_H

/**
 * The Point of coordinate origin is
 * the Bottom Left Corner of the Block
 * with the Position of x = 0 and y = 0
 * One Unit in Worldposition stants for one Pixel.
 */
class WorldPosition{
private:
    int x;
    int y;
public:
    WorldPosition(int xCoordinate, int yCoordiante);
};

#endif