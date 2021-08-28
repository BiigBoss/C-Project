#include <stdio.h>
#include <stdlib.h>

int hari1(int m, int y)
{
    int a=0;
    int bulan[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((y%100!=0 && y%4==0) || y%400 == 0){
            bulan[1]=29;
        } else {
            bulan[1]=28;
        }
    for (int i=0;i<m-1;i++){
        a+= bulan[i];
    } return a;
}

int  hari2(int y)
{
    int c=0,jmlh;
    for (int i=1;i<=y-1;i++){
        if((i%100!=0 && i%4==0) || i%400 == 0){
            jmlh=366;
        } else {
            jmlh = 365;
        }
        c += jmlh;
    } return c;
}

int main()
{
    int m,y,a,z,r,g;
    int bulan[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char nama[12][10]={"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    printf ("Masukkan bulan dan tahun :\n");
    scanf ("%d %d", &m,&y);
    if((y%100!=0 && y%4==0) || y%400 == 0){
            bulan[1]=29;
    } else {
            bulan[1]=28;
    }
    printf ("\n-----------------%s  %d---------------\n\n", nama[m-1],y);
    a = hari1(m,y) + hari2 (y);
    z = bulan[m-1];
    r = (a+1) % 7;
    for (int i=0;i<7;i++){
        printf("   ");
        if(i % 7 == 0){
            printf("Min");
        }else if(i % 7 == 1){
            printf("Sen");
        }else if(i % 7 == 2){
            printf("Sel");
        }else if(i % 7 == 3){
            printf("Rab");
        }else if(i % 7 == 4){
            printf("Kam");
        } else if(i % 7 == 5){
            printf("Jum");
        }else if(i % 7 == 6){
            printf("Sab");
            printf("\n");
        }
    }
    for (int i =0; i<r; i++){
        printf("      ");
        }
    g=1;
    for(int i=a+1; i<=a+z; i++){
        if (g < 10){
            printf("     ");
        }
        else {printf("    ");}
        printf("%d", g);
        if(i % 7 == 6){
            printf("\n");
        } g++;
    } return 0;
}
