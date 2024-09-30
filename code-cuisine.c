//JAI SHREE RAM
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct totalbill
{

  struct beverage
   {
    int itnb[10],itqb[10],itprb[10];
    float bebil;
   }bb;

  struct chinese
   {
    int itnc[10],itqc[10],itprc[10];
    float chbil[4];
   }ch;

  struct italian
   {
    int itni[10],itqi[10],itpri[10];
    float itbil[4];
   }it;

   struct indian_punjabi
   {
    int itnip[10],itqip[10],itprip[10];
    float ipbil[4];
   }ip;

  struct indian_Rajasthan
   {
    int itnir[10],itqir[10],itprir[10];
    float irbil[4];
   }ir;

  struct indian_Gujarati
   {
    int itnig[10],itqig[10],itprig[10];
    float igbil[4];
   }ig;

  struct Mexican
   {
    int itnm[10],itqm[10],itprm[10];
    float mxbil[4];
   }mx;

   struct Seafood
   {
    int itns[10],itqs[10],itprs[10];
    float sfbil;
   }sf;

   struct Japanese
   {
    int itnj[10],itqj[10],itprj[10];
    float jpbil[4];
   }jp;
}tb;


    int bev[]={30,40,45,50,70,100,120,150};
    int chs[]={70,70,80,90,100},chm[]={150,170,180,190,240,100},chd[]={200,215,275,310,350,400};
    int is[]={200,200,300,300,310,400},im[]={150,170,180,190,240,250,250,300,350,450,500,100},id[]={300,310,320,325,370,400,410,430,470,500};
    int ips[]={70,90,100,120,150},ipm[]={90,110,130,170,180,200,250,150,300,300,15,20,50},ipd[]={40,100,110,140,180};
    int irs[]={25,30,35,40,60,70,100,110},irm[]={190,200,250,250,500,40,40,20,50,10},ird[]={100,110,130,170,250,300};
    int igs[]={25,25,30,35,40,45,50,90},igm[]={70,150,170,180,200,210,220,270,280,40,20,50,10},igd[]={50,100,110,140,180,190,200,210,220,230,250,260,270,280,300};
    int ms[]={70,90,100,120,150},mm[]={100,110,130,170,180,200,250,150,300,300,200,210,230,250,270,300,310,320,330,100},md[]={50,80,100,120,130,150};
    int sf[]={100,125,175,200,225,250,260,265,270,270,275,280,300};
    int js[]={70,100,90,150,200,100,150,200,450,500},jm[]={70,100,90,150,200,350,400,450,800,850,100},jd[]={70,100,150,150,200};

int bill(int,int);

