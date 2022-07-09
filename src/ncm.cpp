#include <dirent.h>
#include <iostream>
#include <filesystem>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "config.h" // ha ha I made a config file

using std::filesystem::directory_iterator;

int main() 
{
    initscr();
    DIR *d;
    struct dirent *dir;
    // d = opendir(conf::path);
    std::string path = conf::path;
    for(const auto & file : directory_iterator(path))
        printw("%s\n", file.path());
    /*
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printw("%s\n", dir->d_name);
            refresh();
        }
        closedir(d);
    }
    else
    {
            printw("Failed to find directory?\n");
    }
    */
    char ch = getch();
    endwin();
    return 0;
}
