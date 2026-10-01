#include <stdio.h>
#include <stdlib.h>
struct student
{
    int usn;
    char name[10];

};
int main()
{
    struct student s = {10,"global",3};
    struct student *p;
    p = &s;
    printf("\n usn =%d",p->usn);
    printf("\n name =%s",p->name);
    return 0;

}
