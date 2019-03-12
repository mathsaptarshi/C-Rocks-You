#include<stdio.h>
int adj[25][25];
int x[25];
int n;


void nextValue (int k)
{
	int i=0;
	while(1)
	{
		x[k]=x[k]+1;
		if (x[k]==n)
		{
     		x[k]=-1;
     	}
		if (x[k]==-1)
  			return;
  		if (adj[x[k-1]][x[k]]==1)
  		{
   			for (i=0; i<k; i++)
     			if (x[i]==x[k])
        		break;
		}
		if (i==k)
   		if (k<n-1 || k==n-1 && adj[x[n-1]][0]==1)
    	return;
	}
}

int getHCycle(int k)
{

	while(true)
	{
  		nextValue(k);
  		if (x[k]==-1)
    		return 0;
  		if (k==n-1)
  		{
  		
   			printf("\nSolution  : ");
   			for (int i=0; i<n; i++)
   			{
     			printf("%d--> ",x[i]+1);
     		}
  			printf("1");
  		}
  		else getHCycle(k+1);
	}
}

int main()
{
    int i,j;
    int x[25];
    for (int i=1;i<n; i++)
    x[i]=-1;
	printf("Algorithm Analysis project on Hamiltonian cycle (or Hamiltonian circuit) and compiled by Saptarshi Biswas ...\nNow we presenting before you...\n\n");
	printf("\t\t***************************************************************************\n\n");
	printf("Enter the Number of Vertex:\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	getHCycle(1);
 }

