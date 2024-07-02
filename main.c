#include <stdio.h>
#include <stdlib.h>

int main(){
int t[3];
float res;

do{
printf("\nEnter eating time for all three guest: \n");
for(int i = 0;i<3;i++){
    scanf("%d",&t[i]);
     while (t[i] <= 0 || t[i] >= 10000) {
            printf("Time must be > than 0 and < than 10000. Please re-enter: ");
            scanf("%d", &t[i]);
        }
}

res = (1.0 / t[0] + 1.0 / t[1] + 1.0 / t[2]);
res = 1.0 / res;

printf("\nThey ill eat cake in %0.1f hour(-s)",res);
}while(getchar() != 27);


return 0;

}