void main()
{
    int i,a,b,c,d,e,f,g,h,j,k,n,q,ch,o;
    float sb[7];
    float bil=0;
    char p[5];//password
    char nm[50],phn[10];
    float total_bill=0;

   for(i=1;i<=3;i++)
   {
      system("CLS");
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER PASSWORD(of 4 letters)     ");
      scanf("%s",&p);

      if(strcmp(p,"STTM")==0)
       {
         system("CLS");
          break;
       }
      else
        {
         if(i==3)
         {
          printf("\n\n\t\t\t\tTRY AFTER 10 MIN");
          exit(1);
         }
         else
         {
            printf("\n\t\t\t\tIncorrect Password\n\t\t\t\t(Press Enter To Continue)");
            printf("\n\t\t\t\tOnly %d chances left",3-i);
            getch();
         }
       }
     }

        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t--------------------------------------------------------------------------------");
        printf("\n\t\t\t\t\t\t--------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t\t\t\t\t    WELCOME TO 7 SEAS RESTAURANT\n\n");
        printf("\t\t\t\t\t\t--------------------------------------------------------------------------------");
        printf("\n\t\t\t\t\t\t--------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t\t\t\t\t     (Press Enter To Continue)");
        getch();
         while(1)
      {
         system("CLS");
         printf("\t\t----------------------------------------------------------------------------------------------------------------------------------");
         printf("\n\t\t\t\t\t\t\t\t\t\tCUISINE\n");
         printf("\t\t----------------------------------------------------------------------------------------------------------------------------------");
         printf("\n\t\t\t\t\t\t\t\t  1. BEVERAGES");
         printf("\n\t\t\t\t\t\t\t\t  2. CHINESE");
         printf("\n\t\t\t\t\t\t\t\t  3. ITALIAN");
         printf("\n\t\t\t\t\t\t\t\t  4. INDIAN");
         printf("\n\t\t\t\t\t\t\t\t  5. MEXICAN");
         printf("\n\t\t\t\t\t\t\t\t  6. SEAFOOD");
         printf("\n\t\t\t\t\t\t\t\t  7. JAPANESE\n");
         printf("\t\t----------------------------------------------------------------------------------------------------------------------------------\n");
         printf("\n\t\t\t\t\t\t\t\t  __________________");
         printf("\n\t\t\t\t\t\t\t\t | Press 8.for BILL |");
         printf("\n\t\t\t\t\t\t\t\t | Press 9.for BACK |");
         printf("\n\t\t\t\t\t\t\t\t |__________________|\n");
         printf("\n\t\t----------------------------------------------------------------------------------------------------------------------------------");
         printf("\n\t\t----------------------------------------------------------------------------------------------------------------------------------");
         printf("\n\n\n\t\t\t\t\t\t\t\tEnter choice:  ");
         scanf("%d",&i);
         system("CLS");

         switch(i)
         {
             case 1:  o=0;
                                   printf("\n\t\t\t\t\t\t\t\t\t BEVERAGES\n\n");
                                   printf("\t\t\t\t\t\t\t__________________________________________\n");
                                   printf("\t\t\t\t\t\t\t|Beverages                   |Price(Rs.) |\n");
                                   printf("\t\t\t\t\t\t\t|----------------------------|-----------|\n");
                                   printf("\t\t\t\t\t\t\t|1.Tea                       | 30        |\n");
                                   printf("\t\t\t\t\t\t\t|2.Soda                      | 40        |\n");
                                   printf("\t\t\t\t\t\t\t|3.Mineral water             | 45        |\n");
                                   printf("\t\t\t\t\t\t\t|4.Lemonade                  | 50        |\n");
                                   printf("\t\t\t\t\t\t\t|5.orange Juice              | 100       |\n");
                                   printf("\t\t\t\t\t\t\t|6.Apple  Juice              | 120       |\n");
                                   printf("\t\t\t\t\t\t\t|7.Hot chocolate             | 150       |\n");
                                   printf("\t\t\t\t\t\t\t|____________________________|___________|\n");
                            while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t    __________________________________");
                            printf("\n\t\t\t\t\t\t\t   | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t   | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2)break;
                            if(k==1)
                            {
                               printf("\n\n\t(PRESS 0 TO STOP)\n");

                               while(1)
                                {

                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.bb.itnb[o]);
                                            if(tb.bb.itnb[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.bb.itqb[o]);
                                            tb.bb.itprb[o]=bill(bev[tb.bb.itnb[o]-1],tb.bb.itqb[o]);
                                            tb.bb.bebil=tb.bb.bebil+tb.bb.itprb[o];
                                            o++;
                                }
                                o++;
                            }
                          }

                          break;

            case 2 : o=0;
                while(1)
                    {
                        system("CLS");
                        printf("\n\t\t\t\t\t\t\t\t\t  CHINESE\n");
                        printf("\n\t\t\t\t\t\t\t    __________________________________");
                        printf("\n\t\t\t\t\t\t\t   | Press 1.for     STARTER          |");
                        printf("\n\t\t\t\t\t\t\t   | Press 2.for    MAIN COURSE       |");
                        printf("\n\t\t\t\t\t\t\t   | Press 3.for      DESSERT         |");
                        printf("\n\t\t\t\t\t\t\t   | Press 4.for       BACK           |");
                        printf("\n\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                        scanf("%d",&b);
                        fflush(stdin);
                        system("CLS");
                switch(b)
                {
            case 1:            system("CLS");
                               printf ("\n\t\t\t\t\t\t\t\t\t     STARTER\n\n");
                               printf("\t\t\t\t\t\t\t____________________________________________________\n");
                               printf("\t\t\t\t\t\t\t|         Starter                     | Price(Rs.) |\n");
                               printf("\t\t\t\t\t\t\t|-------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t|1. Spring Rolls                      |  70        |\n");
                               printf("\t\t\t\t\t\t\t|2. Manchurians                       |  70        |\n");
                               printf("\t\t\t\t\t\t\t|3. Chilli Potato                     |  80        |\n");
                               printf("\t\t\t\t\t\t\t|4. Chowmein                          |  90        |\n");
                               printf("\t\t\t\t\t\t\t|5. Hakka Noodles                     |  100       |\n");
                               printf("\t\t\t\t\t\t\t|_____________________________________|____________|\n\n");
               while(1)
                            {
                                  printf("\n\t\t\t\t\t\t\t      __________________________________");
                                  printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                                  printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                                  printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                                  scanf("%d",&k);
                                  if(k==2) break;
                                  fflush(stdin);
                                  if(k==1)
                                   {
                                      printf("\n\n\t(PRESS 0 TO STOP)\n");

                                      while(1)
                                        {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ch.itnc[o]);
                                            if(tb.ch.itnc[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ch.itqc[o]);
                                            tb.ch.itprc[o]=bill(chs[tb.ch.itnc[o]-1],tb.ch.itqc[o]);
                                            tb.ch.chbil[0]=tb.ch.chbil[0]+tb.ch.itprc[o];
                                            o++;
                                       }
                                       o++;
                                    }
                               }
                               break;
                case 2:        printf ("\n\t\t\t\t\t\t\t\t\t\t  MAIN COURSE\n\n");
                               printf("\t\t\t\t\t\t\t\t_______________________________________________ \n");
                               printf("\t\t\t\t\t\t\t\t|           Main Course           | Price(Rs.) |\n");
                               printf("\t\t\t\t\t\t\t\t|---------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t\t|1. Iceberg Dumpling              |      150   |\n");
                               printf("\t\t\t\t\t\t\t\t|2. Stuffed Eggplant              |      170   |\n");
                               printf("\t\t\t\t\t\t\t\t|3. Chilli Baby Corn              |      180   |\n");
                               printf("\t\t\t\t\t\t\t\t|4. Shiitake Fried Rice           |      190   |\n");
                               printf("\t\t\t\t\t\t\t\t|5. Kung Pao                      |      240   |\n");
                               printf("\t\t\t\t\t\t\t\t|______________________________________________|\n\n");
                                while(1)
                                  {
                                  printf("\n\t\t\t\t\t\t\t\t       __________________________________");
                                  printf("\n\t\t\t\t\t\t\t\t      | Press 1.for ENTERING YOUR CHOICE |");
                                  printf("\n\t\t\t\t\t\t\t\t      | Press 2.for       BACK           |");
                                  printf("\n\t\t\t\t\t\t\t\t      |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                                    scanf("%d",&k);
                                    if(k==2) break;
                                    fflush(stdin);
                                    if(k==1)
                                      {
                                          printf("\n\n\t(PRESS 0 TO STOP)\n");
                                          while(1)
                                           {

                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ch.itnc[o]);
                                            if(tb.ch.itnc[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ch.itqc[o]);
                                            tb.ch.itprc[o]=bill(chm[tb.ch.itnc[o]-1],tb.ch.itqc[o]);
                                            tb.ch.chbil[1]=tb.ch.chbil[1]+tb.ch.itprc[o];
                                            o++;
                                          }
                                        o++;
                                       }
                             }
                            break;

            case 3:   printf("\n\t\t\t\t\t\t\t\t\t     DESSERTS\n\n");
                      printf("\t\t\t\t\t\t\t  ________________________________________ \n");
                      printf("\t\t\t\t\t\t\t  |          Desserts          |Price(Rs.)|\n");
                      printf("\t\t\t\t\t\t\t  |---------------------------------------|\n");
                      printf("\t\t\t\t\t\t\t  |1.Mooncake                  | 200      |\n");
                      printf("\t\t\t\t\t\t\t  |2.Tangyuan                  | 215      |\n");
                      printf("\t\t\t\t\t\t\t  |3.Nian gao                  | 275      |\n");
                      printf("\t\t\t\t\t\t\t  |4.Fa gao                    | 310      |\n");
                      printf("\t\t\t\t\t\t\t  |5.Youtiao                   | 350      |\n");
                      printf("\t\t\t\t\t\t\t  |6.Snow skin mooncake        | 400      |\n");
                      printf("\t\t\t\t\t\t\t  |_______________________________________|\n\n");
                      while(1)
                            {
                                  printf("\n\t\t\t\t\t\t\t      __________________________________");
                                  printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                                  printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                                  printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                      {
                                         printf("\n\n\t(PRESS 0 TO STOP)\n");

                                        while(1)
                                         {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ch.itnc[o]);
                                            if(tb.ch.itnc[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ch.itqc[o]);
                                            tb.ch.itprc[o]=bill(chd[tb.ch.itnc[o]-1],tb.ch.itqc[o]);
                                            tb.ch.chbil[2]=tb.ch.chbil[2]+tb.ch.itprc[o];
                                            o++;
                                          }
                                        o++;
                                       }
                             }
                            break;
                }
                tb.ch.chbil[3]=tb.ch.chbil[2]+tb.ch.chbil[1]+tb.ch.chbil[0] ;
               if(b==4) break;
            }
            break;


            case 3 :  o=0;
                      while(1)
                        {
                            system("CLS");
                           printf("\n\t\t\t\t\t\t\t\t\t\t  ITALIAN\n");
                           printf("\n\t\t\t\t\t\t\t\t    __________________________________");
                           printf("\n\t\t\t\t\t\t\t\t   | Press 1.for     STARTER          |");
                           printf("\n\t\t\t\t\t\t\t\t   | Press 2.for    MAIN COURSE       |");
                           printf("\n\t\t\t\t\t\t\t\t   | Press 3.for      DESSERT         |");
                           printf("\n\t\t\t\t\t\t\t\t   | Press 4.for       BACK           |");
                           printf("\n\t\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");

                          scanf("%d",&c);
                          system("CLS");
                switch(c)
                {
                case 1:         system("CLS");
                               printf ("\n\t\t\t\t\t\t\t\t\t     STARTER\n");
                               printf("\t\t\t\t\t\t\t____________________________________________________\n");
                               printf("\t\t\t\t\t\t\t|          Starter                    | Price(Rs.  |\n");
                               printf("\t\t\t\t\t\t\t|-------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t|1. Pizza                             |     200    |\n");
                               printf("\t\t\t\t\t\t\t|2. Burrata Bruschetta                |     210    |\n");
                               printf("\t\t\t\t\t\t\t|3. Sicilian Salad                    |     300    |\n");
                               printf("\t\t\t\t\t\t\t|4. Chicory                           |     300    |\n");
                               printf("\t\t\t\t\t\t\t|5. Marinated Figs                    |     310    |\n");
                               printf("\t\t\t\t\t\t\t|__________________________________________________|\n\n\n");
                               while(1)
                            {
                                  printf("\n\t\t\t\t\t\t\t      __________________________________");
                                  printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                                  printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                                  printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.it.itni[o]);
                                            if(tb.it.itni[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.it.itqi[o]);
                                            tb.it.itpri[o]=bill(is[tb.it.itni[o]-1],tb.it.itqi[o]);
                                            tb.it.itbil[0]=tb.it.itbil[0]+tb.it.itpri[o];
                                            o++;
                                     }
                                     o++;
                                }
                             }
                             break;

                case 2:        system("CLS");
                               printf ("\n\t\t\t\t\t\t\t\t\t\t  MAIN COURSE\n\n");
                               printf("\t\t\t\t\t\t\t\t________________________________________________________\n");
                               printf("\t\t\t\t\t\t\t\t|  VEGETERIAN                             | Price      |\n");
                               printf("\t\t\t\t\t\t\t\t|-----------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t\t|1. vegetable lasagne                     |      150   |\n");
                               printf("\t\t\t\t\t\t\t\t|2. Sopapillas                            |      170   |\n");
                               printf("\t\t\t\t\t\t\t\t|3. Seafood risotto                       |      180   |\n");
                               printf("\t\t\t\t\t\t\t\t|4. Pumpkin Tortellini                    |      190   |\n");
                               printf("\t\t\t\t\t\t\t\t|5. Spaghetti Bolognese with garlic bread |      240   |\n");
                               printf("\t\t\t\t\t\t\t\t|6. vegetable lasagne                     |      250   |\n");
                               printf("\t\t\t\t\t\t\t\t|_________________________________________|____________|\n");
                               printf("\n\n");
                               printf("\t\t\t\t\t\t\t\t________________________________________________________\n");
                               printf("\t\t\t\t\t\t\t\t|  NON-VEGETERIAN                         | Price      |\n");
                               printf("\t\t\t\t\t\t\t\t|-----------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t\t|7. Chicken Bell Peper                    |   250      |\n");
                               printf("\t\t\t\t\t\t\t\t|8. Honey Glazed Chicken                  |   300      |\n");
                               printf("\t\t\t\t\t\t\t\t|9. Chicken Stoganoff                     |   350      |\n");
                               printf("\t\t\t\t\t\t\t\t|10. B.B.Q Chicken                        |   450      |\n");
                               printf("\t\t\t\t\t\t\t\t|11. Stuffed Chicken                      |   500      |\n");
                               printf("\t\t\t\t\t\t\t\t|_________________________________________|____________|\n\n\n\n");
                               while(1)
                            {
                                  printf("\n\t\t\t\t\t\t\t\t         __________________________________");
                                  printf("\n\t\t\t\t\t\t\t\t        | Press 1.for ENTERING YOUR CHOICE |");
                                  printf("\n\t\t\t\t\t\t\t\t        | Press 2.for       BACK           |");
                                  printf("\n\t\t\t\t\t\t\t\t        |__________________________________|\n\t\t\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.it.itni[o]);
                                            if(tb.it.itni[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.it.itqi[o]);
                                            tb.it.itpri[o]=bill(im[tb.it.itni[o]-1],tb.it.itqi[o]);
                                            tb.it.itbil[1]=tb.it.itbil[1]+tb.it.itpri[o];
                                            o++;
                                     }
                                     o++;
                                 }
                             }
                             break;

                case 3:        system("CLS");
                       printf("\n\t\t\t\t\t\t\t\t\t     DESSERT\n\n");
                       printf("\t\t\t\t\t\t\t  ______________________________________________________\n");
                       printf("\t\t\t\t\t\t\t  |    Desserts                       | Price(Rs.)     |\n");
                       printf("\t\t\t\t\t\t\t  |----------------------------------------------------|\n");
                       printf("\t\t\t\t\t\t\t  |1.Strawberry Gelato                |     300        |\n");
                       printf("\t\t\t\t\t\t\t  |2.Panna Cotta                      |     310        |\n");
                       printf("\t\t\t\t\t\t\t  |3.Biscotti                         |     320        |\n");
                       printf("\t\t\t\t\t\t\t  |4.Pumpskin-Gingersnap Tiramisu     |     325        |\n");
                       printf("\t\t\t\t\t\t\t  |5.Zabaglione with Strawberry       |     370        |\n");
                       printf("\t\t\t\t\t\t\t  |6.White Peach Tart                 |     400        |\n");
                       printf("\t\t\t\t\t\t\t  |7.Raspberry Jam Bombolini          |     410        |\n");
                       printf("\t\t\t\t\t\t\t  |8.Torta Della Nonna                |     430        |\n");
                       printf("\t\t\t\t\t\t\t  |9.Concord Grape Granita            |     470        |\n");
                       printf("\t\t\t\t\t\t\t  |10.Brutti Ma Buoni                 |     500        |\n");
                       printf("\t\t\t\t\t\t\t  |___________________________________|________________|\n\n\n");
             while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t          __________________________________");
                            printf("\n\t\t\t\t\t\t\t         | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t         | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t         |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");

                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.it.itni[o]);
                                            if(tb.it.itni[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.it.itqi[o]);
                                            tb.it.itpri[o]=bill(id[tb.it.itni[o]-1],tb.it.itqi[o]);
                                            tb.it.itbil[2]=tb.it.itbil[2]+tb.it.itpri[o];
                                            o++;
                                     }
                                     o++;
                                 }
                             }
                             break;
            }
            tb.it.itbil[3]=tb.it.itbil[2]+tb.it.itbil[1]+tb.it.itbil[0] ;
            if(c==4) break;
}
break;
     case 4 : o=0;
            while(1)
            {
             system("CLS");
            printf("\n\t\t\t\t\t\t\t\t\t  INDIAN\n");
            printf("\n\t\t\t\t\t\t\t    __________________________________");
            printf("\n\t\t\t\t\t\t\t   | Press 1.for     PUNJABI          |");
            printf("\n\t\t\t\t\t\t\t   | Press 2.for     RAJASTHANI       |");
            printf("\n\t\t\t\t\t\t\t   | Press 3.for     GUJARATI         |");
            printf("\n\t\t\t\t\t\t\t   | Press 4.for       BACK           |");
            printf("\n\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t");
               scanf("%d",&d);
               system("CLS");
               switch(d)
               {

                case 1: o=0;
                       while(1)
                        {
                          system("CLS");
                           printf("\n\t\t\t\t\t\t\t\t\t\t  PUNJABI\n");
                           printf("\n\t\t\t\t\t\t\t\t    __________________________________");
                           printf("\n\t\t\t\t\t\t\t\t   | Press 1.for     STARTER          |");
                           printf("\n\t\t\t\t\t\t\t\t   | Press 2.for    MAIN COURSE       |");
                           printf("\n\t\t\t\t\t\t\t\t   | Press 3.for      DESSERT         |");
                           printf("\n\t\t\t\t\t\t\t\t   | Press 4.for       BACK           |");
                           printf("\n\t\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                             scanf("%d",&g);
                          system("CLS");
                switch(g)
                        {
                case 1:   printf ("\n\t\t\t\t\t\t\t\t\t     STARTER\n\n");
                          printf("\t\t\t\t\t\t\t____________________________________________\n");
                          printf("\t\t\t\t\t\t\t|      Starter                | Price(Rs.) |\n");
                          printf("\t\t\t\t\t\t\t|-----------------------------|------------|\n");
                          printf("\t\t\t\t\t\t\t|1. Punjabi samosa            |     70     |\n");
                          printf("\t\t\t\t\t\t\t|2. Chole chaat               |     90     |\n");
                          printf("\t\t\t\t\t\t\t|3. Amritsari paneer kulcha   |     100    |\n");
                          printf("\t\t\t\t\t\t\t|4. Seekh kabab               |     120    |\n");
                          printf("\t\t\t\t\t\t\t|5. Paneer tikka              |     150    |\n");
                          printf("\t\t\t\t\t\t\t|__________________________________________|\n");
                          while(1)
                            {
                                  printf("\n\t\t\t\t\t\t\t      __________________________________");
                                  printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                                  printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                                  printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ip.itnip[o]);
                                            if(tb.ip.itnip[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ip.itqip[o]);
                                            tb.ip.itprip[o]=bill(ips[tb.ip.itnip[o]-1],tb.ip.itqip[o]);
                                            tb.ip.ipbil[0]=tb.ip.ipbil[0]+tb.ip.itprip[o];
                                            o++;
                                     }
                                     o++;
                                 }
                             }
                             break;

            case 2 :     printf("\n\t\t\t\t\t\t\t\t\t\t  MAIN COURSE\n\n");
                         printf("\t\t\t\t\t\t\t\t____________________________________________________\n");
                         printf("\t\t\t\t\t\t\t\t|MAIN COURSE                           |Price(Rs.) |\n");
                         printf("\t\t\t\t\t\t\t\t|--------------------------------------------------|\n");
                         printf("\t\t\t\t\t\t\t\t|1. Dal Tarka                          | 90        |\n");
                         printf("\t\t\t\t\t\t\t\t|2. Dal Fry                            | 110       |\n");
                         printf("\t\t\t\t\t\t\t\t|3. Dal makhani                        | 130       |\n");
                         printf("\t\t\t\t\t\t\t\t|4. Rajma                              | 170       |\n");
                         printf("\t\t\t\t\t\t\t\t|5. Punjabi Chole                      | 180       |\n");
                         printf("\t\t\t\t\t\t\t\t|6. Dum Aloo                           | 200       |\n");
                         printf("\t\t\t\t\t\t\t\t|7. Kadai Panner                       | 250       |\n");
                         printf("\t\t\t\t\t\t\t\t|8. Jeera Aloo                         | 150       |\n");
                         printf("\t\t\t\t\t\t\t\t|9. Panner Hyderabadi                  | 300       |\n");
                         printf("\t\t\t\t\t\t\t\t|10.Shahi Panner                       | 300       |\n");
                         printf("\t\t\t\t\t\t\t\t|__________________________________________________|\n");
                         while(1)
                            {
                                  printf("\n\t\t\t\t\t\t\t\t        __________________________________");
                                  printf("\n\t\t\t\t\t\t\t\t       | Press 1.for ENTERING YOUR CHOICE |");
                                  printf("\n\t\t\t\t\t\t\t\t       | Press 2.for       BACK           |");
                                  printf("\n\t\t\t\t\t\t\t\t       |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ip.itnip[o]);
                                            if(tb.ip.itnip[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ip.itqip[o]);
                                            tb.ip.itprip[o]=bill(ipm[tb.ip.itnip[o]-1],tb.ip.itqip[o]);
                                            tb.ip.ipbil[1]=tb.ip.ipbil[1]+tb.ip.itprip[o];
                                            o++;
                                     }
                                     o++;
                                }
                             }
                            break;
           case 3:      printf("\n\t\t\t\t\t\t\t\t\t     DESSERT\n\n");
                        printf("\t\t\t\t\t\t\t  ___________________________________________\n");
                        printf("\t\t\t\t\t\t\t  |   Dessert                    |Price(Rs.)|\n");
                        printf("\t\t\t\t\t\t\t  |-----------------------------------------|\n");
                        printf("\t\t\t\t\t\t\t  |1.Sweet Lassi                 |   40     |\n");
                        printf("\t\t\t\t\t\t\t  |2.Gajar Halwa                 |   100    |\n");
                        printf("\t\t\t\t\t\t\t  |3.Gulabjuman                  |   110    |\n");
                        printf("\t\t\t\t\t\t\t  |4.Moong Dal Halwa             |   140    |\n");
                        printf("\t\t\t\t\t\t\t  |5.Guzia                       |   180    |\n");
                        printf("\t\t\t\t\t\t\t  |______________________________|__________|\n");
             while(1)
                            {
                           printf("\n\t\t\t\t\t\t\t      __________________________________");
                           printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                           printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                           printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                       {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ip.itnip[o]);
                                            if(tb.ip.itnip[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ip.itqip[o]);
                                            tb.ip.itprip[o]=bill(ipd[tb.ip.itnip[o]-1],tb.ip.itqip[o]);
                                            tb.ip.ipbil[2]=tb.ip.ipbil[2]+tb.ip.itprip[o];
                                            o++;
                                      }
                                      o++;
                                 }

                             }
                            break;
              }
              tb.ip.ipbil[3]=tb.ip.ipbil[2]+tb.ip.ipbil[1]+tb.ip.ipbil[0] ;
              if(g==4) break;
           }
         break ;
        case 2:o=0;
              while(1)
                {
                    system("CLS");
                         printf("\n\t\t\t\t\t\t\t\t\t\t  RAJASTHANI\n");
                         printf("\n\t\t\t\t\t\t\t\t    __________________________________");
                         printf("\n\t\t\t\t\t\t\t\t   | Press 1.for     STARTER          |");
                         printf("\n\t\t\t\t\t\t\t\t   | Press 2.for    MAIN COURSE       |");
                         printf("\n\t\t\t\t\t\t\t\t   | Press 3.for      DESSERT         |");
                         printf("\n\t\t\t\t\t\t\t\t   | Press 4.for       BACK           |");
                         printf("\n\t\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                  scanf("%d",&h);
                  system("CLS");
                  switch(h)
                        {
                        case 1 : system("CLS");
                         printf("\n\t\t\t\t\t\t\t\t\t     STARTERS\n\n");
                         printf("\t\t\t\t\t\t\t  _______________________________________\n");
                         printf("\t\t\t\t\t\t\t |   Starter             |Price(Rs.)    |\n");
                         printf("\t\t\t\t\t\t\t |--------------------------------------|\n");
                         printf("\t\t\t\t\t\t\t |1. Pyaaz Ki Kachori    | 25           |\n");
                         printf("\t\t\t\t\t\t\t |2. Chole Tikki         | 40           |\n");
                         printf("\t\t\t\t\t\t\t |3. Moong Dal Pakoda    | 60           |\n");
                         printf("\t\t\t\t\t\t\t |4. Mirchi Vada         | 70           |\n");
                         printf("\t\t\t\t\t\t\t |5. Aloo Puri           | 100          |\n");
                         printf("\t\t\t\t\t\t\t |6. Dal Pakavan         | 110          |\n");
                         printf("\t\t\t\t\t\t\t |_______________________|______________|\n");
            while(1)
                            {
                             printf("\n\t\t\t\t\t\t\t    __________________________________");
                             printf("\n\t\t\t\t\t\t\t   | Press 1.for ENTERING YOUR CHOICE |");
                             printf("\n\t\t\t\t\t\t\t   | Press 2.for       BACK           |");
                             printf("\n\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ir.itnir[o]);
                                            if(tb.ir.itnir[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ir.itqir[o]);
                                            tb.ir.itprir[o]=bill(irs[tb.ir.itnir[o]-1],tb.ir.itqir[o]);
                                            tb.ir.irbil[0]=tb.ir.irbil[0]+tb.ir.itprir[o];
                                            o++;
                                     }
                              o++;
                            }

                             }
                            break;
        case 2 :      printf("\n\t\t\t\t\t\t\t\t\t\t  MAIN COURSE\n\n");
                      printf("\t\t\t\t\t\t\t\t___________________________________________\n");
                      printf("\t\t\t\t\t\t\t\t|      Main course             |Price(Rs.)|\n");
                      printf("\t\t\t\t\t\t\t\t|-----------------------------------------|\n");
                      printf("\t\t\t\t\t\t\t\t|1.Daal Baati                  |   190    |\n");
                      printf("\t\t\t\t\t\t\t\t|2.Rajasthani Kadhi            |   200    |\n");
                      printf("\t\t\t\t\t\t\t\t|3.Gatte ki sabji              |   250    |\n");
                      printf("\t\t\t\t\t\t\t\t|4.Ker Sangri                  |   250    |\n");
                      printf("\t\t\t\t\t\t\t\t|5.Laal Maas                   |   500    |\n");
                      printf("\t\t\t\t\t\t\t\t|______________________________|__________|\n");
             while(1)
                            {
                                printf("\n\t\t\t\t\t\t\t            __________________________________");
                                printf("\n\t\t\t\t\t\t\t           | Press 1.for ENTERING YOUR CHOICE |");
                                printf("\n\t\t\t\t\t\t\t           | Press 2.for       BACK           |");
                                printf("\n\t\t\t\t\t\t\t           |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                                scanf("%d",&k);
                                if(k==2) break;
                                fflush(stdin);
                                if(k==1)
                                {
                                    printf("\n\n\t(PRESS 0 TO STOP)\n");
                                    while(1)
                                     {
                                         fflush(stdin);
                                         printf("\nEnter Choice: ");
                                         scanf("%d",&tb.ir.itnir[o]);
                                         if(tb.ir.itnir[o]==0)
                                             break;
                                         printf("\nEnter Quantity: ");
                                         scanf("%d",&tb.ir.itqir[o]);
                                         tb.ir.itprir[o]=bill(irm[tb.ir.itnir[o]-1],tb.ir.itqir[o]);
                                         tb.ir.irbil[1]=tb.ir.irbil[1]+tb.ir.itprir[o];
                                         o++;
                                     }
                                     o++;
                                }
                             }
                             break;
     case 3:   printf("\n\t\t\t\t\t\t\t\t\t     DESSERT\n\n");
               printf("\t\t\t\t\t\t\t  ____________________________________________________\n");
               printf("\t\t\t\t\t\t\t  |    Desserts               |Price(Rs.)            |\n");
               printf("\t\t\t\t\t\t\t  |--------------------------------------------------|\n");
               printf("\t\t\t\t\t\t\t  |1. Milk Peda               | 100                  |\n");
               printf("\t\t\t\t\t\t\t  |2. Bundi Laddoo            | 110                  |\n");
               printf("\t\t\t\t\t\t\t  |3. Kaju Barfi              | 130                  |\n");
               printf("\t\t\t\t\t\t\t  |4. Rasmalai                | 170                  |\n");
               printf("\t\t\t\t\t\t\t  |5. Malpua                  | 480                  |\n");
               printf("\t\t\t\t\t\t\t  |___________________________|______________________|\n");
        while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t          __________________________________");
                            printf("\n\t\t\t\t\t\t\t         | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t         | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t         |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ir.itnir[o]);
                                            if(tb.ir.itnir[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ir.itqir[o]);
                                            tb.ir.itprir[o]=bill(ird[tb.ir.itnir[o]-1],tb.ir.itqir[o]);
                                            tb.ir.irbil[2]=tb.ir.irbil[2]+tb.ir.itprir[o];
                                            o++;
                                     }
                                     o++;
                                }
                             }
                             break;
    }
    tb.ir.irbil[3]=tb.ir.irbil[2]+tb.ir.irbil[1]+tb.ir.irbil[0];
    if(h==4) break;
}
break ;
case 3:      o=0;
               while(1)
                {
                   system("CLS");
                  printf("\n\t\t\t\t\t\t\t\t\t\t  GUJARATI\n");
                  printf("\n\t\t\t\t\t\t\t\t    __________________________________");
                  printf("\n\t\t\t\t\t\t\t\t   | Press 1.for     STARTER          |");
                  printf("\n\t\t\t\t\t\t\t\t   | Press 2.for    MAIN COURSE       |");
                  printf("\n\t\t\t\t\t\t\t\t   | Press 3.for      DESSERT         |");
                  printf("\n\t\t\t\t\t\t\t\t   | Press 4.for       BACK           |");
                  printf("\n\t\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                  scanf("%d",&j);
                  system("CLS");
                switch(j)
                        {
            case 1 : system("CLS");
                        printf("\n\t\t\t\t\t\t\t\t\t     STARTERS\n\n");
                        printf("\t\t\t\t\t\t\t   ________________________________________\n");
                        printf("\t\t\t\t\t\t\t   |      Starters             |Price(Rs.)|\n");
                        printf("\t\t\t\t\t\t\t   |--------------------------------------|\n");
                        printf("\t\t\t\t\t\t\t   |1.Papdi Chaat              | 30       |\n");
                        printf("\t\t\t\t\t\t\t   |2.Sev Puri                 | 35       |\n");
                        printf("\t\t\t\t\t\t\t   |3.Kadhi Pakoda             | 40       |\n");
                        printf("\t\t\t\t\t\t\t   |4.Dahi Vada                | 45       |\n");
                        printf("\t\t\t\t\t\t\t   |5.Khaman Dhokla            | 50       |\n");
                        printf("\t\t\t\t\t\t\t   |___________________________|__________|\n\n");
               while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t      __________________________________");
                            printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ig.itnig[o]);
                                            if(tb.ig.itnig[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ig.itqig[o]);
                                            tb.ig.itprig[o]=bill(igs[tb.ig.itnig[o]-1],tb.ig.itqig[o]);
                                            tb.ig.igbil[0]=tb.ig.igbil[0]+tb.ig.itprig[o];
                                            o++;
                                     }
                                     o++;
                               }
                             }
                             break;
            case 2 :system("CLS");
                    printf ("\n\t\t\t\t\t\t\t\t\t\t  MAIN COURSE\n\n");
                    printf("\t\t\t\t\t\t\t\t___________________________________________________ \n");
                    printf("\t\t\t\t\t\t\t\t|        Main Course                   |Price     |\n");
                    printf("\t\t\t\t\t\t\t\t|-------------------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t\t|1. Khandvi                            | 70       |\n");
                    printf("\t\t\t\t\t\t\t\t|2. Dhokla                             | 90       |\n");
                    printf("\t\t\t\t\t\t\t\t|3. Gathiya                            | 100      |\n");
                    printf("\t\t\t\t\t\t\t\t|4. Thepla                             | 110      |\n");
                    printf("\t\t\t\t\t\t\t\t|5. Undhiyu                            | 150      |\n");
                    printf("\t\t\t\t\t\t\t\t|6. Gujarati Khichdi                   | 170      |\n");
                    printf("\t\t\t\t\t\t\t\t|7. Dabeli                             | 180      |\n");
                    printf("\t\t\t\t\t\t\t\t|8. Khaman                             | 190      |\n");
                    printf("\t\t\t\t\t\t\t\t|9. Farsan                             | 200      |\n");
                    printf("\t\t\t\t\t\t\t\t|10.Locho                              | 210      |\n");
                    printf("\t\t\t\t\t\t\t\t|11.Dal Dhokli                         | 220      |\n");
                    printf("\t\t\t\t\t\t\t\t|12. Rotlo                             | 230      |\n");
                    printf("\t\t\t\t\t\t\t\t|13. Khakhra                           | 240      |\n");
                    printf("\t\t\t\t\t\t\t\t|14. Thepla                            | 250      |\n");
                    printf("\t\t\t\t\t\t\t\t|15. Sev Tamatar Nu Shaak              | 270      |\n");
                    printf("\t\t\t\t\t\t\t\t|16. Gujarati Kadhi                    | 280      |\n");
                    printf("\t\t\t\t\t\t\t\t|_________________________________________________|\n\n\n");
               while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t\t\t  __________________________________");
                            printf("\n\t\t\t\t\t\t\t\t\t | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t\t\t | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t\t\t |__________________________________|\n\t\t\t\t\t\t\t\t\t\t   ");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ig.itnig[o]);
                                            if(tb.ig.itnig[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ig.itqig[o]);
                                            tb.ig.itprig[o]=bill(igm[tb.ig.itnig[o]-1],tb.ig.itqig[o]);
                                            tb.ig.igbil[1]=tb.ig.igbil[1]+tb.ig.itprig[o];
                                            o++;
                                     }
                                     o++;
                                }
                             }
                            break;
        case 3: system("CLS");
                    printf ("\n\t\t\t\t\t\t\t\t\t     DESSERTS\n\n");
                    printf("\t\t\t\t\t\t\t  ___________________________________________\n");
                    printf("\t\t\t\t\t\t\t  |     Dessert                  |Price     |\n");
                    printf("\t\t\t\t\t\t\t  |-----------------------------------------|\n");
                    printf("\t\t\t\t\t\t\t  |1.Shrikhand                   |   50     |\n");
                    printf("\t\t\t\t\t\t\t  |2.Kaju Katli                  |   100    |\n");
                    printf("\t\t\t\t\t\t\t  |3.Gol Papdi                   |   110    |\n");
                    printf("\t\t\t\t\t\t\t  |4.Mohanthal                   |   140    |\n");
                    printf("\t\t\t\t\t\t\t  |5.Shakarpara                  |   180    |\n");
                    printf("\t\t\t\t\t\t\t  |6.Sutarfeni                   |   190    |\n");
                    printf("\t\t\t\t\t\t\t  |7.Basundi                     |   200    |\n");
                    printf("\t\t\t\t\t\t\t  |8.Ghughra(Gujhia)             |   210    |\n");
                    printf("\t\t\t\t\t\t\t  |9.Puran Poli                  |   220    |\n");
                    printf("\t\t\t\t\t\t\t  |10.Handvo                     |   230    |\n");
                    printf("\t\t\t\t\t\t\t  |11.Fafda Jalebi               |   250    |\n");
                    printf("\t\t\t\t\t\t\t  |12.Moong Dal Sheera           |   260    |\n");
                    printf("\t\t\t\t\t\t\t  |13.Biranj                     |   270    |\n");
                    printf("\t\t\t\t\t\t\t  |14.Faada Lapsi                |   280    |\n");
                    printf("\t\t\t\t\t\t\t  |15.kansar                     |   300    |\n");
                    printf("\t\t\t\t\t\t\t  |_________________________________________|\n");

               while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t      __________________________________");
                            printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.ig.itnig[o]);
                                            if(tb.ig.itnig[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.ig.itqig[o]);
                                            tb.ig.itprig[o]=bill(igd[tb.ig.itnig[o]-1],tb.ig.itqig[o]);
                                            tb.ig.igbil[2]=tb.ig.igbil[2]+tb.ig.itprig[o];
                                            o++;
                                     }
                                     o++;
                                }
                             }
                             break;
             }
             tb.ig.igbil[3]=tb.ig.igbil[2]+tb.ig.igbil[1]+tb.ig.igbil[0];
             if(j==4) break;
}
break ;
}
    if(d==4) break;
}

