#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    int m =(int)x;
    if(m>90){
        m=m-32;
    }

    int i, j, k, temp=m-1, p, q=2;
    for(i=0; i<=m-65; i++)
    {
        for(j=65; j<=temp; j++){
            printf("%c", j);
        }
        if(i==0){
            printf("%c", m);
        }else{
            printf(" ");
        }
        if(i>1){
            for(p=0; p<q; p++){
                printf(" ");
            }
            q+=2;
        }
        for(k=temp; k>=65; k--){
            printf("%c", k);
        }
        printf("\n");
        if(i!=0){
            temp--;
        }


    }
    return 0;
}

