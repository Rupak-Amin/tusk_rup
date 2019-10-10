#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int choice,choose;
   printf("what's your number ?\n1. Decimal \n2. Binary \n3. Octal \n4. Hexa-Decimal\n");
   printf("Enter your choice : ");
   scanf("%d",&choice);


     if(choice==1){
        printf("Your choice is Decimal.\nNow select your convert option\n");
        printf("1. Binary \n2. Octal \n3. Hexa-Decimal\n");
        printf("Enter your choice : ");
        scanf("%d",&choose);


        if(choose==1){
                        printf("\n You want to convert Decimal to Binary Number\n ");
                        int array[10],num,i;
        printf("Enter the number to convert: ");
        scanf("%d",&num);
             for(i=0;num>0;i++){
                array[i]=num%2;
                num=num/2;
        }
        printf("\n Binary of Given Number is=");
        for(i=i-1;i>=0;i--){
                printf("%d",array[i]);
        }


        }else if (choose==2){
                        printf("\n You want to convert Decimal to Octal Number\n ");
                        int array2[10],num2,i2;
        printf("Enter the number to convert: ");
        scanf("%d",&num2);
             for(i2=0;num2>0;i2++){
                array2[i2]=num2%8;
                num2=num2/8;
        }
        printf("\n Octal of Given Number is=");
        for(i2=i2-1;i2>=0;i2--){
                printf("%d",array2[i2]);
        }
                   }



        else if (choose==3){
                        printf("\n You want to convert Decimal to Hexa-Decimal Number\n ");

                        int num3;
        printf("Enter the number to convert : ");
        scanf("%d",&num3);

                        printf("\n Hexa-Decimal number is = %x",num3);



        }else{
           printf("Please try again. \n Your choice is wrong \n");
      }





     }else if (choice==2){
        printf("Your choice is Binary.\nNow select your convert option\n");
        printf("1. Decimal \n2. Octal \n3. Hexa-Decimal\n");
        printf("Enter your choice : ");
        scanf("%d",&choose);


        if(choose==1){
                        printf("\n You want to convert Binary to Decimal Number\n ");
                       long int num4,i4,x=0,a;
        printf("Enter the number to convert: ");
        scanf("%ld",&num4);

        for(i4=0;num4!=0;++i4)
        {
                a=num4%10;
                x=(a)*(pow(2,i4))+x;
                num4=num4/10;
        }
        printf("\nDecimal number is : %ld ",x);
       }



       else if(choose==2){
                        printf("\n You want to convert Binary to Octal Number \n");
                        long int bnum ,onum = 0,i5 = 1,r;
        printf("Enter the value to convert : ");
        scanf("%ld",&bnum);

        while(bnum != 0){
                r = bnum % 10;
                onum=onum+r*i5;
                i5=i5*2;
                bnum = bnum / 10;
        }
        printf("Octal number is : %lo",onum);

       }


        else if(choose==3){
                        printf("\n You want to convert Binary to Hexa-Decimal Number \n");
                        long int bnum ,hnum = 0,i6 = 1,r2;
        printf("Enter the value to convert : ");
        scanf("%ld",&bnum);

        while(bnum != 0){
                r2 = bnum % 10;
                hnum=hnum+r2*i6;
                i6=i6*2;
                bnum = bnum / 10;
        }
        printf("Hexa-Decimal number is : %lX  ",hnum);



       }else{
           printf("Please try again. \n Your choice is wrong \n");
      }





    }else if (choice==3){
        printf("Your choice is Octal.\nNow select your convert option\n");
        printf("1. Decimal \n2. Binary \n3. Hexa-Decimal\n");
        printf("Enter your choice : ");
        scanf("%d",&choose);


        if(choose==1){
                        printf("\n You want to convert Octal to Decimal Number\n ");
                       int num7,i7,x7=0,a7;
        printf("Enter the number to convert: ");
        scanf("%d",&num7);

        for(i7=0;num7!=0;++i7)
        {
                a7=num7%10;
                x7=(a7)*(pow(8,i7))+x7;
                num7=num7/10;

        }
        printf("\nDecimal number is : %d ",x7);




       }else if(choose==2){
                        printf("\n You want to convert Octal to Binary Number\n ");
          long int num8,I8,x8=0,a8;
        printf("Enter the number to convert: ");
        scanf("%ld",&num8);

        for(I8=0;num8!=0;++I8)
        {
                a8=num8%10;
                x8=(a8)*(pow(8,I8))+x8;
                num8=num8/10;

        }
         int array8[10],i8;

             for(i8=0;x8>0;i8++){
                array8[i8]=x8%2;
                x8=x8/2;
        }
        printf("\n Binary of Given Number is=");
        for(i8=i8-1;i8>=0;i8--){
                printf("%d",array8[i8]);
        }
                        }



         else if(choose==3){
                        printf("\n You want to convert Octal to Hexa-Decimal Number\n ");

            int num9,x9=0,a9,i9=0;
            printf("Enter The number to convert : ");
            scanf("%d",&num9);

            while(num9!=0){
                a9=num9%10;
                x9=(a9)*(pow(8,i9))+x9;
                num9=num9/10;
                ++i9;
            }
          printf("Hexa-Decimal number is = %x\n",x9);




          }else{
           printf("Please try again. \n Your choice is wrong \n");
          }






    }else if (choice==4){
        printf("Your choice is Hexa-Decimal.\nNow select your convert option\n");
        printf("1. Decimal \n2. Binary \n3. Octal\n");
        printf("Enter your choice : ");
        scanf("%d",&choose);



        if(choose==1){
                printf("You want to convert Hexa-Decimal to Decimal \n");

                int num10;
                printf("Enter the number to convert : ");
                scanf("%x",&num10);

                printf("Decimal number is = %d\n",num10);




        }else if (choose==2){
                printf("You want to convert Hexa-Decimal to Binary \n");

                long int num11,x11=0,i11=0,array11[10];
                printf("Enter the number to convert : ");
                scanf("%x",&num11);

                while(num11!=0){
                        array11[i11]=num11%2;
                        num11=num11/2;
                        i11++;
                }
                 printf("\n Binary of Given Number is=");
                 for(i11=i11-1;i11>=0;i11--){
                 printf("%ld",array11[i11]);
                }



        }else if (choose==3){
                printf("You want to convert Hexa-Decimal to Octal \n");

                int num12;
                printf("Enter The number to convert : ");
                scanf("%x",&num12);

                printf("Octal number is = %o\n",num12);



        }else{
           printf("Please try again. \n Your choice is wrong \n");
             }






      }else{
           printf("Please try again. \n Your choice is wrong \n");
      }






    return 0;
}
