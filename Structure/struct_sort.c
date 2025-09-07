//C program to sort students record using structure and bubble sort based on roll number
#include<stdio.h>
#include<string.h>
struct jo
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    int n;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    struct jo a[n];
    int i,j;
    struct jo temp;
    
   for(i=0;i<n;i++)
    {
        printf("Enter student %d details:\n",i+1);
        scanf("%d %s %f",&a[i].roll,a[i].name,&a[i].marks);
        
    }
    
    printf("Student details(unsorted):\n");
    
      for(i=0;i<n;i++)
    {
       printf("%d %s %f",a[i].roll,a[i].name,a[i].marks);
        printf("\n");
    }
    
    printf("Student details(sorted):\n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j].roll > a[j+1].roll)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
       printf("%d %s %f",a[i].roll,a[i].name,a[i].marks);
        printf("\n");
    }
}
