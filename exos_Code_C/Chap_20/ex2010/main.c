#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct actions {
		char symbol[5];
		int quantite;
		float cours;
		struct actions *asuiv;
	};
	struct actions *aprems;
	struct actions *acour;
	struct actions *anouv;

	/*creation structure en memoire*/
	aprems=(struct actions *)malloc(sizeof(struct actions));
	if(aprems==NULL)
	{
		puts("erreur malloc()");
		exit(1);
	}
	/* remplissage */
	acour = aprems;
    strcpy(acours -> symbol,"GOOG");
	acour->quantite=100;
	acurrent->cours=801.19;
	acour->asuiv = NULL;

	/* allocate the next structure */
	acurrent->anext=\
		 (struct actions *)malloc(sizeof(struct actions)*1);
	if(acurrent->anext==NULL)
	{
		puts("Another malloc() error");
		exit(1);
	}
	/* reference the new structure */
	acurrent=acurrent->next;
	strcpy(current->symbol,"MSFT");
	acurrent->quantite=67;
	acurrent->price=183.16;
	/* cap the end of the list */
	current->next=NULL;

	/* outupt database */
	puts("Investment Portfolio");
	printf("Symbol\tShares\tPrice\tValue\n");
	current=first;
	while( current )
	{
		printf("%-6s\t%5d\t%.2f\t%.2f\n",
				current->symbol,
				current->quantite,
				current->price,
				current->quantite*current->price);
		current=current->next;
	}

	return(0);
}
