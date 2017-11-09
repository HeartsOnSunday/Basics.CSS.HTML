#include <studio.h>
#include <cs50.h>

int main (void) {
    
    int height = -1;
    
    while (height < 0 || height > 23) {
        printf("Enter height between 0 - 23:");
        height = get_int();
}