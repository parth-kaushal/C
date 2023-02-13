// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number:");
//     scanf("%d", &n);
//     switch (n)
//     {
//         case 0:
//             printf("zero");
//             break;
//         case 1:
//             printf("one");
//             break;
//         case 2:
//             printf("two");
//             break;
//         case 3:
//             printf("three");
//             break;
//         case 4:
//             printf("four");
//             break;
//         case 5:
//             printf("five");
//             break;
//         case 6:
//             printf("six");
//             break;
//         case 7:
//             printf("seven");
//             break;
//         case 8:
//             printf("eight");
//             break;
//         case 9:
//             printf("nine");
//             break;
//         default:
//             printf("invalid");
//     }
// }

#include <stdio.h>
int main()
{
    char in;
    printf("Enter a character : ");
    scanf("%c", &in);
    if (in >= 'a' && in <= 'z' || in >= 'A' && in <= 'Z')
    {
        if (in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u' || in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U')
        {
            printf("Entered character is a vowel");
        }
        else
        {
            printf("Enter character is a consonent");
        }
    }
    else
    {
        printf("Enter an alphabet");
    }
}