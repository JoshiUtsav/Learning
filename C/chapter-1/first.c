#include <stdio.h>

void log_message(char *name, int *age, int *_what);

void main()
{
    char _name[] = "Utsav";
    int age = 18;
    int _what = 97;

    log_message(_name, age, _what);
}

void log_message(char *name, int *age, int *_what)
{
    printf("Name: %s\n", name);
    printf("Age: %s\n", age);
    printf("_What: %s\n", _what);
}
