/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/

#include<stdio.h>

int main(){

    int n;
    float sum = 0 ,ip = 0;

    printf("Enter value n :\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d :\n", i);
        scanf("%f" , &ip);
        sum += ip;
    }

    float Avg = sum / n;

    printf("Sum = %.0f\nAvg = %.2f" , sum , Avg);


    return 0 ;
}