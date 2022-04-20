#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Product{
    char productName [20];
    double productPrice;
    int productID;
}product;

typedef struct Order{
    char orderAddress[50];
    char productName[20];
}order;

int main()
{
    char choice[4];
    product product[10];
    order order[10];
    int i = 0;
    do{
            printf("Enter product %d : \n", i+1);
            printf("Product name: ");
            fflush (stdin);
            fgets(product[i].productName,sizeof(product[i].productName),stdin);
            printf("Product price: ");
            scanf("%lf", &product[i].productPrice);
            printf("Product id: ");
            scanf("%d", &product[i].productID);

            i++;

            printf("Want more products? [yes] or [END]: \n");
            scanf("%s", choice);
            if(!strcmp(choice,"END"))
            {
                break;
            }


        }while(1);

    int j = 0;

    do{
            printf("Enter order %d: \n", j+1);
            printf("Order address: ");
            fflush(stdin);
            fgets(order[j].orderAddress,sizeof(order[j].orderAddress),stdin);
            printf("Product name: ");
            fflush(stdin);
            fgets(order[j].productName,sizeof(order[j].productName),stdin);

            int flag=0;
            for(int n = 0; n<i; n++){
                if(!strcmp(order[j].productName,product[n].productName)){
                    flag=1;
                    break;
                }


                else{
                    flag=0;
                }
            }

            j++;

            if(flag==1)
            {
                printf("Order completed!\n");

            }
            else
            {
                printf("Order is on the wait list!\n");
            }

            printf("Want more orders? [yes] or [END]: \n");
            scanf("%s", choice);
            if(!strcmp(choice,"END"))
            {
                break;
            }

        }while(1);




    return 0;
}
