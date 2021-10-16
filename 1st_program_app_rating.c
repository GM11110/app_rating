#include<stdio.h>
//Hello Bhaiaya PLease Check This Code And Send Me Your Rely What Change I Should Do In This 
//code And I Will Send Neew Program soon as soon Possible

int main()
{
    
    char ch[12];
    int rating;


    printf("Hello Guys This is My New Program\n");
    printf("Choose App For Give Rating\n");
    printf("Ex a. Free Fire = So Right |a| not Free Fire");
    printf("Enter That App Name\n");
    printf("Games\nA. Free Fire\n B. Free Fire Max\n C. BGMi\n D. Minecraft\nE. GTA V \n");
    printf("Enter Game Name\n");
    scanf("%c",&ch[12]);

    switch (ch[12])
    {
        case 'a'||'A':
        printf("You Have Choose Free Fire App\n");
        break;

        case 'b':
        printf("You Have Choose Free Fire Max\n");
        break;

        case 'c':
        printf("You Have Choose BGMI\n");
        break;

        case 'd':
        printf("You Have Choose Minecraft\n");
        break;
        case 'e':
        printf("You Have Choose GTA V\n");
        break;


        default:
        printf("Invalid Game You Have Choosed\n");
        break;
    }
    
    printf("Please Give Rating between -(1-5)\n",ch);
    scanf("%d",&rating);

    switch (rating)
    {
        case 1:
        printf("You Have Add Rating 1\n");
        break;
        case 2:
        printf("You Have Add Rating 2 \n");
        break;
        case 3:
        printf("You Have Add Rating 3 \n");
        case 4:
        printf("You Have Add Rating 4\n");
        break;
        printf("You Have Add Rating 5\n");
        break;
        default:
        printf("You Have Add Invalid Rating\n");
        break;
    }



}