#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int id,a1;
	char name[100];
	char mob[100];
	float p;
}s;


void main()
{
	
	int data, i,save, id;

	while(1){
	
	
	printf("Enter your Choice \n");
	printf("1. Add \n 2. list \n 3. search \n 4. delete \n 5. exit");
	
	scanf("%d",&data);
	switch(data)
	{
		//add code
	case 1:
	{
FILE *ptr;
ptr=fopen("file.dat","a");

printf("Enter Number");
scanf("%d",&s.id);
printf("Enter Name");
scanf("%s",s.name);
printf("Enter Mob number");
scanf("%s",&s.mob);
printf("Enter Percentage");
scanf("%f",&s.p);

fprintf(ptr,"\n %d %s %s %f ",s.id,s.name,s.mob,s.p);
fclose(ptr);

printf("record save successfuly");
scanf("%e",&save);
printf("\n press 1 goto back ");
scanf("%e",&save);
system("cls");
	break;	
}
    //list code

  case 2:
  	{
  		FILE *list;
		list=fopen("file.dat","r");
		int i=1;
		system("cls");
		printf("Id  name  mob  percentage");
		while(fscanf(list,"\n %d %s %s %f ",&s.id,&s.name,&s.mob,&s.p)!=EOF)
		{
		printf("\n %d %s %s %f ",s.id,s.name,s.mob,s.p);
		i++;	
		}

fclose(list);
printf("\n press 1 goto back ");
scanf("%e",&save);
system("cls");
break;
}


   //serech code

case 3:

		{
				FILE *ser;
   					 int test=1;
   					 int save;
   					 int choice,a1;
   					 
  					ser=fopen("file.dat","r");
  					
  				  	printf("\nDo you want to check record \n\nEnter 1 to check record:");
  			  		scanf("%d",&choice);
  			  		
    			if (choice==1)
  			  {   
				printf("Enter the  ID :");
    			  scanf("%d",&a1);

        while (fscanf(ser,"%d %s %s %f ",&s.id,&s.name,&s.mob,&s.p) !=EOF)
        {
            if(s.id==a1)
            {   
		
        	fprintf(ser,"\n %d %s %s %f ",s.id,s.name,s.mob,s.p); 
			printf("\n %d %s %s %f ",s.id,s.name,s.mob,s.p);  
			
		
        	printf("\n");
					printf("Press 1 Goto Main Menu... \n");
					
					scanf("%d",&save);
					
				
    				  fclose(ser);
			 	  }
			 	  system("cls");
			 
    	}
			}
			else
   			  {
     		printf("\n\n Warning!! Incorrect Choice");
			printf(" \n\n Please press 'Enetr' key....\n");
			getch();
			 }
     
	 		break;	
}


//delete code


case 4:
	{
			FILE *del, *del1;
			int  j,id1,f=0;
			del=fopen("file.dat","r");
	        del1=fopen("file.dat","w");
		printf("enter the id to delete");
		scanf("%d",&id1);
		
		while(fscanf(del,"%d %s %s %f ",&s.id,&s.name,&s.mob,&s.p) !=EOF){
			
			
			if(s.id=id1){
			f=1;
			}
			else
				printf("\n %d %s %s %f ",s.id,s.name,s.mob,s.p);  
		}
		fclose(del);
		fclose(del1);
	if(f){
		del=fopen("file.dat","r");
	       del1=fopen("file.dat","w");
		
	
	while(fscanf(del,"%d %s %s %f ",&s.id,&s.name,&s.mob,&s.p) !=EOF)
		printf("\n %d %s %s %f ",s.id,s.name,s.mob,s.p); 
			fclose(del);
			printf("record  deleted");
		fclose(del1);
}
printf("\n press 1 goto back ");
scanf("%e",&save);
system("cls");

		break;
	}
 

 //exit code



 	case 5:
		{
		printf(" Exit");
     exit(0);
			
		}
		default:{
		printf("wrong choice");
		break;
	} 
	getch();
}
}
}

	




 
 

	
	
	
	
	
	
	
	
	
	
	


	

