/* 
   Anik Sarker Akash 
   Reg No:20184058
*/

# include <stdio.h> 
# include <string.h> 
# include <stdlib.h>

int main( ) 
{ 

	FILE *filePointer ; 
	
	

	filePointer = fopen("random2.txt", "r") ; 
	
	if ( filePointer == NULL ) 
	{ 
		printf( "File Failed to open." ) ; 
	} 
	else
	{ 
		
		int n,x,y,k,l;

		
 
		
		printf("** Basic DFA Machine **\n\n\n") ; 
		printf("Enter the number of states and inputs and final states: ");
		scanf(" %d %d %d",&n,&x,&y);
		int *state[n];
		for (k=0; k<n; k++) 
         		state[k] = (int *)malloc((x+1) * sizeof(int)); 
		printf("Input the state table:(current state, inputs .... , next state (hit enter)) \n");
		
		for(k=0; k<n; k++)
		{
			for(l=0; l<x+1; l++)
			{
				scanf(" %d",&state[k][l]);		
			}
		}
		char input[10];
		printf("\nEnter the possible inputs: ");
		for(k=0; k<x; k++)
		{
			scanf(" %c",&input[k]);
		}
		printf("\nEnter the final states: ");
		int h, final[19];
		for(h=0; h<y; h++)
		{
			scanf(" %d",&final[h]);
		}
		

		
		char dataToBeRead[50]; 
		int itr=0;

		while( fscanf ( filePointer, "%s", dataToBeRead )!=EOF ) 
		{ 
			
			
			int i,curr=0;
			char temp;
			for(i=0; i<strlen(dataToBeRead); i++)
			{
				temp=dataToBeRead[i];
				
				for(l=0; l<x; l++)
				{
					if(input[l]==temp)
					{
						curr=state[curr][l];
					}
				}	

				
	
			}
			int done=0;

			
			for(k=0; k<y; k++)
			{
				if(curr == final[k])
				{
					done=1;
					break;
				}	
			}
			if(done==1)
			{
				printf("%s is a part of language\n",dataToBeRead);
			}
			else 
				printf("!!!!!!  %s is NOT a part of language.\n",dataToBeRead);
			curr=0;

			
		} 
		
		fclose(filePointer) ; 
		
		printf("The file is now closed.") ; 
	} 
	return 0;		 
} 

