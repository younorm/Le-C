#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct famille{
    char *nom;
    char *prenom;
    int age;
    struct famille *fsuiv;
    };

struct famille *fprems;
struct famille *fcurrent;
struct famille *fnouv;

int menu(void);
void ajouter(void);
void montrer(void);
void supprimer(void);
struct famille *creer(void);


/* La fonction main() ne se charge que de la saisie.
    Le reste se trouve dans les fonctions */

int main()
{
    int choixmenu='\0';  // initialise la boucle while
    fprems=NULL;
    while(choixmenu!='Q')
    {
         choixmenu=menu();
        switch (choixmenu)
    {
        case 'M':
            montrer();
            break;
        case 'A':
            ajouter();
            break;
        case 'S':
            supprimer;
            break;
        case 'Q':
            break;
    }

    }

    return (0);
}

// Affiche le menu et collecte le choix en majuscule

int menu(void)
{
    int ch;

    printf("M)ontrer,\nA)jouter,\nS)upprimer\nQ)uitter\nreponse : ");
    ch=getchar();
        while(getchar()!='\n'); // Ignore la saisie superflue ( quitte à enter )

            return(toupper(ch));
}

// Ajoute un menbre à la liste

void ajouter(void)
{
    if(fprems==NULL) // Cas unique de fprems
    {
        fprems = creer();
        fcurrent = fprems;
    }
    else            // cherche la derniere entrée
        {
            fcurrent = fprems;
    while(fcurrent->fsuiv)  //  derniere entrée == NULL
        fcurrent = fcurrent->fsuiv;
    fnouv = creer();
    fcurrent->fsuiv = fnouv;    // Actualise le lien
    fcurrent = fnouv;
         }

    printf("Votre nom de famille ? : ");
    scanf("%s", fcurrent->nom);
    printf("Votre prenom ? : ");
    scanf("%s", fcurrent->prenom);
    printf("Votre age ? : ");
    scanf("%d", &fcurrent->age);
    fcurrent->fsuiv = NULL;
    while(getchar()!='\n');
}


void montrer(void)
{
    int compt=1;
    if(fprems==NULL)  //liste vide
    {
        printf("rien a afficher");
    }
        puts("Liste complete : \n");
        fcurrent = fprems;
    while(fcurrent) // dernier NULL
    {
        printf("Enregistrement %d:\n",compt);
        printf("%s,\n",fcurrent->nom);
        printf("%s,\n",fcurrent->prenom);
        printf("%d ans",fcurrent->age);
        fcurrent = fcurrent->fsuiv;
        compt++;
    }
}

void supprimer(void)
{
    struct famille *fprecedente; //Sauve l'enregistrement d'avant
    int r,c;

    if(fprems==NULL)        // teste si la liste est vide
    {
        puts("Aucun enregistrement dans famille dataBase ! ");
        return;
    }
    puts("Choisissez quel enregmt. supprimer :");
    montrer();
    printf("Enregistrement : ");
    scanf("%d",&r);
    while(getchar()!='\n'); //ignore la saisie superflue
    c=1;
    fcurrent = fprems;
    fprecedente = NULL;     //pas de precedent au prems
    while(c!=r)
    {
        if(fcurrent==NULL)      //teste si r est dans la plage
        {
            puts("Enreg. introuvable");
            return;
        }
        fprecedente = fcurrent;
        fcurrent = fcurrent->fsuiv;
        c++;
    }
    if(fprecedente==NULL)       // cas unique de 1er enreg.
        fprems = fcurrent->fsuiv;
    else
        fprecedente->fsuiv =  fcurrent->fsuiv;
    printf("l'enreg. %d n'existe plus.\n",r);
    free(fcurrent);        //restitue la memoire
}


// Construit une structure vide et renvoie son adresse
struct famille *creer(void)
{
 struct famille *a;

 a = (struct famille *)malloc(sizeof(struct famille));
 if(a==NULL)
 {
     puts("Erreur malloc");
     exit(1);
}
    return (a);
}
