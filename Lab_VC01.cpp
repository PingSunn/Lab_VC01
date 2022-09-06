#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void subFunc1(void);

int main() {
    printf("\n Message in Function Main");
    subFunc1();
    printf("\n Returned to Function Main \n ");
    system("Pause...");
}

void subFunc1(void) {
    printf("\n Message from Subfunction \n");
    return;
}
