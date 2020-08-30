#include<iostream>
#include<stdlib.h>

 int main()
 {
     int *p= (int *)malloc(sizeof(int));
     // delete p; is not proper.
     free(p);

     int *q = new int(7);
     // free(q); is not proper.
     delete q;

     int *r=NULL;
     //Both are correct
     delete r;
     free(r);
     return 0;
 }
