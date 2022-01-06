#include <iostream>
#include "MainWindow/MainWindow.hpp"



int main(int argc, char **argv)
{
    MainWindow mainwindow(400,400);
    
    mainwindow.main_window_start();



    std::cout << "FIM" << std::endl;
    return 0;
}