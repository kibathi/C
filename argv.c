#include <stdio.h>
#include <stdlib.h>

/*When a program gets executed, the user can specify the space-separated strings called command-line arguments. 
These arguments are made available in the program’s main function and can be parsed as individual null-terminated strings. 
To access the arguments, we should include parameters as int argc, char *argv[],
 representing the number of arguments passed and the array of strings containing command-line arguments. 
 The first string in the array is the program name itself as per the convention; thus, 
 the number of arguments argc includes the program name. We can print every command-line argument 
 with simple iteration through argv array, as demonstrated in the following example.
*/

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    exit(EXIT_SUCCESS);
}