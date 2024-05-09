#include <stdio.h>
#include <string.h>

int main() {
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

    // Intestazione
    printf("Benvenuto! Per favore, inserisci le informazioni richieste:\n");

    // Richiesta del nome e cognome
    printf("Nome: ");
    scanf("%s", nome);
    printf("Cognome: ");
    scanf("%s", cognome);

    // Richiesta del genere con controllo
    while(1) {
        printf("Genere (Maschio/Femmina/Altro): ");
        scanf("%s", genere);
        if (strcmp(genere, "Maschio") == 0 || strcmp(genere, "Femmina") == 0 || strcmp(genere, "Altro") == 0) {
            break;
        } else {
            printf("Inserisci un genere valido.\n");
        }
    }

    // Richiesta dell'età con controllo
    while(1) {
        printf("Età: ");
        scanf("%d", &eta);
        if (eta >= 16 && eta <= 100) {
            break;
        } else {
            printf("Inserisci un'età valida.\n");
        }
    }

    // Richiesta della data di nascita
    printf("Data di nascita (GG/MM/AAAA): ");
    scanf("%s", data_nascita);

    // Richiesta della zona di residenza
    printf("\nProvincia di residenza:\n\na)Roma (RM)\nb)Frosinone (FR)\nc) latina (LT)\nd)Viterbo (VT)\ne)Milano (MI)\nf)Firenze (FI)\ng)Siena (SI)\n\n*queste sono le uniche provincie nelle quali risiedono le aziende che promuoviamo.\n\n");
    scanf(" %c", &zona);
    if (zona != 'a' && zona != 'b' && zona != 'c' && zona != 'd' && zona != 'e' && zona != 'f' && zona != 'g') {
        printf("provincia errata. riprovare.\n");
        return 1;
    }

    // Richiesta del livello di istruzione ricevuta con controllo
    printf("Livello di istruzione ricevuta:\n");
    printf("a) Scuola superiore\nb) Laurea triennale\nc) Laurea magistrale\nd) Master\ne) Dottorato\nf) specializzazione\ng) Scuola Professionale\nh) Nessuna di queste:\n");
    scanf(" %c", &istruzione);
    if (istruzione != 'a' && istruzione != 'b' && istruzione != 'c' && istruzione != 'd' && istruzione != 'e' && istruzione != 'f' && istruzione != 'g' && istruzione != 'h') {
        printf("Inserisci un livello di istruzione valido.\n");
        return 1;
    }

    // Richiesta di ulteriore istruzione con controllo
    ehno:
    printf("Interessato a ulteriore istruzione? (Si/No): ");
    scanf(" %s", ulteriore_istruzione);
    if (strcmp(ulteriore_istruzione, "Si") != 0 && strcmp(ulteriore_istruzione, "No") != 0) {
        printf("Risposta non valida. Inserisci 'Si' o 'No'.\n");
        goto ehno;
    }

    // Richiesta degli interessi lavorativi
    printf("Interessi lavorativi: ");
    scanf(" %s", interessi_lavorativi);

    // Profilo dell'utente
    printf("\n\n-- Profilo Utente --\n");
    printf("Nome: %s %s\n", nome, cognome);
    printf("Genere: %s\n", genere);
    printf("Età: %d\n", eta);
    printf("Data di nascita: %s\n", data_nascita);
    printf("Zona di residenza:  %c\n", zona);
    printf("Livello di istruzione:  %c\n", istruzione);
    printf("Ulteriore istruzione: %s\n", ulteriore_istruzione);
    printf("Interessi lavorativi: %s\n", interessi_lavorativi);

    // Logica del quiz
    printf("\n\nIl lavoro che abbiamo trovato per te è il seguente:\n\n");

    if ((eta >= 18) && ((zona == 'a' || zona == 'c' || zona == 'e') && (istruzione == 'b' || istruzione == 'c' || istruzione == 'd' || istruzione == 'e' || istruzione == 'f' || istruzione == 'g')) && (strcmp(ulteriore_istruzione, "No") == 0)) {
        printf("Basandoci sui tuoi risultati, l'azienda che più si addice a te è Azienda 1, specializzata nella tecnologia e l'uso di computer.\n");
    } else if ((eta >= 18) && ((zona == 'a' || zona == 'd' || zona == 'e' || zona == 'f') && (istruzione == 'b' || istruzione == 'f' || istruzione == 'c' || istruzione == 'd' || istruzione == 'e') && (strcmp(ulteriore_istruzione, "No") == 0))) {
        printf("Basandoci sui tuoi risultati, l'azienda che più si addice a te è Azienda 2, specializzata nella tecnologia e vendita di radar per aerei.\n");
    } else if ((eta >= 18) && ((zona == 'a' || zona == 'b' || zona == 'e') && (istruzione == 'b' || istruzione == 'f' || istruzione == 'c' || istruzione == 'd' || istruzione == 'e') && (strcmp(ulteriore_istruzione, "No") == 0))) {
        printf("Basandoci sui tuoi risultati, l'azienda che più si addice a te è Azienda 3, specializzata nel campo legislativo e politico.\n");
    } else if ((eta >= 18) && ((zona == 'a' || zona == 'f' || zona == 'e' || zona == 'g') && (istruzione == 'b' || istruzione == 'f' || istruzione == 'c' || istruzione == 'd' || istruzione == 'e') && (strcmp(ulteriore_istruzione, "No") == 0))) {
        printf("Basandoci sui tuoi risultati, l'azienda che più si addice a te è Azienda 4, specializzata nell'ambito medico sperimentale.\n");
    } else if (eta >= 16) {
        printf("Basandoci sui tuoi risultati, l'azienda che più si addice a te è un lavoro part time: lavoratore ad Alice Pizza.\n");
    } else if (eta >= 16 && (zona == 'd' || zona == 'a' || zona == 'f' || zona == 'e' || zona == 'g')) {
        printf("Basandoci sui tuoi risultati, l'azienda che più si addice a te è un lavoro part time: lavoratore a Rosso Pomodoro.\n");
    } else {
        printf("Siamo spiacenti, ma non abbiamo trovato risultati per te.\n");
    }

    printf("\n\n\n\n\nWelcome to the English Grammar Quiz!\n\n");

    // Define questions and answers
    char *questions[20] = {
        "1. What is the plural form of 'child'?\n a) childs\n b) childes\n c) children\n",
        "2. Which of the following is a preposition?\n a) run\n b) on\n c) jump\n",
        "3. What is the past tense of 'go'?\n a) went\n b) goed\n c) good\n",
        "4. Quale tempo verbale viene utilizzato per esprimere azioni che sono state completate nel passato?\n a) Present simple\n b) Past simple\n c) Present continuous\n d) Future simple\n",
        "5. Qual è l’opzione corretta per completare la seguente frase: “I ___ to the cinema last night.”\n a) go\n b) goes\n c) went\n d) going\n",
        "6. Quale di queste parole non è un avverbio di frequenza?\n a) rarely\n b) always\n c) quickly\n d) happy\n",
        "7. Qual è la forma comparativa corretta di “good”?\n a) more good\n b) better c) best d) gooder\n",
        "8. Quale di queste frasi è corretta grammaticalmente?\n a) She doesn’t never go to the gym.\n b) She doesn’t go never to the gym.\n c) She never doesn’t go to the gym.\n d) She never goes to the gym.\n",
        "9. Qual è il significato di “to hit the nail on the head”?\n a) Fare un errore\n b) Indovinare la soluzione esatta c)\n Essere fortunati\n d) Essere imprecisi",
        "10. Qual è il significato di “to give someone the benefit of the doubt”?\n a) Non credere a qualcosa\n b) Dare a qualcuno il beneficio del dubbio\n c) Essere sicuri di qualcosa\n d) Non prendere in considerazione l’opinione altrui\n",
        "11. Quale parola si traduce in 'barca'\n a) beach\n b) Ship\n c) Sheep\n d) Sing",
        "12. Quale di queste opzioni descrive meglio il significato di “to feel under the weather”?\n a) Stare molto bene\n b) Star male\n c) Essere stressati\n d) Sentirsi al sicuro\n",
        "13. Quale di queste frasi è corretta dal punto di vista grammaticale?\n a) They has been to Paris three times.\n b) They have been to Paris three times.\n c) They has have been to Paris three times.\n d) They have has been to Paris three times.\n",
        "14. Choose the correct phrasal verb to complete the sentence: I need to _ my shoes before going out.\n a. put on\n b. take off\n put off\n",
        "15. What is the plural form of the word 'mouse'? a. mouses\n b. mice\n c. mices\n",
        "16. Complete the sentence with the correct form of the word: She is a very _ teacher.\n a. inspire\n b. inspired\n c. inspiring\n",
        "17. Fill in the blank with the correct word: The company's profits have ___ significantly in the last quarter.\n a) Risen\n b) Rose\n c) Rising\n",
        "18. Choose the correct form of the irregular verb 'to choose' in the past tense:\n a) Choosed\n b) Chose\n c) Choose\n",
        "19. Which of the following sentences is grammatically incorrect?\n a) She is a good singer and a talented dancer.\n b) He speaks Spanish, French, and Italian fluently.\n c) The car needs washed before we can drive it.\n",
        "20. Choose the correct synonym for the word 'elaborate':\n a) Simple\n b) Intricate\n c) Basic\n",
    };

    char answers[20] = {'c', 'b', 'a', 'b', 'c', 'd', 'b', 'd', 'b', 'b', 'b', 'b', 'b', 'a', 'b', 'c', 'a', 'b', 'c', 'b'};  // risposte

    // Initialize score
    int score = 0;

    // Start the quiz
    int question_num = 0;
    while (question_num < 20) {
        printf("%s", questions[question_num]);
        char user_answer[2];
        printf("Your answer: ");
        scanf("%s", user_answer);

        if (strcmp(user_answer, &answers[question_num]) == 0) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Incorrect!\n\n");
        }
        question_num++;
    }

    // Estimate English level based on score
    char *level;
    if (score >= 16) {
        level = "Advanced";
    } else if (score >= 11) {
        level = "Intermediate";
    } else {
        level = "Beginner";
    }

    // Display the result
    printf("Quiz completed!\n\n");
    printf("Your score: %d out of 20\n", score);
    printf("Your English level: %s\n", level);

    return 0;
}

