
#include <stdio.h>

int main()
{
    char risposta;
    printf("PROVA TITOLOOO\n");
    printf("sjf boh inizio storia\n?");
    printf("sbarca mc, vede gusardie e dintorni, incontra tipo gang e gli chiede il nome riconoscendo come mercenario\n");
    printf("tizio: 'quindi che fai, accetti?'\n\na. accetto.\nb.assolutamente no.\n");
    scanf("%c", &risposta);

    if(risposta == 'b')
    {
    printf("BAD ENDING\ndecidi di non aiutarlo.però, appena rifiuti, tira velocemente fuoriuna pistola e ti spara in testa. Improvvisamente tutto diventa buio. avresti dovuto fare più attenzione, user.\n");
    }
   
    else if(risposta == 'a')
    {
        printf("'ottima scelta.' ti dice. qualcosa ti fa pensare che se avessi rifiutato la scelta di questa stramba figura qualcosa veramente di pessimo sarebbe accaduto.\nMa ormai, dopo tutti questi anni spesi a vagare per le città con la speranza di riuscire a guadagnare abbastanza per sopravvivere, sei disposto a fare di tutto pur di ricevere qualche soldo.\n");
    }
}