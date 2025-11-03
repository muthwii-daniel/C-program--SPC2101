

#include <stdio.h>
int main (){

char book_title [100];
    FILE*fptr;
    char ch;
    
fptr =fopen("c:\\users\\local_library\\Desktop\\borrowed_book.txt", "a+");
    printf ("Enter the book title:\n");
    scanf ("%[^\n]",&book_title);

fprintf (fptr,"librarian entered the book title:%s\n",book_title);

    rewind (fptr);
         while ( (ch=fgetc (fptr)) !=EOF){
     putchar (ch);}
 
 fclose (fptr);
     printf (" borrowed book titlehas been recorded in the borrowed_book.txt \n");
     
     if (fptr == NULL) {
    printf("Error opening file!\n");
    return 1;
}

return 0;
}