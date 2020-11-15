#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(c)
{
    write(1,&c,1);
}

int my_printf(const char *str){
    int i;
    i = 0;
    while(str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    my_putchar('\0');
    return 0;
}

int my_strlen(const char *str){
    int i;
    i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}


int main(){
    my_printf("salut\n");
    my_putchar('\n');
    my_putchar('a');
    return 0;
}
