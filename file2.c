#include <stdio.h>


int main() {
    char nome[50];
    char cognome[50];
    char genere[20];
    int eta;
    char data_nascita[20];
    char zona;
    char istruzione[50];
    char ulteriore_istruzione[3];
    char interessi_lavorativi[200];

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
    scanf("%s", data_nascita);

    // Richiesta della zona di residenza
    printf("\nProvincia di residenza*:\n\na)Roma (RM)\nb)Frosinone ()\nc) latina ()\nd)Viterbo ()\ne)Milano ()\nf)Firenze ()\ng)Siena ()\n\n*queste sono le uniche provincie nelle quali risiedono le aziende che promuoviamo.\n\n");
    scanf("%c", &zona);

    // Richiesta del livello di istruzione ricevuta con controllo
    while(1)
    {
        printf("Livello di istruzione ricevuta:\nScuola superiore\nLaurea triennale\nLaurea magistrale\nMaster\nDottorato\nspecializzazione\nScuola Professionale\nNessuna di queste):");
        scanf("%s", istruzione);
        if ((istruzione, "Laurea triennale") || (istruzione, "Specizlizzazione") || (istruzione, "Scuola superiore") || (istruzione, "Laurea magistrale") || (istruzione, "Master")  || (istruzione, "Dottorato") || ("Scuola Professionale") || ("Nessuna di queste"))
        {
            break;
        }
        
        else 
        {
            printf("Inserisci un livello di istruzione valido.\n");
        }
    }

    // Richiesta di ulteriore istruzione con controllo
    while(1)
    {
        printf("Interessato a ulteriore istruzione? (Si/No): ");
        scanf("%s", ulteriore_istruzione);
        if (strcmp(ulteriore_istruzione, "Si") == 0 || strcmp(ulteriore_istruzione, "No") == 0)
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
    scanf("%s", interessi_lavorativi);

    // Profilo dell'utenteb
    printf("\n\n-- Profilo Utente --\n");
    printf("Nome: %s %s\n", nome, cognome);
    printf("Genere: %s\n", genere);
    printf("Età: %d\n", eta);
    printf("Data di nascita: %s\n", data_nascita);
    printf("Zona di residenza: %s\n", zona);
    printf("Livello di istruzione: %s\n", istruzione);
    printf("Ulteriore istruzione: %s\n", ulteriore_istruzione);
    printf("Interessi lavorativi: %s\n", interessi_lavorativi);
}