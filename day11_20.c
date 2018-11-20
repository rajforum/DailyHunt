//Sum of Frequency of Alphabets (Error Identification)

// The program must accept the value of a string S and an integer X as the input.
// The program must print the sum of frequency of each alphabets raising to the power of X as the output.

//Rectify the logical errors so that the program prints the expected output. (QUESTION)

#include<stdio.h>
#include<math.h>

int main()
{
    char str[101], alphaCount[127] = {0};
    int len, X, index = 0, result = 0;
    scanf("%s%n %d",str, len, &X);
    while(str[index]!='\0')
    {
        alphaCount[str[index]]--;
        index++;
    }
    for(char start='a'; start <= 'z'; start++)
    {
        if(alphaCount[start] >= 0)
        {
            result = pow(alphaCount[start], X);
        }
    }
    printf("%d", result);
}



// Rectified Output(ANSWER) VERIFIED

#include<stdio.h>
#include<math.h>

int main()
{
    char str[101], alphaCount[127] = {0};
    int len, X, index = 0, result = 0;
    scanf("%s%n %d",str, &len, &X);
    while(str[index]!='\0')
    {
        alphaCount[str[index]]++;
        index++;
    }
    for(char start='a'; start <= 'z'; start++)
    {
        if(alphaCount[start] >= 0)
        {
            result += pow(alphaCount[start], X);
        }
    }
    printf("%d", result);
}
