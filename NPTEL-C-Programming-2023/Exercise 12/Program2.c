#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int score;
};
void main()
{
    struct student s[20];
    int i, n;

    scanf("%d" ,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &s[i].rollno);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].score);
    }

    struct student temp;
    int j;
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1;j++)
      {
        if(s[j].score<s[j+1].score)
        {
          temp=s[j];
          s[j]=s[j+1];
          s[j+1]=temp;
        }
      }
    }
    printf("The Merit List is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d", s[i].rollno);
        printf("  %s", s[i].name);
        printf("  %d\n", s[i].score);
    }

}