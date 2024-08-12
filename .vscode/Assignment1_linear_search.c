#include<stdio.h>

void main()
{       
        int n,num,i,flag;
         printf("\nenter the size of array\n");
         scanf("%d",&n);
         printf("Enter the number you want to search\n");
         scanf("%d",&num);
         int arr[n];
         printf("Enter The Elements Of arrya\n");
         for ( i = 0; i < n; i++)
         {
            scanf("%d",&arr[i]);
         }

         i=0;
         flag=0;
       
         for ( i = 0; i <n; i++)
         {
           if( arr[i]==num)
             {flag=1;
             goto step7;}

         }

         step7:
               if (flag==1)
               {
                printf("required number is found at location %d\n",i+1);
               }
               else
                printf("required data not found\n");

            
            
         
         
         










}