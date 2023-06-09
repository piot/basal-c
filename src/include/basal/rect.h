/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Peter Bjorklund. All rights reserved.
 *  Licensed under the MIT License. See LICENSE in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
#ifndef BL_RECT_H
#define BL_RECT_H

#include <stdbool.h>
#include <basal/vector2.h>
#include <basal/circle.h>
#include <basal/collision.h>

typedef struct BlRect {
    BlVector2 position;
    BlSize2 size;
} BlRect;

BlCollision blRectCircleIntersect(BlRect rectangle, BlCircle circle);

#endif

