#include<stdio.h>

int main()
{
    int num[10] = {0};

    for(int i=0; i<=6; i++){
        scanf("%d", &num[i]);
    }

    for(int i=1; i<=6; i++){
        int count = 0;
        for(int j=0; j<10; j++){
            if(num[j]==i){
                count++;
            }
        }
        printf("%d : %d\n", i, count);
    }
    return 0;
}