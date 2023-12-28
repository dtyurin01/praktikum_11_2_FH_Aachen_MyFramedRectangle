//
// Created by dtyur on 27.12.2023.
//

#ifndef PRAKTIKUM_11_2_FH_AACHEN_MYFRAMEDRECTANGLE_MYFRAMEDRECTANGLE_H
#define PRAKTIKUM_11_2_FH_AACHEN_MYFRAMEDRECTANGLE_MYFRAMEDRECTANGLE_H
#include "MyRectangle.h"
#include "MyCanvas.h"

class MyFramedRectangle: public MyRectangle{
public:
    MyFramedRectangle(MyCanvas &canvas, unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2): MyRectangle(canvas, x1,y1,x2,y2){};
    void draw() override;

};


#endif //PRAKTIKUM_11_2_FH_AACHEN_MYFRAMEDRECTANGLE_MYFRAMEDRECTANGLE_H
