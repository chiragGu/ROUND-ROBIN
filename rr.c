#include <stdio.h>
 
void main()
{
    int bt[20],p[20],wt[20],i,j,n,total=0,pos,temp;
    float avg_wt;
    printf("Enter number of process:");
    scanf("%d",&n);
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;           
    }
    rrobin(p,bt,n);
}   
rrobin(int pname[],int btime[],int n)
       {
            int tslice,i=0,j=0;
            j=0;
            printf("Enter the time slice:\n");
            scanf("%d",&tslice);
            printf("PROCESS NAME \t REMAINING TIME\t");
            while(j<n)
            { 
              for(i=0;i<n;i++)
              {
                if(btime[i]>0)
                 { 
                   if(btime[i]>=tslice)
                     {  
                       btime[i]=btime[i]-tslice;
                       printf("\n%d\t\t %d \t\t",pname[i],btime[i]);
                       if(btime[i]==0)
                       j++;
                     }
                    else
                    { 
                      btime[i]=0;
                      printf("\n%d\t\t %d \t\t ",pname[i],btime[i]);
                    }
                }
            }
       }
    }