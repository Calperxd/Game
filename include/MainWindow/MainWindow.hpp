#pragma once
#include <iostream>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>

class MainWindow
{
private:
    static unsigned short int height;
    static unsigned short int width; 
public:
    MainWindow();
    ~MainWindow();
    int main_window_start(void);
};