break ;

        case 5:  o=0;
                      while(1)
                        {   system("CLS");
                          printf("\n\t\t\t\t\t\t\t\t\t\t  MEXICAN\n");
                          printf("\n\t\t\t\t\t\t\t\t    __________________________________");
                          printf("\n\t\t\t\t\t\t\t\t   | Press 1.for     STARTER          |");
                          printf("\n\t\t\t\t\t\t\t\t   | Press 2.for    MAIN COURSE       |");
                          printf("\n\t\t\t\t\t\t\t\t   | Press 3.for      DESSERT         |");
                          printf("\n\t\t\t\t\t\t\t\t   | Press 4.for       BACK           |");
                          printf("\n\t\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                          scanf("%d",&e);
                          system("CLS");
                switch(e)
                {
                    case 1: system("CLS");
                            printf ("\n\t\t\t\t\t\t\t\t\t     STARTERS\n\n");
                            printf("\t\t\t\t\t\t\t   ___________________________________________\n");
                            printf("\t\t\t\t\t\t\t  |       Starter               | Price(Rs.) |\n");
                            printf("\t\t\t\t\t\t\t  |-----------------------------|------------|\n");
                            printf("\t\t\t\t\t\t\t  |1. Nachos with cheese        |     70     |\n");
                            printf("\t\t\t\t\t\t\t  |2. Nachos with Beans         |     90     |\n");
                            printf("\t\t\t\t\t\t\t  |3. Nachos with Beef          |     100    |\n");
                            printf("\t\t\t\t\t\t\t  |4. Add Supremos              |     120    |\n");
                            printf("\t\t\t\t\t\t\t  |5. Nachos Supremos           |     150    |\n");
                            printf("\t\t\t\t\t\t\t  |__________________________________________|\n");

                    while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t      __________________________________");
                            printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.mx.itnm[o]);
                                            if(tb.mx.itnm[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.mx.itqm[o]);
                                            tb.mx.itprm[o]=bill(ms[tb.mx.itnm[o]-1],tb.mx.itqm[o]);
                                            tb.mx.mxbil[0]=tb.mx.mxbil[0]+tb.mx.itprm[o];
                                            o++;
                                     }
                                     o++;
                                 }
                             }
                            break;
         case 2:  system("CLS");
                            printf("\n\t\t\t\t\t\t\t\t\t\t  MAIN COURSE\n\n");
                            printf("\t\t\t\t\t\t\t\t____________________________________________________\n");
                            printf("\t\t\t\t\t\t\t\t|Vegetarian                            |Price(Rs.) |\n");
                            printf("\t\t\t\t\t\t\t\t|--------------------------------------------------|\n");
                            printf("\t\t\t\t\t\t\t\t|1. Sweet salsa Nachos                 | 100       |\n");
                            printf("\t\t\t\t\t\t\t\t|2. Cheese Nachos                      | 110       |\n");
                            printf("\t\t\t\t\t\t\t\t|3. Mexican Salad                      | 130       |\n");
                            printf("\t\t\t\t\t\t\t\t|4. Vegetarian Quesadillas             | 170       |\n");
                            printf("\t\t\t\t\t\t\t\t|5. Bean Tostadas                      | 180       |\n");
                            printf("\t\t\t\t\t\t\t\t|6. Tex Mex Spaghetti                  | 200       |\n");
                            printf("\t\t\t\t\t\t\t\t|7. Mexican grill polenta pizza        | 250       |\n");
                            printf("\t\t\t\t\t\t\t\t|8. Mexican Quinoa Stuffed Peppers     | 150       |\n");
                            printf("\t\t\t\t\t\t\t\t|9. Tofu Tostadas                      | 300       |\n");
                            printf("\t\t\t\t\t\t\t\t|10.Roasted Bell Pepper Tostadas       | 300       |\n");
                            printf("\t\t\t\t\t\t\t\t|__________________________________________________|\n");
                            printf("\n\n");
                            printf("\t\t\t\t\t\t\t\t_____________________________________________________\n");
                            printf("\t\t\t\t\t\t\t\t| Non-Vegetarian                        |Price(Rs.) |\n");
                            printf("\t\t\t\t\t\t\t\t|---------------------------------------------------|\n");
                            printf("\t\t\t\t\t\t\t\t|11. Chicken Steak Sizzler              | 200       |\n");
                            printf("\t\t\t\t\t\t\t\t|12. Chicken Mushroom Sizzler           | 210       |\n");
                            printf("\t\t\t\t\t\t\t\t|13. Chicken Twin Pasta Sizzler         | 230       |\n");
                            printf("\t\t\t\t\t\t\t\t|14. Fish Chilly Sizzler                | 250       |\n");
                            printf("\t\t\t\t\t\t\t\t|15. Fish Steak Sizzler                 | 270       |\n");
                            printf("\t\t\t\t\t\t\t\t|16. Chk.Stuffed Green Pepper Sauce     | 300       |\n");
                            printf("\t\t\t\t\t\t\t\t|17. Fish Mexican                       | 310       |\n");
                            printf("\t\t\t\t\t\t\t\t|18. Chicken Hamburger Steak Sizzler    | 320       |\n");
                            printf("\t\t\t\t\t\t\t\t|19. Chicken Chilly Sizzler             | 330       |\n");
                            printf("\t\t\t\t\t\t\t\t|20. Chicken Mexican                    | 350       |\n");
                            printf("\t\t\t\t\t\t\t\t|___________________________________________________|\n\n");

            while(1)
                            {
                                printf("\n\t\t\t\t\t\t\t\t\t __________________________________");
                                printf("\n\t\t\t\t\t\t\t\t\t| Press 1.for ENTERING YOUR CHOICE |");
                                printf("\n\t\t\t\t\t\t\t\t\t| Press 2.for       BACK           |");
                                printf("\n\t\t\t\t\t\t\t\t\t|__________________________________|\n\t\t\t\t\t\t\t\t\t\t   ");
                                scanf("%d",&k);
                                if(k==2) break;
                                fflush(stdin);
                                if(k==1)
                                  {
                                      printf("\n\n\t(PRESS 0 TO STOP)\n");
                                      while(1)
                                        {
                                            fflush(stdin);
                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.mx.itnm[o]);
                                            if(tb.mx.itnm[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.mx.itqm[o]);
                                            tb.mx.itprm[o]=bill(mm[tb.mx.itnm[o]-1],tb.mx.itqm[o]);
                                            tb.mx.mxbil[1]=tb.mx.mxbil[1]+tb.mx.itprm[o];
                                            o++;
                                        }
                                        o++;
                                  }
                             }
                             break;
                case 3:
                    system("CLS");
                                   printf("\n\t\t\t\t\t\t\t\t\t\t     DESSERT\n\n");
                                   printf("\t\t\t\t\t\t\t\t  _____________________________________________________\n");
                                   printf("\t\t\t\t\t\t\t\t  |     Desserts                           |  Price   |\n");
                                   printf("\t\t\t\t\t\t\t\t  |----------------------------------------+----------|\n");
                                   printf("\t\t\t\t\t\t\t\t  |1.Flan                                  |    50    |\n");
                                   printf("\t\t\t\t\t\t\t\t  |2.Platanos Machos                       |    80    |\n");
                                   printf("\t\t\t\t\t\t\t\t  |3.Churros Relenos                       |   100    |\n");
                                   printf("\t\t\t\t\t\t\t\t  |4.Xangos&Ice cream                      |   120    |\n");
                                   printf("\t\t\t\t\t\t\t\t  |5.Sopapillas                            |   130    |\n");
                                   printf("\t\t\t\t\t\t\t\t  |6.Cocktel de Frutas                     |   150    |\n");
                                   printf("\t\t\t\t\t\t\t\t  |___________________________________________________|\n");

             while(1)
                            {
                                printf("\n\t\t\t\t\t\t\t\t\t __________________________________");
                                printf("\n\t\t\t\t\t\t\t\t\t| Press 1.for ENTERING YOUR CHOICE |");
                                printf("\n\t\t\t\t\t\t\t\t\t| Press 2.for       BACK           |");
                                printf("\n\t\t\t\t\t\t\t\t\t|__________________________________|\n\t\t\t\t\t\t\t\t\t\t\t");
                                scanf("%d",&k);
                                if(k==2) break;
                                fflush(stdin);
                                if(k==1)
                                   {
                                     printf("\n\n\t(PRESS 0 TO STOP)\n");
                                     while(1)
                                     {
                                        fflush(stdin);
                                        printf("\nEnter Choice: ");
                                        scanf("%d",&tb.mx.itnm[o]);
                                        if(tb.mx.itnm[o]==0)
                                            break;
                                        printf("\nEnter Quantity: ");
                                        scanf("%d",&tb.mx.itqm[o]);
                                        tb.mx.itprm[o]=bill(md[tb.mx.itnm[o]-1],tb.mx.itqm[o]);
                                        tb.mx.mxbil[2]=tb.mx.mxbil[2]+tb.mx.itprm[o];
                                        o++;
                                     }
                                     o++;
                                }
                             }
                            break;
            }
            tb.mx.mxbil[3]=tb.mx.mxbil[2]+tb.mx.mxbil[1]+tb.mx.mxbil[0] ;
            if(e==4) break;
}
break;
      case 6:   o=0;
           system("CLS");
                       printf("\n\t\t\t\t\t\t\t\t\t SEAFOOD\n\n");
                       printf("\t\t\t\t\t\t\t_________________________________________________\n");
                       printf("\t\t\t\t\t\t\t|   Sea food                | price(Rs.)        |\n");
                       printf("\t\t\t\t\t\t\t|---------------------------+-------------------|\n");
                       printf("\t\t\t\t\t\t\t|1.Fish biryani             |    100            |\n");
                       printf("\t\t\t\t\t\t\t|2.Fish curry               |    125            |\n");
                       printf("\t\t\t\t\t\t\t|3.Fish fry                 |    175            |\n");
                       printf("\t\t\t\t\t\t\t|4.Fish tikka               |    200            |\n");
                       printf("\t\t\t\t\t\t\t|5.Salmon curry             |    225            |\n");
                       printf("\t\t\t\t\t\t\t|6.Tandoori fish            |    250            |\n");
                       printf("\t\t\t\t\t\t\t|7.Chilli prawns            |    260            |\n");
                       printf("\t\t\t\t\t\t\t|8.Prawns fry               |    265            |\n");
                       printf("\t\t\t\t\t\t\t|9.Lemon pepper fish        |    270            |\n");
                       printf("\t\t\t\t\t\t\t|10.Baked fish              |    270            |\n");
                       printf("\t\t\t\t\t\t\t|11.Salmon Rice             |    275            |\n");
                       printf("\t\t\t\t\t\t\t|12.Royyala iguru           |    280            |\n");
                       printf("\t\t\t\t\t\t\t|13.Apollo Fish             |    300            |\n");
                       printf("\t\t\t\t\t\t\t|___________________________|___________________|\n");

           while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t        __________________________________");
                            printf("\n\t\t\t\t\t\t\t       | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t       | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t       |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                            {
                                printf("\n\n\t(PRESS 0 TO STOP)\n");

                                while(1)
                                  {

                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.sf.itns[o]);
                                            if(tb.sf.itns[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.sf.itqs[o]);
                                            tb.sf.itprs[o]=bill(sf[tb.sf.itns[o]-1],tb.sf.itqs[o]);
                                            tb.sf.sfbil=tb.sf.sfbil+tb.sf.itprs[o];
                                            o++;
                                  }
                                  o++;
                            }
                        }
                        break;
   case 7:  o=0;
                      while(1)
                        {
                            system("CLS");
                          printf("\n\t\t\t\t\t\t\t\t\t\t  JAPANESE\n");
                          printf("\n\t\t\t\t\t\t\t\t    __________________________________");
                          printf("\n\t\t\t\t\t\t\t\t   | Press 1.for     STARTER          |");
                          printf("\n\t\t\t\t\t\t\t\t   | Press 2.for    MAIN COURSE       |");
                          printf("\n\t\t\t\t\t\t\t\t   | Press 3.for      DESSERT         |");
                          printf("\n\t\t\t\t\t\t\t\t   | Press 4.for       BACK           |");
                          printf("\n\t\t\t\t\t\t\t\t   |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                          scanf("%d",&f);
                          system("CLS");
                switch(f)
                {
                    case 1:         system("CLS");
                               printf ("\n\t\t\t\t\t\t\t\t\t     STARTER\n\n");
                               printf("\t\t\t\t\t\t\t____________________________________________________\n");
                               printf("\t\t\t\t\t\t\t|VEGETERIAN                           | Price(Rs.  |\n");
                               printf("\t\t\t\t\t\t\t|-------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t|1. Natto                             |     70     |\n");
                               printf("\t\t\t\t\t\t\t|2. Japnese Miso Eggplant             |     100    |\n");
                               printf("\t\t\t\t\t\t\t|3. vegetable Gyoza                   |     90     |\n");
                               printf("\t\t\t\t\t\t\t|4. Hiyayakko                         |     150    |\n");
                               printf("\t\t\t\t\t\t\t|5. Miso Soup                         |     200    |\n");
                               printf("\t\t\t\t\t\t\t|_____________________________________|____________|\n\n\n\n");


                               printf("\t\t\t\t\t\t\t____________________________________________________\n");
                               printf("\t\t\t\t\t\t\t|NON-VEGETERIAN                       | Price(Rs.) |\n");
                               printf("\t\t\t\t\t\t\t|-------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t|6. Ongiri                            |     100    |\n");
                               printf("\t\t\t\t\t\t\t|7. Sushi                             |     150    |\n");
                               printf("\t\t\t\t\t\t\t|8. Teba Shio                         |     200    |\n");
                               printf("\t\t\t\t\t\t\t|9. Chawanmushi                       |     480    |\n");
                               printf("\t\t\t\t\t\t\t|10. Karaange                         |     500    |\n");
                               printf("\t\t\t\t\t\t\t|_____________________________________|____________|\n\n\n\n");

                             while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t      __________________________________");
                            printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                        fflush(stdin);
                                        printf("\nEnter Choice: ");
                                        scanf("%d",&tb.jp.itnj[o]);
                                        if(tb.jp.itnj[o]==0)
                                            break;
                                        printf("\nEnter Quantity: ");
                                        scanf("%d",&tb.jp.itqj[o]);
                                        tb.jp.itprj[o]=bill(js[tb.jp.itnj[o]-1],tb.jp.itqj[o]);
                                        tb.jp.jpbil[0]=tb.jp.jpbil[0]+tb.jp.itprj[o];
                                        o++;
                                     }
                                     o++;
                                }
                             }
                             break;
        case 2: system("CLS");
                               printf("\n\t\t\t\t\t\t\t\t\t\t  MAIN COURSE\n\n");
                               printf("\t\t\t\t\t\t\t\t____________________________________________________\n");
                               printf("\t\t\t\t\t\t\t\t|  VEGETERIAN                         | Price(Rs.) |\n");
                               printf("\t\t\t\t\t\t\t\t|-------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t\t|1. Veg Ramen                         |     70     |\n");
                               printf("\t\t\t\t\t\t\t\t|2. Creamy Miso Pasta                 |     100    |\n");
                               printf("\t\t\t\t\t\t\t\t|3. Vegan Poke Bowl                   |     90     |\n");
                               printf("\t\t\t\t\t\t\t\t|4. Kabocha Gratin                    |     150    |\n");
                               printf("\t\t\t\t\t\t\t\t|5. Miso Soup                         |     200    |\n");
                               printf("\t\t\t\t\t\t\t\t|_____________________________________|____________|\n\n\n\n");


                               printf("\t\t\t\t\t\t\t\t____________________________________________________\n");
                               printf("\t\t\t\t\t\t\t\t|  NON-VEGETERIAN                     | Price(Rs.) |\n");
                               printf("\t\t\t\t\t\t\t\t|-------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t\t|6. Tempura                           |     350    |\n");
                               printf("\t\t\t\t\t\t\t\t|7. Katsudon                          |     400    |\n");
                               printf("\t\t\t\t\t\t\t\t|8. Gyukatsu                          |     450    |\n");
                               printf("\t\t\t\t\t\t\t\t|9. Robatayaki                        |     800    |\n");
                               printf("\t\t\t\t\t\t\t\t|10. Nabe                             |     850    |\n");
                               printf("\t\t\t\t\t\t\t\t|_____________________________________|____________|\n\n\n\n");

                            while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t\t\t   __________________________________");
                            printf("\n\t\t\t\t\t\t\t\t\t  | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t\t\t  | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t\t\t  |__________________________________|\n\t\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2) break;
                            fflush(stdin);
                            if(k==1)
                                {
                                   printf("\n\n\t(PRESS 0 TO STOP)\n");
                                   while(1)
                                     {
                                        fflush(stdin);
                                        printf("\nEnter Choice: ");
                                        scanf("%d",&tb.jp.itnj[o]);
                                        if(tb.jp.itnj[o]==0)
                                            break;
                                        printf("\nEnter Quantity: ");
                                        scanf("%d",&tb.jp.itqj[o]);
                                        tb.jp.itprj[o]=bill(jm[tb.jp.itnj[o]-1],tb.jp.itqj[o]);
                                        tb.jp.jpbil[1]=tb.jp.jpbil[1]+tb.jp.itprj[o];
                                        o++;
                                     }
                                     o++;
                                }

                             }
                            break;
      case 3: system("CLS");
                               printf("\n\t\t\t\t\t\t\t\t\t     DESSERT\n\n");
                               printf("\t\t\t\t\t\t\t  ____________________________________________________\n");
                               printf("\t\t\t\t\t\t\t  |  Desserts                           | Price(Rs.) |\n");
                               printf("\t\t\t\t\t\t\t  |-------------------------------------|------------|\n");
                               printf("\t\t\t\t\t\t\t  |1. Mochi                             |     70     |\n");
                               printf("\t\t\t\t\t\t\t  |2. Parfait                           |     100    |\n");
                               printf("\t\t\t\t\t\t\t  |3. Dango                             |     150    |\n");
                               printf("\t\t\t\t\t\t\t  |4. Cotton Cheesecake                 |     150    |\n");
                               printf("\t\t\t\t\t\t\t  |5. Match Mille Cake                  |     200    |\n");
                               printf("\t\t\t\t\t\t\t  |__________________________________________________|\n\n\n\n");

                            while(1)
                            {
                            printf("\n\t\t\t\t\t\t\t      __________________________________");
                            printf("\n\t\t\t\t\t\t\t     | Press 1.for ENTERING YOUR CHOICE |");
                            printf("\n\t\t\t\t\t\t\t     | Press 2.for       BACK           |");
                            printf("\n\t\t\t\t\t\t\t     |__________________________________|\n\t\t\t\t\t\t\t\t\t");
                            scanf("%d",&k);
                            if(k==2)break;
                            if(k==1)
                            {
                               printf("\n\n\t(PRESS 0 TO STOP)\n");

                               while(1)
                                {

                                            printf("\nEnter Choice: ");
                                            scanf("%d",&tb.jp.itnj[o]);
                                            if(tb.jp.itnj[o]==0)
                                                break;
                                            printf("\nEnter Quantity: ");
                                            scanf("%d",&tb.jp.itqj[o]);
                                            tb.jp.itprj[o]=bill(jd[tb.jp.itnj[o]-1],tb.jp.itqj[o]);
                                            tb.jp.jpbil[2]=tb.jp.jpbil[2]+tb.jp.itprj[o];

                                            o++;
                                }
                                o++;

                            }
                          }
                          break;
            }
            tb.jp.jpbil[3]=tb.jp.jpbil[2]+tb.jp.jpbil[1]+tb.jp.jpbil[0];
            if(f==4) break;
}
break;
                         case 8: system("CLS");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   7 SEAS RESTAURANT ^_^  \n\t\t\t\t\t\t\t\t\t(Press Enter To Continue)");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\t\t\t\t\t");

