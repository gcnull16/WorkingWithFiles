#include <stdio.h>
#include <stdlib.h>


void writetofile(void);
void readfile(void);

int main()
{
    writetofile();
    readFile();
    return 0;
}


void writetofile()
{
    FILE *pFile;

    //Attempt to open the file with write capacity(permission to write to file without affecting data).
    pFile = fopen ("C:\\NullFile\\something.txt", "w");//fopen is function that points to pointer file and opens
    if ( pFile == NULL )
    {
        printf("Unable to open/write file.");
    }
    else
    {
        printf("Enter an integer: ");
        int num;
        scanf("%d", &num);

        fprintf(pFile, "%d", num); //access data type and opens file
        fclose(pFile);

    }



}

readFile()
{
    int num; //store contents of file which will be a #

    FILE *ptrFile;

    ptrFile = fopen("C:\\NullFile\\something.txt", "r");

    if (ptrFile == NULL)
    {
       printf("Unable to open/write file.");
    }
    else
    {

       fscanf(ptrFile, "%d", &num);

       printf("Contents of the file: %d", num);

       fclose(ptrFile);

    }
}
