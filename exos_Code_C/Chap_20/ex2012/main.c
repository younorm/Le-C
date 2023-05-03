/* An interactive linked-list program */
/* Dan Gookin, C Programming For Dummies */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct tipik {
	int maval;
	struct tipik *asuiv;
};
struct tipik *aprems;
struct tipik *acurrent;
struct tippik *anew;

int menu(void);
void add(void);
void show(void);
void delrec(void);
struct tipik *create(void);

/* the main function works with input only
	  everything else is handled by a function */
int main()
{
	/* initialize variables */
	int choice='\0';
	aprems=NULL;

	while(choice!='Q')
	{
		choice=menu();
		switch (choice)
		{
			case 'S':
				show();
				break;
			case 'A':
				add();
				break;
			case 'R':
				delrec();
				break;
			case 'Q':
				break;
		}
	}

	return(0);
}

/* output the main menu and collect input */
int menu(void)
{
	int ch;

	printf("S)how, A)dd, R)emove, Q)uit: ");
	ch=getchar();
	/* delete excess input */
	while(getchar()!='\n')
		;
	return(toupper(ch));
}

/* add an item to the end of the linked list */
void add(void)
{
	/* special case for the first item */
	if(aprems==NULL)
	{
		aprems = create();
		acurrent = aprems;
	}
	/* otherwise, find the last item */
	else
	{
		acurrent=aprems;
		/* find the NULL */
		while(acurrent->asuiv)
			acurrent=acurrent->asuiv;
		anew=create();
		acurrent->asuiv=anew;
        acurrent = anew;
	}
	printf("Type a value: ");
	scanf("%d",&acurrent->maval);
	acurrent->asuiv=NULL;
	/* delete excess input */
	while(getchar()!='\n')
		;
}

/* output all structures in the linked list */
void show(void)
{
	int count=1;

	/* is the list empty? */
	if(aprems==NULL)
	{
		puts("Nothing to show");
		return;
	}
	puts("Showing all records:");
	acurrent=aprems;
	/* loop until current==NULL */
	while( acurrent)
	{
		printf("Record %d: %d\n",
				count,acurrent->maval);
		acurrent=acurrent->asuiv;
		count++;
	}
}

/* delete a record from the list */
void delrec(void)
{
	/* the previous record must be saved */
	struct tipik *previous;
	int r,c;

	/* is the list empty? */
	if(aprems==NULL)
	{
		puts("No records to remove");
		return;
	}

	puts("Choose a record to remove:");
	/* output the list */
	show();
	printf("Record: ");
	scanf("%d",&r);
	/* delete excess input */
	while(getchar()!='\n')
		;
	c=1;
	/* reset the list */
	acurrent = aprems;
	/* initialize the previous pointer */
	previous=NULL;
	while(c!=r)
	{

		/* bail on the end of the list */
		if(acurrent==NULL)
		{
			puts("Record not found");
			return;
		}
		previous=acurrent;
		acurrent=acurrent->asuiv;
		c++;
	}
	/* 'current' holds the record to delete */
	/* is it the first record? */
	if(previous==NULL)
		aprems=acurrent->asuiv;
	/* otherwise, reset the next reference */
	else
		previous->asuiv=acurrent->asuiv;
	printf("Record %d removed.\n",r);
	/* libere la memoire */
	free(acurrent);
}

/* construit une nouvellle structure et renvoie son adresse */
struct tipik *create(void)
{
	struct tipik *a;

	a=(struct tipik *)malloc(sizeof(struct tipik)*1);
	if(a==NULL)
	{
		puts("Some kind of malloc() error");
		exit(1);
	}

	return(a);
}
