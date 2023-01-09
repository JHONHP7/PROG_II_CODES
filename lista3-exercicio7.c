#include <stdio.h>
#include <stdlib.h>


int main(){
    int *pti;
    int veti[]={10,7,2,6,3};
    pti = veti;
    printf("%d\n", *pti);
    printf("%d\n", *(pti+2));
    printf("%d\n", pti[4]);
    printf("%d ", pti[1]);
    printf("A letra d eh a errada pois so iria dar 10 se fosse pti[0]\n");
    printf("%d\n", *(veti+3));
    return 0;
}
