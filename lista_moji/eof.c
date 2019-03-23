#include <stdio.h>

int main(){
    int i = 0;
    int in;

    do
    {
        in = scanf("%d", &in);
        i++;
    } while (in != EOF);
    
    printf("%d\n", i-1);

    return 0;
}