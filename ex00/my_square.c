#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void putchar_c(char c) {
    write(1, &c, 1);
}

void my_square(int x,int y){
    int i=0;
    int j;
    while(i<y){
        j=0;
        while(j<x){
            if(i==0 || i== y-1){
                if(j==0 || j== x-1){
                    putchar_c('o');
                }else{
                    putchar_c('-');
                }
            }
            else{
                if(j==0 || j== x-1){
                    putchar_c('|');
                }else{
                    putchar_c(' ');
                }
            }
            j++;
        }
        putchar_c('\n');
        i++;
    };
};

int main(int ac, char **av){
    if(ac != 3){
        return (0);
    }
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    if(x>0 && y>0){
        my_square(x, y);
    }
    return 0;
};