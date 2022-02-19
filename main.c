#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    DIR *d;
    struct dirent *dir;
    d = opendir("/home/iain/Music/");
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
    return 0;
}
