
#include <stdio.h>

int main()
{
    char risposta;
    printf("HARKINS, 2756.\n\n");
    printf("Il sole è ormai quasi tramontato.\n dopo una lunga giornata di viaggio nel torbido mare di Erian, il mondo conosciuto, e dopo così tato tempo nel vuoto noti da lontano la tua destinazione. Harkins. La città portuale più grande di tutto il nord.\n Ovviamente sai gia cosa ti aspetta.\n Cos'è un porto se non un pericoloso ingarbuglio di talentuosi crfiminali? Eppure, a ciò non fai nemmeno più caso. Sei lì per un motivo, dopotutto. Quello strano uomo voleva incontrarti, e per soldi faresti questo ed altro. Ne hai bisogno. Ed onestamente, sei anche molto incuriosito da ciò che un'uomo così sospetto vorrebbe chiedere a qualcuno come te. Ma solo il tempo potra rispondere alle tue domande.");
    printf("Improvvisamente la forte sirena della nave interrompe i tuoi pensieri. Finalmente hai raggiunto Harkins. La nave si ferma e si aggancia al porto. Non puoi fare altro che sospirare.\n Non puoi fare a meno di girarti verso il mare per un'ultima volta. Per qualche motivo la vista del misterioso orizzonte ti aveva sempre portato comforto.\nPerò ora devi concentrarti sul tuo obbietivo. Così, con attenzione, la figura di colui che dovevi incontrare. Lo approcci con cautela, e per qualche ragione l'undividuo ti riconosce immediatamente.\n\n 'ah, sei tu.' dice. 'sei arrivato prima del previsto. Ho un lavoretto per te. Saresti disposto ad accettare? QUalcuno che conosco è stato rapito. mi serve qualcuno disposto a darmi una mano a salvarlo. Posso pagarti bene.'\n\n");
    printf(" 'quindi che fai, accetti?'\n\na. 'si, accetto.'\nb.  'assolutamente no.'\n\n");
    scanf("%c", &risposta);

    if(risposta == 'b')
    {
    printf("BAD ENDING 1\ndecidi di non aiutarlo. però, appena rifiuti, quell'uomo tira velocemente fuori una pistola e ti spara in testa. Improvvisamente tutto diventa buio. avresti dovuto fare più attenzione.\n");
    }
   
    else if(risposta == 'a')
    {
        printf("'ottima scelta.' mormora sogghignando. qualcosa ti fa pensare che se avessi rifiutato la scelta di questa stramba figura qualcosa veramente di pessimo sarebbe accaduto.\nMa ormai, dopo tutti questi anni spesi a vagare per le città con la speranza di riuscire a guadagnare abbastanza per sopravvivere, sei disposto a fare di tutto pur di ricevere qualche soldo.\n");
        printf("'qual'è il tuo nome, mio caro viaggiatore?1");
       char nomeutente[50];
       scanf("%s", nomeutente);
       
       scanf("%[^n]s", nomeutente); 
       printf("chiamami %[^ns]", nomeutente);



















































    }


}