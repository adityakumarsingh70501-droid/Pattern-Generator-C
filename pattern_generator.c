#include<stdio.h>

int main(){
    int i,j,n;
    int num=1;
    int choice;
    char again;
    do
    {
        printf("\n====PATTTERN GENERATOR====\n");
    printf("Select the pattern:\n1. pyramid \n2. butterfly\n3.diamond\n4. floyd's triangle\n");
    printf("Enter you choice:");
    scanf("%d",&choice);

    printf("Enter size:");
    scanf("%d",&n);

switch(choice)
{
case 1:
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }

        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    break;

case 2:
    for(i=1;i<=n;i++){

        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=2*(n-i);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=2*(n-i);j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    break;

case 3:
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }

        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    break;

    case 4:
    num=1;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                printf("%d",num);
                num++;
            }
            printf("\n");
        }
        break;
    }
    printf("\n Do you want to generate another pattern?:");
    scanf(" %c",&again);
    
    }while(again=='y'||again=='Y');
    return 0;    
    
}