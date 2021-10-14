#include <stdio.h>

void main()
{
    int j,m,a,nbj,test;
    do
    {
        printf("Donnez l annee:");
        scanf("%d",&a);
    } while(a<=0);
    do
    {
        printf("Donnez le mois:");
        scanf("%d",&m);
    } while((m<=0)||(m>12));
    test=0;
        do
        {
         printf("Donnez le jour:");
         scanf("%d",&j);
        if(((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)))
                 test=(j>0)&&(j<32);
       else
       {
        if(((m==4)||(m==6)||(m==9)||(m==11)))
           test=(j>0)&&(j<31);
           else
            {
            if(m==2)
             {
                 if(a%4==0)
                {
                    test=(j>0)&&(j<30);
                }
                else
                {
                    test=(j>0)&&(j<29);
                }
             }
            }
         }
        } while(test==0);
    printf("La date est:%d/%d/%d\n",j,m,a);
    test=0;
    do
    {
        printf("Donnez nbj:");
        scanf("%d",&nbj);
    } while(nbj<0);
    j+=nbj;
    do
    {
    if((((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))&&(j>31)))
    {
        m++;
        j=j-31;
        if(m==13)
        {
            a++;
            m=1;
        }
        if(j<=31) test++;
    }
    else
    {
        if((((m==4)||(m==6)||(m==9)||(m==11))&&(j>30)))
        {
            m++;
            j=j-30;
            if(j<=30) test++;
        }
        else
        {
            if((m==2)&&(j>29))
               {
                   m++;
                   j=j-29;
                   if(j<=29) test++;
               }
               else
                {
                    if((m==2)&&(j>28))
                    {
                    m++;
                    j=j-28;
                    if(j<=28) test++;
                    }
                    else test++;
                }
        }
    }
    }while(test<=1);
    printf("La nouvelle date est:%d/%d/%d",j,m,a);
}
