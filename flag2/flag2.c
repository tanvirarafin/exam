#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]){
    char buf[100];
    strcpy(buf, argv[1]);
    printf("The second flag is %s%lu\n", buf, strlen(buf));
}
