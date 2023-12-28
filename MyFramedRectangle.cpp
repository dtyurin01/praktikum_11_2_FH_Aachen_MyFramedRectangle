//
// Created by dtyur on 27.12.2023.
//
#include "MyFramedRectangle.h"
#include "MyCanvas.h"


void MyFramedRectangle::draw() {
    MyRectangle::draw();

    if(get_canvas_ptr() != nullptr){
        unsigned int innerWidth = get_x2() - get_x1();
        unsigned int innerHeight = get_y2() - get_y1();

        MyCanvas *canvas = get_canvas_ptr();

        for (int i = get_x1(); i <= get_x2(); ++i) {
            canvas->set(i, get_y1(), '+');
            canvas->set(i, get_y2(), '+');
        }
        for (int i = get_y1(); i <= get_y2() ; ++i) {
            canvas->set(get_x1(),i,'+');
            canvas->set(get_x2(), i ,'+');
        }
    }
}


    // Keine eigenen Attribute, daher kein spezieller Initialisierungscode erforderlich
