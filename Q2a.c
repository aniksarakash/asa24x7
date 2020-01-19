/* 
   Anik Sarker Akash 
   Reg No:20184058
*/
# include <stdio.h> 
# include <string.h> 


int main( ) 
{ 

	FILE *filePointer ; 
	
	

	filePointer = fopen("random1.txt", "r") ; 
	
	if ( filePointer == NULL ) 
	{ 
		printf( " File Failed to Open." ) ; 
	} 
	else
	{ 
		int state[6][3], final_state=1;
		state[0][0]=0;state[0][1]=1;state[0][2]=0;
		state[1][0]=1;state[1][1]=2;state[1][2]=1;
		state[2][0]=2;state[2][1]=2;state[2][2]=2;
		
		
		printf("String s with Exctly one 'a'.\n\n") ; 
		char dataToBeRead[50]; 
		int itr=0;

		while( fscanf ( filePointer, "%s", dataToBeRead )!=EOF ) 
		{ 
			
			
			int i,curr=0;
			char temp;
			for(i=0; i<strlen(dataToBeRead); i++)
			{
				temp=dataToBeRead[i];
				
				if(temp=='a')
				{
					curr=state[curr][1];
				}
				else if(temp=='b')
				{
					curr = state[curr][2];
				}	

				
	
			}
			if(final_state==curr)
			{
				printf("%s is a part of language\n",dataToBeRead);
			}
			else 
				printf("!!  %s is NOT a part of language.\n",dataToBeRead);
			curr=0;

			
		} 
		
		fclose(filePointer) ; 
		
		printf("The file is now closed.") ; 
	} 
	return 0;		 
} 

