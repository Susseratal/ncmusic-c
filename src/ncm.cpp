#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "config.h" // I made a config file

int main()
{
    initscr();
    DIR *d;
    struct dirent *dir;
    d = opendir(conf::path);
    printw("Hello, World!");
    refresh();
    char ch = getch();
    endwin();
    return 0;
    /*
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    else
    {
            printf("Failed to find directory?\n");
    }
    */
}
