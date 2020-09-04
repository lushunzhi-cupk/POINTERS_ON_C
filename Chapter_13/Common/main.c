
#include "Common.h"

int main(){
    int i;
    int *pi;
    int **ppi;
    i=10;;
    ppi=&pi;
    *ppi=&i;
    printf("%d",**ppi);
return 0;
}
