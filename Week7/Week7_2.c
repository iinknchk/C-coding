# include <stdio.h>
# include <string.h>
 
int main( )
{
 
    FILE *fp ;
    char name[100] = "Hello Computer-Engineering";
 
    fp = fopen("Week7_2.txt", "w") ;
    if ( fp == NULL )
    {
        printf( "Week7_2.txt file failed to open." ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
         
        if ( strlen ( name ) > 0 )
        {
             
            fputs(name, fp) ;
            fputs("\n", fp) ;
        }
         
        fclose(fp) ;
         
        printf("Data successfully written in file Week7_2.txt\n");
        printf("The file is now closed.") ;
    }
    return 0;       
}