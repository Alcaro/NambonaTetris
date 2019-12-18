#include <Global.h>
#pragma once

extern float fallTimer;
extern float fallWait;

int PieceInit();

int PieceDrop();

int PieceWait();

int PieceRotate(bool cw);

int PieceMove(bool dir);