#include <stdio.h>
#include <ctype.h>
int main()
{
    int foodType = 0;
    int choice = 0;
    puts("Welcome to Madurai Cafe");
    do
    {
        puts("1:Veg 2:Nonveg, Your choice plz: ");
        fflush(stdin);
        //foodType = getc(stdin);
        scanf("%d", &foodType);
        foodType = tolower(foodType);
        switch (foodType)
        {
        case 1:
            puts("1:Banne-Dosa 2:Upma 3:Rava-idli \nYour choice? ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your Tasty dosa Sir");
                break;
            case 2:
                puts("Your yummy upma Maam");
                break;
            case 3:
                puts("Your delicious idli Sir");
                break;
            default:
                puts("We dont serve Grass Sir");
            }
            break;
        case 2:
            puts("1:Mutton-pulav 2:Chicken-chilly 3:Fish-fry. Your choice plz");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your Tasty Hanumantu");
                break;
            case 2:
                puts("Guntur delicious Chicken Maam");
                break;
            case 3:
                puts("Your spicy fish fry Maam");
                break;
            default:
                puts("We dont serve Lizards Maam");
            }
        }
        puts("Do you wish to have more? 1:Yes 2:No");
        scanf("%d", &choice);
    } while (choice == 1);
    puts("Thank you Visit again");
    return 0;
}