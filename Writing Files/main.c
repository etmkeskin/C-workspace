#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];

    FILE * fpointer = fopen("employees.txt", "r"); /*
    Name of the file, w for write(overwrites), a for append, r for read
    "employees.txt", "w"  becomes "employees.txt", "a" to append. "employees.txt", "r" to read the file */

    /*fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fprintf(fpointer, "\nKelly, Customer Service"); */

    /*Reading the file*/
    fgets(line, 255, fpointer); /*Reads the first line of the file and then stores the reading in the char array(line)*/
    fgets(line, 255, fpointer); /*Reads the second line*/

    printf("%s", line);






    fclose(fpointer); /*When you open a file and then you need to close it*/
    return 0;
}