printf("\n\t\t\t\t\t\t\t\t\tEnter Name:");
scanf("%s",&nm);
fflush(stdin);
printf("\n\t\t\t\t\t\t\t\t\tEnter phone no.:");
scanf("%s",&phn);


 system("CLS");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t   7 SEAS RESTAURANT ^_^  \n\t\t\t\t\t\t\t\t\t\t(Press Enter To Continue)");
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\t\t\t\t\t");
    printf ("\n\t\t\t\t\t\t\t\t\t\t\tBILL\n\n");
                            printf("\t\t\t\t\t\t\t_______________________________________________________________\n");
                            printf("\t\t\t\t\t\t\t ITEM NO.             ITEM QTY                  Price(Rs.)     \n");
                            printf("\t\t\t\t\t\t\t---------------------------------------------------------------\n");
                            if(tb.bb.bebil!=0)
                            {
                                 o=0;
                                 printf("\t\t\t\t\t\t\tBEVERAGES\n\n");
                                 while(tb.bb.itnb[o]!=0)
                                 {

                                   printf("\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.bb.itnb[o],tb.bb.itqb[o],tb.bb.itprb[o]);
                                   o++;
                                 }
                                 total_bill+=tb.bb.bebil;
                            }
                            if(tb.ch.chbil[3]!=0)
                            {
                                o=0;
                                printf("\t\t\t\t\t\t\tCHINESE\n\n");
                                if(tb.ch.chbil[0]!=0)
                                {

                                     printf("\t\t\t\t\t\t\tSTARTERS\n");

                                 while(tb.ch.itnc[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ch.itnc[o],tb.ch.itqc[o],tb.ch.itprc[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.ch.chbil[0];
                                }
                                if(tb.ch.chbil[1]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tMAIN COURSE\n");

                                 while(tb.ch.itnc[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ch.itnc[o],tb.ch.itqc[o],tb.ch.itprc[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.ch.chbil[1];

                                }
                                if(tb.ch.chbil[2]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tDESSERT\n");

                                 while(tb.ch.itnc[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t  %d                    %d                         %d          \n",tb.ch.itnc[o],tb.ch.itqc[o],tb.ch.itprc[o]);
                                   o++;
                                 }

                                 o++;
                                }
                                 total_bill+=tb.ch.chbil[2];
                              }

                            if(tb.it.itbil[3]!=0)
                            {
                                o=0;
                                printf("\t\t\t\t\t\t\tITALIAN\n\n");
                                if(tb.it.itbil[0]!=0)
                                {

                                     printf("\t\t\t\t\t\t\tSTARTERS\n");

                                 while(tb.it.itni[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.it.itni[o],tb.it.itqi[o],tb.it.itpri[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.it.itbil[0];
                                }
                                if(tb.it.itbil[1]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tMAIN COURSE\n");

                                 while(tb.it.itni[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.it.itni[o],tb.it.itqi[o],tb.it.itpri[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.it.itbil[1];

                                }
                                if(tb.it.itbil[2]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tDESSERT\n");

                                 while(tb.it.itni[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.it.itni[o],tb.it.itqi[o],tb.it.itpri[o]);
                                   o++;
                                 }

                                 o++;
                                }
                                total_bill+=tb.it.itbil[2];
                              }

                             if(tb.ip.ipbil[3]!=0)
                              {
                                o=0;
                                printf("\t\t\t\t\t\t\tPUNJABI\n\n");
                                if(tb.ip.ipbil[0]!=0)
                                {

                                     printf("\t\t\t\t\t\t\tSTARTERS\n");

                                 while(tb.ip.itnip[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ip.itnip[o],tb.ip.itqip[o],tb.ip.itprip[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.ip.ipbil[0];
                                }
                                if(tb.ip.ipbil[1]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tMAIN COURSE\n");

                                 while(tb.ip.itnip[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t  %d                    %d                         %d          \n",tb.ip.itnip[o],tb.ip.itqip[o],tb.ip.itprip[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.ip.ipbil[1];

                                }
                                if(tb.ip.ipbil[2]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tDESSERT\n");

                                 while(tb.ip.itnip[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ip.itnip[o],tb.ip.itqip[o],tb.ip.itprip[o]);
                                   o++;
                                 }
                                 o++;
                                }
                                 total_bill+=tb.ip.ipbil[2];

                              }

                        if(tb.ir.irbil[3]!=0)
                            {
                                o=0;
                                printf("\t\t\t\t\t\t\tRAJASTHANI\n\n");
                                if(tb.ir.irbil[0]!=0)
                                {

                                     printf("\t\t\t\t\t\t\tSTARTERS\n");

                                 while(tb.ir.itnir[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ir.itnir[o],tb.ir.itqir[o],tb.ir.itprir[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.ir.irbil[0];
                                }
                                if(tb.ir.irbil[1]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tMAIN COURSE\n");

                                 while(tb.ir.itnir[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ir.itnir[o],tb.ir.itqir[o],tb.ir.itprir[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.ir.irbil[1];

                                }
                                if(tb.ir.irbil[2]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tDESSERT\n");

                                 while(tb.ir.itnir[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ir.itnir[o],tb.ir.itqir[o],tb.ir.itprir[o]);
                                   o++;
                                 }
                                 o++;
                                }
                                 total_bill+=tb.ir.irbil[2];
                              }

                        if(tb.ig.igbil[3]!=0)
                            {
                                o=0;
                                printf("\t\t\t\t\t\t\tGUJARATI\n\n");
                                if(tb.ig.igbil[0]!=0)
                                {

                                     printf("\t\t\t\t\t\t\tSTARTERS\n");

                                 while(tb.ig.itnig[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ig.itnig[o],tb.ig.itqig[o],tb.ig.itprig[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.ig.igbil[0];
                                }
                                if(tb.ig.igbil[1]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tMAIN COURSE\n");

                                 while(tb.ig.itnig[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ig.itnig[o],tb.ig.itqig[o],tb.ig.itprig[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.ig.igbil[1];

                                }
                                if(tb.ig.igbil[2]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tDESSERT\n");

                                 while(tb.ig.itnig[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.ig.itnig[o],tb.ig.itqig[o],tb.ig.itprig[o]);
                                   o++;
                                 }
                                 o++;
                                }
                                 total_bill+=tb.ig.igbil[2];
                              }

                        if(tb.mx.mxbil[3]!=0)
                            {
                                o=0;
                                printf("\t\t\t\t\t\t\tMEXICAN\n\n");
                                if(tb.mx.mxbil[0]!=0)
                                {

                                     printf("\t\t\t\t\t\t\tSTARTERS\n");

                                 while(tb.mx.itnm[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.mx.itnm[o],tb.mx.itqm[o],tb.mx.itprm[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.mx.mxbil[0];
                                }
                                if(tb.mx.mxbil[1]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tMAIN COURSE\n");

                                 while(tb.mx.itnm[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.mx.itnm[o],tb.mx.itqm[o],tb.mx.itprm[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.mx.mxbil[1];

                                }
                                if(tb.mx.mxbil[2]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tDESSERT\n");

                                 while(tb.mx.itnm[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.mx.itnm[o],tb.mx.itqm[o],tb.mx.itprm[o]);
                                   o++;
                                 }
                                 o++;
                                }
                                 total_bill+=tb.mx.mxbil[2];
                              }

                       if(tb.sf.sfbil!=0)
                            {
                                 o=0;
                                 printf("\t\t\t\t\t\t\tSEAFOOD\n\n");
                                 while(tb.sf.itns[o]!=0)
                                 {

                                   printf("\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.sf.itns[o],tb.sf.itqs[o],tb.sf.itprs[o]);
                                   o++;
                                 }
                                 total_bill+=tb.sf.sfbil;
                            }

                         if(tb.jp.jpbil[3]!=0)
                            {
                                o=0;
                                printf("\t\t\t\t\t\t\tJAPANESE\n\n");
                                if(tb.jp.jpbil[0]!=0)
                                {

                                     printf("\t\t\t\t\t\t\tSTARTERS\n");

                                 while(tb.jp.itnj[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.jp.itnj[o],tb.jp.itqj[o],tb.jp.itprj[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.jp.jpbil[0];
                                }
                                if(tb.jp.jpbil[1]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tMAIN COURSE\n");

                                 while(tb.jp.itnj[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.jp.itnj[o],tb.jp.itqj[o],tb.jp.itprj[o]);
                                   o++;
                                 }
                                 o++;
                                 total_bill+=tb.jp.jpbil[1];

                                }
                                if(tb.jp.jpbil[2]!=0)
                                {
                                    printf("\t\t\t\t\t\t\tDESSERT\n");

                                 while(tb.jp.itnj[o]!=0)
                                 {

                                   printf("\n\t\t\t\t\t\t\t  %d                    %d                         %d          \n",tb.jp.itnj[o],tb.jp.itqj[o],tb.jp.itprj[o]);
                                   o++;
                                 }
                                 o++;
                                }
                                 total_bill+=tb.jp.jpbil[2];

                              }
                            printf("\t\t\t\t\t\t\t ______________________________________________________________\n");
    if(tb.bb.bebil!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Beverages:%.2f",tb.bb.bebil);
     tb.bb.bebil=0;
    }
    if(tb.ch.chbil[3]!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Chinese:%.2f",tb.ch.chbil[3]);
     tb.ch.chbil[3]=0;
    }
    if(tb.it.itbil[3]!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Italian:%.2f",tb.it.itbil[3]);
     tb.it.itbil[3]=0;
    }
    if(tb.ip.ipbil[3]!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Indian Punjabi:%.2f",tb.ip.ipbil[3]);
     tb.ip.ipbil[3]=0;
    }
    if(tb.ir.irbil[3]!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Indian Rajasthani:%.2f",tb.ir.irbil[3]);
     tb.ir.irbil[3]=0;
    }
    if(tb.ig.igbil[3]!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Indian gujrati:%.2f",tb.ig.igbil[3]);
     tb.ig.igbil[3]=0;
    }
    if(tb.mx.mxbil[3]!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Mexican:%.2f",tb.mx.mxbil[3]);
     tb.mx.mxbil[3]=0;
    }
    if(tb.sf.sfbil!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Seafood:%.2f",tb.sf.sfbil);
     tb.sf.sfbil=0;
    }
    if(tb.jp.jpbil[3]!=0)
    {
     printf("\n\t\t\t\t\t\t\tTotal of Japanese:%.2f",tb.jp.jpbil[3]);
     tb.jp.jpbil[3]=0;
    }

    printf("\n\t\t\t\t\t\t\tYour bill is= %.2f ",total_bill);
    printf("\n\t\t\t\t\t\t\tGST is 2 percent");
    printf("\n\t\t\t\t\t\t\t_______________________________________________________________\n");
    printf("\n\n\t\t\t\t\t\t\t----Your Total bill is=%.2f----",total_bill+(total_bill*0.02));
    total_bill=0;
    printf("\n\t\t\t\t\t\t\t_______________________________________________________________\n");
    printf("\n\t\t\t\t\t\t\tName:");
    printf("%s",nm);
    printf("\n\t\t\t\t\t\t\tPhone no.:");
    printf("%s",phn);
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t THANK YOU , VISIT AGAIN:)\n\t\t\t\t\t\t\t\t(Press Enter To Continue)");
    getch();
}
total_bill=0;
if(i==9)  break;
}
}
int bill(int in,int q)
{
    float a=0;
    a=a+in*q;
    return(a);
}

