This is a README for our collaborative project. THe project will be done in these steps:
1. we have to have a file to handle our prototypes. Will call ours our_header.h
2. we have to have a file with the implementation of the functions, your main.c but will call ours our_functions.c
3. the third file has to have our function definitions. The compilation will only be possible when these files are linked by referencing "our_header.h" within our_functions.c 
4. while we have the prototype for printf, we need to add our own definition of printf sow ill have a prottype int our_printf(const char *format, ... ). It follows therefore that our_header.h will have this prototype!
5. The tricky part is having to handle the different format specifiers within our_printf fuction, but it can be done, one case at a time!
6. Luleko and Willard
