//1.Write a C program to check whether a character is alphabet or not.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':
            printf("This is alphabet");
            break;
        case 'B':
            printf("This is alphabet");
            break;
        case 'C':
            printf("This is alphabet");
            break;
        case 'D':
            printf("This is alphabet");
            break;
        case 'E':
            printf("This is alphabet");
            break;
        case 'F':
            printf("This is alphabet");
            break;
        case 'G':
            printf("This is alphabet");
            break;
        case 'H':
            printf("This is alphabet");
            break;
        case 'I':
            printf("This is alphabet");
            break;
        case 'J':
            printf("This is alphabet");
            break;
        case 'K':
            printf("This is alphabet");
            break;
        case 'L':
            printf("This is alphabet");
            break;
        case 'M':
            printf("This is alphabet");
            break;
        case 'N':
            printf("This is alphabet");
            break;
        case 'O':
            printf("This is alphabet");
            break;
        case 'P':
            printf("This is alphabet");
            break;
        case 'Q':
            printf("This is alphabet");
            break;
        case 'R':
            printf("This is alphabet");
            break;
        case 'S':
            printf("This is alphabet");
            break;
        case 'T':
            printf("This is alphabet");
            break;
        case 'U':
            printf("This is alphabet");
            break;
        case 'V':
            printf("This is alphabet");
            break;
        case 'W':
            printf("This is alphabet");
            break;
        case 'X':
            printf("This is alphabet");
            break;
        case 'Y':
            printf("This is alphabet");
            break;
        case 'Z':
            printf("This is alphabet");
            break;

        case 'a':
            printf("This is alphabet");
            break;
        case 'b':
            printf("This is alphabet");
            break;
        case 'c':
            printf("This is alphabet");
            break;
        case 'd':
            printf("This is alphabet");
            break;
        case 'e':
            printf("This is alphabet");
            break;
        case 'f':
            printf("This is alphabet");
            break;
        case 'g':
            printf("This is alphabet");
            break;
        case 'h':
            printf("This is alphabet");
            break;
        case 'i':
            printf("This is alphabet");
            break;
        case 'j':
            printf("This is alphabet");
            break;
        case 'k':
            printf("This is alphabet");
            break;
        case 'l':
            printf("This is alphabet");
            break;
        case 'm':
            printf("This is alphabet");
            break;
        case 'n':
            printf("This is alphabet");
            break;
        case 'o':
            printf("This is alphabet");
            break;
        case 'p':
            printf("This is alphabet");
            break;
        case 'q':
            printf("This is alphabet");
            break;
        case 'r':
            printf("This is alphabet");
            break;
        case 's':
            printf("This is alphabet");
            break;
        case 't':
            printf("This is alphabet");
            break;
        case 'u':
            printf("This is alphabet");
            break;
        case 'v':
            printf("This is alphabet");
            break;
        case 'w':
            printf("This is alphabet");
            break;
        case 'x':
            printf("This is alphabet");
            break;
        case 'y':
            printf("This is alphabet");
            break;
        case 'z':
            printf("This is alphabet");
            break;

        default:
            printf("This is NOT alphabet");
    }

    return 0;
}



//2.Write a C program to check whether a year is leap year or not.

#include <stdio.h>

int main()
{
    int year, result;

    printf("Enter a year: ");
    scanf("%d", &year);

    result = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    switch(result)
    {
        case 1:
            printf("Leap Year");
            break;

        default :
            printf("Not Leap Year");
            break;
    }

    return 0;
}


//3.Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main()
{
    int n,result;
    printf("Enter a number : ");
    scanf("%d",&n);

    result = (n % 5 == 0 && n % 11 == 0);

    switch (result)
    {
    case 1 :
        printf("Number is divaisable by 5 and 11");
        break;


    default :
        printf("Not Divisable");
    }

    return 0;
}

//4.Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet :");
    scanf("%c",&ch);

    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {

        switch (ch)
    {
    case 'A' :
        printf("This is vowel");
        break;
    case 'E' :
        printf("This is vowel");
        break;
    case 'I' :
        printf("This is vowel");
        break;
    case 'O' :
        printf("This is vowel");
        break;
    case 'U' :
        printf("This is vowel");
        break;
    case 'a' :
        printf("This is vowel");
        break;
    case 'e' :
        printf("This is vowel");
        break;
    case 'i' :
        printf("This is vowel");
        break;
    case 'o' :
        printf("This is vowel");
        break;
    case 'u' :
        printf("This is vowel");
        break;

    default :
        printf("This is consonant ");

    }

   } else {
         printf("Invalid input");
   }



    return 0;
}


//5.Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>
int main()
{
    char ch,type;
    printf("Enter a charecter:");
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        type = 1;

    else if (ch>='0' && ch<='9')
        type = 2;

    else
        type = 3;

    switch (type)
    {
    case 1 :
        printf("This is Alphabet");
        break;
    case 2 :
        printf("This is digit");
        break;
    case 3 :
        printf("This is special charecter ");
        break;
    }

    return 0;
}


//6.Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>
int main()
{
    char ch,type;
    printf("Enter a charecter:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        type = 1;
        else if (ch>='a' && ch<='z')
            type = 2;
    else
        type = 3;


    switch (type)
    {
    case 1 :
        printf("This is uppercase");
        break;
    case 2 :
        printf("This is lower case");
        break;
    case 3 :
        printf("Invalid input");
        break;
    }
    return 0;

}

//7.Using arrey input from user and output same;

#include<stdio.h>
int main()
{
    int num[5];
    printf("Enter 5 number\n");

    //For input;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("You entered\n");

    //for output
    for(int i=0; i<5; i++)
    {
        printf("%d",num[i]);
    }

    return 0;
}


