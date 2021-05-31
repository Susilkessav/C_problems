#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int score = 0;
char sentence[20][20];
int sent_size = 0;
void calculate_marks(int n , char keyword[n][20], int marks[n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<sent_size;j++)
        {
            if(strcmp(keyword[i],sentence[j])==0)
            {
                score += marks[i];
                break;
            }
        }
    }
}
void word_ext(char s[100])
{
    int idx = 0, j=0;
    for(int i=0;i<=(strlen(s));i++)
    {
        if(s[i]==' '|| s[i]=='\0')
        {
            sentence[idx][j]='\0';
            sent_size++;
            idx++;  
            j=0;    
        }
        else
        {
            sentence[idx][j] = s[i];
            j++;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fflush (stdin);

    char keyword[n][20];
    int marks[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s", &keyword[i]);
        fflush (stdin);
    }
    for(int j=0;j<n;j++)
    {
        scanf("%d",&marks[j]);
        fflush (stdin);
    }
    char passage[100];
    printf("Enter the Sentence to evaluate :");
    fgets(passage,sizeof(passage),stdin);
    word_ext(passage);
    calculate_marks(n, keyword, marks);
    printf("%d\n",score);
    return 0;
}
