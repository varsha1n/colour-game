
#include <stdio.h>
#include <string.h>  
#include <stdlib.h>
#include<time.h>

#define SIZE 8

struct scoreboard{
	char player[10];
	int score;
};

int main() {
    char arr2[SIZE][20]={"BLACK","RED","GREEN","YELLOW","BLUE","PURPLE","CYAN","WHITE"};
    int i,n,j,z,a,k;
    int m;
    time_t t;
    n=1;
    int ch;
    int x=0;
    
    char admin[15],password[12];
    
    printf("admin_id:");
    scanf("%s",&admin);
    
    printf("password:");
    scanf(" %s",&password);
    
    if(strcmp(admin,"varsha")==0)
	{
    	if(strcmp(password,"123")==0)
		{
    		printf("success\n");
		}
		else
		{
			printf("wrong password\n");
		}
	}
	else
	{
		printf("only admin has access");
	}
    
    printf("welcome to color game \n");
    
    struct scoreboard p1;
    
    char name[10];
    printf("enter name:");
    scanf("%s",&name);
    
    char gender[10];
    printf("enter gender");
    scanf("%s",&gender);
    
    int age;
    printf("enter age");
    scanf("%d",&age);
    
    strcpy(p1.player, name );
	
	
	
    do
	{
    printf("if you want to continue enter 1\n");
        printf("if you don't want to continue enter 0\n");
        scanf("%d",&ch);
    
    if(ch==1)
	{
    for(i=0;i<n;i++)
	{
        srand((unsigned)time(&t));
        z=rand()%8;
        k=rand()%8;
        
        printf("enter 1 if colur matches with text\n");
    printf("enter 0 if colour doesn't match with the text\n");
        
        printf("\033[0;3%dm",z);
        printf("%s\n",arr2[k]);
        printf("\033[0m");
        printf("enter your answer");
        scanf("%d",&m);
        
        if(m==1)
		{
            if(k==z)
			{
                printf("answer is correct\n");
                x++;
            }
            else{
                printf("answer is wrong\n");
            }
        }
        if(m==0)
		{
            if(k!=z)
			{
                printf("answer is correct\n");
                x++;
            }
            else
			{
                printf("answer is wrong\n");
            }
        }
    }
    }
    
    }
    while(ch==1);
	{
        printf("game end\n");
    }
    p1.score=x;
    printf("%s , score:%d\n",p1.player,p1.score);
    
    
    FILE *sbf1,*sbf2;
    sbf1 = fopen("scoreboard.txt", "a");
    
    fprintf(sbf1, "name:%s , score:%d\n",p1.player,p1.score); 
    
    sbf2 = fopen("scoreboard.txt", "r");
    char c;
    while((c=fgetc(sbf2))!=EOF)
	{
    	putchar(c);
	}
    fclose(sbf1);
    fclose(sbf2);
    }
    
 
