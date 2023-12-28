//
// Created by dtyur on 15.12.2023.
//

#ifndef PRAKTIKUM_10_2_FH_AACHEN_MYRECTANGLE_MYRECHTANGLE_H
#define PRAKTIKUM_10_2_FH_AACHEN_MYRECTANGLE_MYRECHTANGLE_H
#import "MyCanvas.h"

class MyRectangle{

private:
    unsigned int x1,x2,y1,y2;
    MyCanvas* canvas_ptr;
public:
    unsigned int get_x1() const { return x1; }
    void set_x1(unsigned int value) { x1 = value; }

    unsigned int get_y1() const { return y1; }
    void set_y1(unsigned int value) { y1 = value; }

    unsigned int get_x2() const { return x2; }
    void set_x2(unsigned int value) { x2 = value; }

    unsigned int get_y2() const { return y2; }
    void set_y2(unsigned int value) { y2 = value; }

    MyCanvas* get_canvas_ptr() const { return canvas_ptr; }
    void set_canvas_ptr(MyCanvas* ptr) { canvas_ptr = ptr; }

    MyRectangle operator*(unsigned int i) const;


    MyRectangle(MyCanvas &canvas, unsigned int x1_val, unsigned int y1_val, unsigned int x2_val, unsigned int y2_val):
            canvas_ptr(&canvas), x1(x1_val), y1(y1_val), x2(x2_val), y2(y2_val){}

    virtual void draw();

};


#endif //PRAKTIKUM_10_2_FH_AACHEN_MYRECTANGLE_MYRECHTANGLE_H
