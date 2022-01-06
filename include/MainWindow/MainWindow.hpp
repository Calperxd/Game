#pragma once
#include <iostream>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>

class MainWindow
{
private:
    unsigned short int height;
    unsigned short int width; 
public:
    MainWindow();
    MainWindow(unsigned int WindowWidth, unsigned int WindowHeight);
    ~MainWindow();
    bool main_window_start(void);
};