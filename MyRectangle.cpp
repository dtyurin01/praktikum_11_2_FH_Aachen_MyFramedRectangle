//
// Created by dtyur on 15.12.2023.
//

#include "MyRectangle.h"
#include "MyCanvas.h"

void MyRectangle::draw(){
    if (canvas_ptr != nullptr) {
        canvas_ptr->draw_rectangle(x1, y1, x2, y2);
    }
}

MyRectangle MyRectangle::operator*(unsigned int i) const {
    unsigned int new_width = (x2-x1)*i;
    unsigned int new_height = (y2-y1)*i;

    return MyRectangle(*canvas_ptr, x1,y1,x1+new_width,y1+new_height);

}