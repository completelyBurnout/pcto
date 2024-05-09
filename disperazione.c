#include <stdio.h>
#include <string.h>


int main() 
{
    char nome[50];
    char cognome[50];
    char genere[20];
    int eta;
    char data_nascita[20];
    char zona;
    char istruzione;
    char ulteriore_istruzione[30];
    char interessi_lavorativi[200];
    char laurea;
    char azienda1;
    char azienda2;
    char azienda3;
    char azienda4;
    char certif;
    char ingl[3];

    // Intestazione
    printf("Benvenuto! Per favore, inserisci le informazioni richieste:\n");

    // Richiesta del nome e cognome
    printf("Nome: ");
    scanf("%s", nome);
    printf("Cognome: ");
    scanf("%s", cognome);

    // Richiesta del genere con controllo
    while(1) 
    {
        printf("Genere (Maschio/Femmina/Altro): ");
        scanf("%s", genere);
        if ((genere, "Maschio") || (genere, "Femmina") || (genere, "Altro")) 
        {
            break;
        } 
        else 
        {
            printf("Inserisci un genere valido.\n");
        }
    }

    // Richiesta dell'età con controllo
    while(1) 
    {
        printf("Età: ");
        scanf("%d", &eta);
        if (eta >= 16 && eta <= 100) 
        {
            break;
        }
        
        else 
        {
            printf("Inserisci un'età valida.\n");
        }
    }

    // Richiesta della data di nascita
    printf("Data di nascita (GG/MM/AAAA): ");
    scanf(" %s", data_nascita);

    // Richiesta della zona di residenza
    
    printf("\nProvincia di residenza:\n\na)Roma (RM)\nb)Frosinone (FR)\nc) latina (LT)\nd)Viterbo (VT)\ne)Milano (MI)\nf)Firenze (FI)\ng)Siena (SI)\n\n*queste sono le uniche provincie nelle quali risiedono le aziende che promuoviamo.\n\n");
    scanf("     %c", &zona);

    if ((zona=='a') || (zona=='b') || (zona=='c') || (zona=='d') || (zona=='e') || (zona=='f') || (zona=='g'))
    {
        goto livistruzione;
    }
    else
    {
        printf("provincia errata. riprovare./n");
    }

    // Richiesta del livello di istruzione ricevuta con controllo
    while(1)
    {
        livistruzione:
        printf("Livello di istruzione ricevuta:\na) Scuola superiore\nb) Laurea triennale\nc) Laurea magistrale\nd) Master\ne) Dottorato\nf) specializzazione\ng) Scuola Professionale\nh) Nessuna di queste:\n");
        scanf(" %c", &certif);
        if ((istruzione=='b') || (istruzione=='c') || (istruzione=='d') || (istruzione=='e') || (istruzione=='f')  || (istruzione=='g'))
        {
            if((istruzione=='b') || (istruzione=='c') || (istruzione, "d") || (istruzione, "e") || (istruzione, "f"))
            {
                printf("\nseleziona ambito laurea:\n\na)Economia e Commercio\nb)Giurisprudenza\nc)Ingegneria\nd)Scienze della Comunicazione\ne)Scienze della Formazione\nf)Scienze dell'Educazione\ng)Scienze dell'Economia\nh)Scienze della Salute\ni)Scienze Matematiche\nj)Scienze Naturali\nk)Scienze Psicologiche\nl)Scienze Sociali\nm)Biologia\nn)Chimica\no)Fisica\np)Informatica\nq)Lingue e Culture Straniere\nr)Medicina\ns)Architettura\nt)Agraria\nu)Scienze del Turismo\nv)Scienze dei Beni Culturali\nw)Scienze Motorie\nx)Scienze Gastronomiche\ny)Scienze Politiche\n\n");
                scanf(" %c", &laurea);
                if ((laurea=='e') || (laurea=='f') || (laurea=='h') || (laurea=='j') || (laurea=='k') || (laurea=='n') || (laurea=='q') || (laurea=='s') || (laurea=='t') || (laurea=='u') || (laurea=='v') || (laurea=='w') || (laurea=='x'))
                {
                    printf("\n\nPurtroppo al momento non sono disponibili lavori che richiedono le tue competenze accademiche.\n Prova di nuovo in un'altro momento.\n");
                    break;
                }
                else
                {
                    printf(" \n\n\n");
                    goto istruzioneult;
                }

                
            }
        }
        
        else 
        {
            printf("Inserisci un livello di istruzione valido.\n");
        }
    }

        

            // Richiesta di ulteriore istruzione con controllo

        while(1)
        {
            istruzioneult:
            printf("Interessato a ulteriore istruzione? (Si/No): ");
            scanf("  %s", ulteriore_istruzione);
            if (strcmp(ulteriore_istruzione,"Si" )== 0 || strcmp(ulteriore_istruzione,"No" ) == 0)
            {
                break;
            }
            else
            {
                printf("Risposta non valida. Inserisci 'Si' o 'No'.\n");
            }
        }

    while(1)//CERTIFICAZIONI INGLESE
    {
        printf("Hai una certificazione di lingua inglese? (Si/No): ");
        scanf("  %s", ingl);
        if (strcmp(ingl,"Si" )== 0)
        {
            printf("quale?\n\na)Cambridge English: Proficiency (CPE)\nb)Cambridge English: Advanced (CAE)\nc)Cambridge English: First (FCE)\nd)Cambridge English: Preliminary (PET)\ne)Cambridge English: Key (KET)\nf)Certified Business English (BEC)\ng)IELTS (International English Language Testing System)\nh)TOEFL (Test of English as a Foreign Language)\ni)TOEIC (Test of English for International Communication)\nj)PTE Academic (Pearson Test of English Academic)\nk)Michigan English Language Assessment Battery (MELAB)\nl)Trinity College London Certificates\nm)ACTFL (American Council on the Teaching of Foreign Languages) OPIc (Oral Proficiency Interview)\nn)SAT (Scholastic Aptitude Test e Scholastic Assessment Test)\no)A1\np)A2\nq)B1\nr)B2\ns)C1\nt)C2\n\n");
            scanf(" %c", &certif);

            break;
        }
        else if(strcmp(ingl,"No" ) == 0)
        {
            break;
        }
        else
        {
            printf("Risposta non valida. Inserisci 'Si' o 'No'.\n");
        }
    }


       

        // Richiesta degli interessi lavorativi
        printf("Interessi lavorativi: ");
        scanf(" %s", interessi_lavorativi);

        // Profilo dell'utenteb
        //printf("\n\n-- Profilo Utente --\n");
        //printf("Nome: %s %s\n", nome, cognome);
        //printf("Genere: %s\n", genere);
        //printf("Età: %d\n", eta);
        //printf("Data di nascita: %s\n", data_nascita);
        //printf("Zona di residenza:  %c\n", zona);
        //printf("Livello di istruzione:  %c\n", istruzione);
        //printf("Ulteriore istruzione: %s\n", ulteriore_istruzione);
        //printf("Interessi lavorativi: %s\n", interessi_lavorativi);

        printf("\n\nIl lavoro che abbiamo trovato per te è il seguente:\n\n");

        if ((eta>=18) && (zona=='a' || zona=='c' || zona=='e') && ((istruzione=='b') || (istruzione=='c') || (istruzione=='d') || (istruzione=='e') || (istruzione=='f')  || (istruzione=='g')) && (laurea=='a'||laurea=='c'||laurea=='d'||laurea=='g'||laurea=='i'||laurea=='p'))
        {
            printf("basandoci su i tuoi risultati, l'azienda che più si addice a te è Azienda 1, specializzata nella tecnologia e l'uso di computer.");
        }
        
        else if ((eta>=18) && (zona=='a' || zona=='d' || zona=='e' || zona=='f') && (istruzione=='b' || istruzione=='f' || istruzione=='c' || istruzione=='d' || istruzione=='e') && (laurea=='a'||laurea=='c'||laurea=='d'||laurea=='g'||laurea=='i'||laurea=='l'||laurea=='o'))
        {
            printf("basandoci su i tuoi risultati, l'azienda che più si addice a te è Azienda 2, specializzata nella tecnologia e vendita di radar per aerei.");
        }
        else if ((eta>=18) && (zona=='a' || zona=='b' || zona=='e') && (istruzione=='b' || istruzione=='f' || istruzione=='c' || istruzione=='d' || istruzione=='e') && (laurea=='b'||laurea=='d'||laurea=='l'||laurea=='y'))
        {
            printf("basandoci su i tuoi risultati, l'azienda che più si addice a te è Azienda 3, specializzata nel campo legislativo e politico.");
        }
        else if ((eta>=18) && (zona=='a' || zona=='f' || zona=='e'||zona=='g') && (istruzione=='b' || istruzione=='f' || istruzione=='c' || istruzione=='d' || istruzione=='e') && (laurea=='r'||laurea=='m'))
        {
            printf("basandoci su i tuoi risultati, l'azienda che più si addice a te è Azienda 4, specializzata nell'ambiente medico sperimentale.");
        }
        
        else if (eta>=16)//alice pizza
        {
            printf("basandoci su i tuoi risultati, l'azienda che più si addice a te è un lavoro part time: lavoratore ad Alice Pizza");
        }
        else if (eta>=16 && (zona=='d'|| zona=='a' || zona=='f' || zona=='e'||zona=='g'))//rosso pomodoro
        {
            printf("basandoci su i tuoi risultati, l'azienda che più si addice a te è un lavoro part time: lavoratore a Rosso Pomodoro");
        }
        
        else
        {
            printf("Siamo spiacenti, ma non abbiamo trovato risultati per te.");
        }


    
    if(strcmp(ingl,"No" ) == 0)
    {
        printf("hai bisogno di sapere qual è il tuo livello di inglese e vuoi eventualmente migliorare? Facendo questo test, potrai capire quale corso dovrai seguire.");
        
    }
        

    

    
}