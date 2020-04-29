// this is a program that will answer E.M(engineering mechanics) problem.  comments are included to illsutrate the use of particular function
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

	}
//fuction to get the radius of the spheres
	float rad(int a)	
	{
		int i;
		extern float radius[3];
		printf("\nenter the radius of the %d spheres=\n",a);
		for(i=0; i<a; i++)
		scanf("%f",&radius[i]);
	}
//function to get the center distances between spheres
	float cen_disp(	int a)
	{
		int i;
		extern float disp[3];
		printf("\nenter the centre distance between the %d spheres=",a);
		for(i=0;i<a;i++)
		{
			scanf("%f",&disp[i]);
		}
	}
	float weight(int a)
	{
		int i;
		extern float wt[3]; 
		printf("enter the weight of the spheres=");
		for(i=0;i<a;i++)
		{
			scanf("%f",&wt[i]);
		}
	}
//function to check if the data entered is correct or not and to calculate the resulatant forces, angles, etc.
	float calc(int a,float disp[a],float radius[a])
	{
		int i,j;
		for(i=0; i<a ; i++)
		{
			for(j=0;j<a-2;j++)
			{
				if(disp[i]+disp[i+1+j]>=disp[i+j+2]&&radius[i]+radius[i+1]>disp[i])	//1)the first part is nothig but triangle law i.e the sum of any two sides of a triangle must be greater than third side	2)the part after "&&" the second part ensures that any two spheres do not co-incide each other.
				printf("\nthe data provided is correct");
				else
				{
					printf("\nthe data provided is incorrect");
				}
			}
		}
		extern float rad_angle[3];
		
		{
			rad_angle[0]=acos((pow(disp[1],2)+pow(disp[2],2)-pow(disp[0],2))/2*disp[1]*disp[2]);
			rad_angle[1]=acos((pow(disp[0],2)+pow(disp[2],2)-pow(disp[1],2))/2*disp[0]*disp[2]);
			rad_angle[2]=acos((pow(disp[1],2)+pow(disp[0],2)-pow(disp[2],2))/2*disp[1]*disp[0]);
		}
	}
//function to find the resultant of the various forces
	float resultant(int a, float disp[a],float radius[a], float rad_angle[3])
		{
			int i=0;
					
	
	
	
	
	
	void main()
	{
		//function to give basic instruction to user and fetching no. spheres from use
	
		printf("this is a program that will answer E.M(engineering mechanics) problem related to spheres.\n1)This program is capable to find resultant reactions of diffrent spheres which are placed adjacent or above each other.\n2)it can find also find net forces experineced by different spheres.\nNow plz provide the data required");
		
		rad(3);
		cen_disp(3);
		weight(3);
		calc(3,disp[a],radius[a]);
		resulatant(3,disp[3],radius[3],rad_angle[3]);
	}
