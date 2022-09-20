#include <stdio.h>
void main(){
    FILE *fp;
    char name[100];

    fp = fopen("Week7_1.txt", "w");
        if(fp==NULL)
        printf("Cant open this file\n");

    printf("Enter the string to write in to the file\n");
    gets(name);

    fputs(name, fp);
    printf("Write into the file succeeded");

    fclose(fp);


}