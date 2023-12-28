#include <iostream>
#include "MyCanvas.h"

MyCanvas::MyCanvas(unsigned int x, unsigned int y) : size_x{x}, size_y{y} {
    canvas_array_ptr = new char[size_x * size_y];
    init();
}

void MyCanvas::init() {
    for (unsigned int i = 0; i < size_x * size_y; ++i) {
        canvas_array_ptr[i] = '.';
    }
}

MyCanvas::MyCanvas(const MyCanvas &other) : size_x(other.size_x), size_y(other.size_y) {
    canvas_array_ptr = new char[size_x * size_y];
    for (unsigned int i = 0; i < size_x * size_y; ++i) {
        canvas_array_ptr[i] = other.canvas_array_ptr[i];
    }
}

MyCanvas& MyCanvas::operator=(const MyCanvas &other) {
    if (this != &other) {
        delete[] canvas_array_ptr;
        size_x = other.size_x;
        size_y = other.size_y;
        canvas_array_ptr = new char[size_x * size_y];
        for (unsigned int i = 0; i < size_x * size_y; ++i) {
            canvas_array_ptr[i] = other.canvas_array_ptr[i];
        }
    }
    return *this;
}

void MyCanvas::set(unsigned int x, unsigned int y, char c) {
    if (x >= size_x || y >= size_y) {
        throw std::out_of_range("Ungueltige Position");
    }
    canvas_array_ptr[y * size_x + x] = c;
}

char MyCanvas::get(unsigned int x, unsigned int y) const {
    if (x >= size_x || y >= size_y) {
        throw std::out_of_range("Ungueltige Position");
    }
    return canvas_array_ptr[y * size_x + x];
}

void MyCanvas::draw_rectangle(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2) {
    for (unsigned int i = y1; i <= y2; ++i) {
        for (unsigned int j = x1; j <= x2; ++j) {
            set(j, i, '#');
        }
    }
}

std::string MyCanvas::to_string() const {
    std::string result;
    for (unsigned int y = 0; y < size_y; ++y) {
        for (unsigned int x = 0; x < size_x; ++x) {
            result += get(x, y);
        }
        result += '\n';
    }
    return result;
}

void MyCanvas::print() const {
    std::cout << to_string() << std::endl;
}

MyCanvas::~MyCanvas() {
    delete[] canvas_array_ptr;
}
