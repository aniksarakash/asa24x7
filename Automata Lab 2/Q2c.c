/* 
   Anik Sarker Akash 
   Reg No:20184058
*/
# include <stdio.h> 
# include <string.h> 


int main( ) 
{ 

	FILE *filePointer ; 
	
	

	filePointer = fopen("random3.txt", "r") ; 
	
	if ( filePointer == NULL ) 
	{ 
		printf( "File Failed to open." ) ; 
	} 
	else
	{ 
		int state[6][3], final_state=1;
		state[0][0]=0;state[0][1]=1;state[0][2]=0;
		state[1][0]=1;state[1][1]=2;state[1][2]=1;
		state[2][0]=2;state[2][1]=3;state[2][2]=2;
		state[3][0]=3;state[3][1]=4;state[3][2]=3;
		state[4][0]=4;state[4][1]=4;state[4][2]=4;
		
		
		printf("String s with not more than three 'a'.\n\n") ; 
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
			if(curr<=3)
			{
				printf("%s is a part of language\n",dataToBeRead);
			}
			else 
				printf("!!!  %s is NOT a part of language.\n",dataToBeRead);
			curr=0;

			
		} 
		
		fclose(filePointer) ; 
		
		printf("The file is now closed.") ; 
	} 
	return 0;		 
} 

