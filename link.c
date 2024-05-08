
#include <stdio.h>

int main()
{
    char risposta;
    printf("HARKINS, 2756.\n\n");
    printf("Il sole è ormai quasi tramontato.\n dopo una lunga giornata di viaggio nel torbido mare di Erian, il mondo conosciuto, e dopo così tato tempo nel vuoto noti da lontano la tua destinazione. Harkins. La città portuale più grande di tutto il nord.\n Ovviamente sai gia cosa ti aspetta.\n Cos'è un porto se non un pericoloso ingarbuglio di talentuosi crfiminali? Eppure, a ciò non fai nemmeno più caso. Sei lì per un motivo, dopotutto. Quello strano uomo voleva incontrarti, e per soldi faresti questo ed altro. Ne hai bisogno. Ed onestamente, sei anche molto incuriosito da ciò che un'uomo così sospetto vorrebbe chiedere a qualcuno come te. Ma solo il tempo potra rispondere alle tue domande.");
    printf("Improvvisamente la forte sirena della nave interrompe i tuoi pensieri. Finalmente hai raggiunto Harkins. La nave si ferma e si aggancia al porto. Non puoi fare altro che sospirare.\n Non puoi fare a meno di girarti verso il mare per un'ultima volta. Per qualche motivo la vista del misterioso orizzonte ti aveva sempre portato comforto.\nPerò ora devi concentrarti sul tuo obbietivo. Così, con attenzione, la figura di colui che dovevi incontrare. Lo approcci con cautela, e per qualche ragione l'undividuo ti riconosce immediatamente.\n\n 'ah, sei tu.' dice. 'sei arrivato prima del previsto. Ho un lavoretto per te. Saresti disposto ad accettare? QUalcuno che conosco è stato rapito. mi serve qualcuno disposto a darmi una mano a salvarlo. Posso pagarti bene.'\n\n");
    printf(" 'quindi accetti?'\n\na. 'si, accetto.'\nb.  'assolutamente no.'\n\n");
    scanf("%c", &risposta);

    if(risposta == 'b')
        {
            printf("BAD ENDING 1\ndecidi di non aiutarlo. però, appena rifiuti, quell'uomo tira velocemente fuori una pistola e prima che tu possa reagire e tirare fuori il tuo fidato coltello un forte sparo rimbomba per tutto il porto. Improvvisamente tutto diventa buio. avresti dovuto fare più attenzione.\n");
        }
   
    else if(risposta == 'a')
        {
            char risposta2;
            printf("'ottima scelta.' mormora sogghignando. qualcosa ti fa pensare che se avessi rifiutato la scelta di questa stramba figura qualcosa veramente di pessimo sarebbe accaduto.\nMa ormai, dopo tutti questi anni spesi a vagare per le città con la speranza di riuscire a guadagnare abbastanza per sopravvivere, sei disposto a fare di tutto pur di ricevere qualche soldo.\n");
            printf("'qual'è il tuo nome, mio caro viaggiatore?");
    //INSERISCI ROBA NOME

            printf("roba roba roba arriva casa");
            printf("scegli se a. giro casa o b. vai da guardie");
            scanf("%c", &risposta2);
            char risposta1;

            if(risposta2 == 'a')
            {
                
                 if(risposta1=='b') //continua
                    {
                        printf("hai deciso di non avventurarti attorno all'edificio. ora devi decidere la sreategia contro le guardie:\n a) sono nemici: devi ucciderli o evitarli, non puoi avere un dialogo con loro\n b)due contro uno non è possiile, sono armati e più forti; decidi di fingerti uno di loro ed entrare così.\n");
                        char risposta2;
                        scanf("%c", &risposta2);
           
                        if (risposta2=='b') //muori
                            {
                                printf("Le guardie non ti riconoscono, sanno che non fai parte della loro banda e che gli stai mentendo. Ti uccidono.");
                            }

                        else if (risposta2=='a') //continua
                            {
                                printf("hai bisogno di un'altra strategia:\n a) attaccali: hai un coltello, con l'effetto sorpresa ce la puoi fare\n b) non puoi sconfiggerli: li distrai lanciando dei sassi lontano per fare rumore");
                                    char risposta3;
                                scanf("%c", &risposta3);

                                    if (risposta3=='a') //muori
                                        {
                                            printf("hai fatto male i calcoli: sono molto piu forti di te. uno di loro ti squarcia la gola con un coltello.");
                                        }

                                    else if(risposta3=='b') //continua
                                        {  
                                            printf("Le guardie, sentendo i rumori, si allontanano e tu puoi entrare indisturbato. Ora sei in un ingresso a pianta quadrata e, su ogni muro davanti a te, c'è una porta: a sinistra verde, davanti rossa e a destra viola.\n Su ogni porta è disegnata una fiamma. Chissà, forse è un indizio? del resto, anche il tizio misterioso ti aveva parlato di fuoco e tutto questo sembra essere una trappola.\nDevi scegliere una porta, ma con attenzione: potrebbe esserci un allarme o qualche trucco letale.\nScegli una porta, con attenzione:\na)verde\nb)rossa\nc)viola\n");
                                            char risposta4;
                                            scanf("%c", &risposta4);

                                            if(risposta4=='a')//muori
                                                {
                                                    printf("suona una rumorosa allarme: una dozzina di uomini armati arriva dalla porta d'ingresso e da quella rossa e ti uccide");
                                                }
                                            else if(risposta4=='c')//muori
                                                {
                                                    printf("la porta ti esplode interamente addosso e muori");
                                                }
                                            else if(risposta4=='b')
                                                {
                                                printf("l");
                                                }
                                        }
                            } 

                    }
            
            else if(risposta2 == 'a')
                {
                    char risposta9;
                    printf("analizzi i dintorni della casa con prudenza noti finestra raggiungibile tramite ramo, ma chiusa con serratura, e dopo ecc trovi materiali. il resistente filo di ferro, vicino ad una rotta tubatura, un martello dentro un cespuglio, ed il coltello personale.");
                    printf("cosa decidi di utilizzare? a. il coltello\nb. il filo di ferro\nc. il martello");
                    scanf("%c", &risposta9);
                    printf("ti arrampichi sull'albero, arrivi al ramo e provi ad entrare.");
        
                    if(risposta9 == 'a')
                        {
                            printf("provi ad usare coltello ma non funziona.");
                            return;
                        }

                    else if(risposta9 == 'b')
                        {
                            char risposta10;
                            printf("usi il fil di ferro e boom scassini la serratura. buona idea ecc\n");
                            printf("entri in corridoio in cui fine porta verde ma oops è collegato ad allarme.\n sbrigate.\n ce sta un generatore da cui sicuri parte l'allarme. tre fili, uno devi tagliare. rosso, blu, nero\n");
                            printf("a. rosso\nb. blu\nc. nero\n");
                            scanf("%c", &risposta10);
                            if(risposta10 == 'c')
                            {
                                printf("cazzi tuoi. la roba esplode e schiatti malissimo.\n");
                            }
                            else if(risposta10 == 'b')
                            {
                                printf("ndovina? si attiva l'allarme, ti scoprono e ti distruggono.\n");
                            }
                            else if(risposta10 == 'a')
                            {
                                char risposta11;
                                printf("Daje! hai disattivato l'allarme e la porta si apre da sola.\n");
                                printf("entri e ce sta n'artro corridoio. sta volta però le porte sono 2.\n");
                                printf("quale provi ad aprire? a. quella gialla\nb. quella rossa\n");
                                scanf("%c", risposta11);

                                if (risposta11 == 'a')
                                {
                                    printf("la porta esplodi e rip rip muori.");
                                }
                                else if(risposta11 == 'b')
                                {
                                    printf("entri nel corridoio.");
                                    return risposta5;
                                }
                            }
                        }
                    else if(risposta9 == 'c')
                    {
                        printf("BAD ENDING\ncoglione. fai un frastuono della madonna e le guardie ti scoprono. inutile a dire che vieni ucciso.\n");
                    }

                }
                
            }


        }
}