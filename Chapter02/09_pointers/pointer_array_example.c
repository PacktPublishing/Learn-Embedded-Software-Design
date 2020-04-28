//Pointer
//-------
/* What are pointers and why are they important?
   Ans: A pointer is an address that points to data. Pointers are important because they allow us to
    pass large amounts of data with a single 32-bit entity.

*/
#include <stdio.h>

#define ARRAY_SIZE(a)  sizeof (a) /sizeof(*a)

/* Toggle the macro value down below 0 is to disable and 1 is to enable
    by default it is disabled
*/
#define ARRAY_NOTION 0
#define WRONG_PTR_INCREMENT 0

void increment(int *cpt){
   (*cpt)= (*cpt)+1; // read, modify, write to original data
}

void p_array() {
	int a[] = {1, 2, 3, 4};
	int *p = a;

#if ARRAY_NOTION
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
#endif

	int i;
	for (i = 0; i < ARRAY_SIZE(a); i++ )
		printf("%d \n", *(p+i));
}

int main() {
	int count;
	int *cpt;  //integer pointer
	cpt = &count;

	*cpt =  25;
	int a = *cpt;  	// assign the pointer to another varaible
	a = 20;
	printf("ptr:%d %d\n", *cpt, a);


   // Below three instructions peformes identical task, incrementing the variable by +1
   *cpt = *cpt + 1;
   *cpt += 1;
   (*cpt)++;

	printf("Ptr:%d %d\n", *cpt, a);


    /* INFO: *cpt++ != (*cpt)++;.  *cpt++ This operation will not increment Count.
        Rather, it fetches Count and increments the pointer
        Below statement is just for example to learn the difference
    */
    #if WRONG_PTR_INCREMENT
        printf("ptr:%d \n", *cpt);
    #else

	p_array();

	return 0;
}
