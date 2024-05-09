#include <stdio.h>

int main()
{
    char risposta;
    char risposta1;
    char risposta2;
    char risposta3;
    char risposta4;
    char risposta5;
    char risposta6;
    char risposta7;
    char risposta8;
    char risposta9;
    char risposta10;
    char risposta11;
    char risposta12;
    char nomeutente[40];



    printf("HARKINS, 2756.\n\n");
    printf("Il sole è ormai quasi tramontato.\n dopo una lunga giornata di viaggio nel torbido mare di Erian, il mondo conosciuto, e dopo così tato tempo nel vuoto noti da lontano la tua destinazione. Harkins. La città portuale più grande di tutto il nord.\n Ovviamente sai gia cosa ti aspetta.\n Cos'è un porto se non un pericoloso ingarbuglio di talentuosi crfiminali? Eppure, a ciò non fai nemmeno più caso. Sei lì per un motivo, dopotutto. Quello strano uomo voleva incontrarti, e per soldi faresti questo ed altro. Ne hai bisogno. Ed onestamente, sei anche molto incuriosito da ciò che un'uomo così sospetto vorrebbe chiedere a qualcuno come te. Ma solo il tempo potra rispondere alle tue domande.");
    printf("Improvvisamente la forte sirena della nave interrompe i tuoi pensieri. Finalmente hai raggiunto Harkins. La nave si ferma e si aggancia al porto. Non puoi fare altro che sospirare.\n Non puoi fare a meno di girarti verso il mare per un'ultima volta. Per qualche motivo la vista del misterioso orizzonte ti aveva sempre portato comforto.\nPerò ora devi concentrarti sul tuo obbietivo. Così, con attenzione, la figura di colui che dovevi incontrare. Lo approcci con cautela, e per qualche ragione l'undividuo ti riconosce immediatamente.\n\n 'ah, sei tu.' dice. 'sei arrivato prima del previsto. Ho un lavoretto per te. Saresti disposto ad accettare? QUalcuno che conosco è stato rapito. mi serve qualcuno disposto a darmi una mano a salvarlo. Posso pagarti bene.'\n\n");
    printf(" 'quindi accetti?'\n\na. 'si, accetto.'\nb.  'assolutamente no.'\n\n");
    scanf("%c", &risposta);

    if (risposta == 'b')
    {
        printf("BAD ENDING 1\ndecidi di non aiutarlo. però, appena rifiuti, quell'uomo tira velocemente fuori una pistola e prima che tu possa reagire e tirare fuori il tuo fidato coltello un forte sparo rimbomba per tutto il porto. Improvvisamente tutto diventa buio. avresti dovuto fare più attenzione.\n");
    }

    else if (risposta == 'a')
    {
        printf("\n'ottima scelta.' mormora sogghignando. qualcosa ti fa pensare che se avessi rifiutato la scelta di questa stramba figura qualcosa veramente di pessimo sarebbe accaduto.\nMa ormai, dopo tutti questi anni spesi a vagare per le città con la speranza di riuscire a guadagnare abbastanza per sopravvivere, sei disposto a fare di tutto pur di ricevere qualche soldo.\n");
        printf("'qual'è il tuo nome, mio caro viaggiatore?\n");
        scanf(" %[^\n]s", nomeutente);
        printf("'chiamami %s'", nomeutente);
        printf("\n\nBene, %s. Ora inizia la tua missione. Per avere i 100.000 settentri d'oro dovrai addentrarti per i vicoli di Harkins e trovare un edificio rosso affiancato da una foresta. Ricordati, il fuoco è un tuo alleato.'\n\nDopo aver detto ciò l'individuo sparisce tra la folla.\n\n");

        //ER NOME

        printf("\n\nti inoltri quindi tra gli oscuri vicoli della città portuale ed arrivi al luogo indicato.\n\nè un edificio abbastanza nascosto, apparentemente abbandonato, dalle mura rosso cremisi circondato da una fitta foresta. Fai attenzione a i tuoi dintorni cercando di non venire scoperto da eventuali nemici.\n\n Scorgi la porta principale:\n è controllata da due guardie armate.\n\n");
        printf("scegli se\n\n a. approcci le guardie.\nb. provi a girare intorno alla casa per cercare un'entrata non sorvegliata.\n\n");
        scanf(" %c", &risposta12);

        if (risposta12 == 'a') //GUARDIE
        {
            coltello:
            printf("hai deciso di non avventurarti attorno all'edificio. ora devi decidere la sreategia contro le guardie:\n a) sono nemici: devi ucciderli o evitarli, non puoi avere un dialogo con loro\n b)due contro uno non è possiile, sono armati e più forti; decidi di fingerti uno di loro ed entrare così.\n");
            scanf(" %c", &risposta2);
            
            if (risposta2 == 'b') // continua
            
                
                scanf(" %c", &risposta2);

                if (risposta2 == 'b') // muori
                {
                    printf("Le guardie non ti riconoscono, sanno che non fai parte della loro banda e che gli stai mentendo.\n Ti uccidono.\n");
                }

                else if (risposta2 == 'a') // continua
                {
                    printf("hai bisogno di un'altra strategia:\n a) attaccali: hai un coltello, con l'effetto sorpresa ce la puoi fare\n b) non puoi sconfiggerli: li distrai lanciando dei sassi lontano per fare rumore");
                    
                    scanf(" %c", &risposta3);

                    if (risposta3 == 'a') // muori
                    {
                        printf("hai fatto male i calcoli: sono molto piu forti di te. uno di loro ti squarcia la gola con un coltello.\n");
                    }

                    else if (risposta3 == 'b') // continua
                    {
                        printf("Le guardie, sentendo i rumori, si allontanano e tu puoi entrare indisturbato. Ora sei in un ingresso a pianta quadrata e, su ogni muro davanti a te, c'è una porta: a sinistra verde, davanti rossa e a destra viola.\n Su ogni porta è disegnata una fiamma. Chissà, forse è un indizio? del resto, anche il tizio misterioso ti aveva parlato di fuoco e tutto questo sembra essere una trappola.\nDevi scegliere una porta, ma con attenzione: potrebbe esserci un allarme o qualche trucco letale.\nScegli una porta, con attenzione:\na)verde\nb)rossa\nc)viola\n");
                        scanf(" %c", &risposta4);

                        if (risposta4 == 'a') // muori
                        {
                            printf("suona una rumorosa allarme:\n una dozzina di uomini armati arriva dalla porta d'ingresso e da quella rossa e ti uccide");
                        }
                        else if (risposta4 == 'c') // muori
                        {
                            printf("la porta ti esplode interamente addosso e muori");
                        }
                        else if (risposta4 == 'b')
                        {
                            corridoio:
                            printf("Non è successo nulla di pericoloso, per fortuna, e la porta si apre senza un rumore. Entri in un lungo corridoioscuro e senza finestre, illuminato solo da torce appese sulle pareti che scoppiettano nel silenzio.\nIn fondo, scorgi una persona che, pigramente, fa tintinnare le chiavi che ha in mano e, alle sue spalle, un'altra porta rossa, l'unica oltre a quella che hai già varcato. Probabilmente le chiavi dell'uomo la aprono. L'uomo ti parla: -se vuoi queste chiavi, vieni e rispondi ad un indovinello.\n Hai ora due opzioni di fronte a te per impossessarti delle chiavi:\na)rispondere all'indovinello\nb)non ti fidi: è solo e disarmato, puoi batterlo per evitare trappole e attachi a sorpresa");

                            scanf(" %c", &risposta5);

                            if (risposta5 == 'a') // continua
                            {
                                printf("-ecco l'indovinello: Questa cosa ogni cosa divora:\nuccelli, animali, la fauna e la flora.\nUccide Re e città fa cadere in rovina;\nriduce le pietre in farina;\nIntacca l'acciaio e il ferro usura;\nTrasforma le alte montagne in pianura.-\nle tue opzioni sono:\na) un drago\nb) tua madre\nc) il tempo");
                                scanf(" %c", &risposta6);
                                if (risposta6 == 'a' || risposta6 == 'b')
                                {
                                    printf("-Risposta sbagliata- l'uomo estrae una lama così improvvisamente che non fai in tempo a reagire che ti ha già tagliato la gola.");
                                }
                                else if (risposta6 == 'c')
                                {
                                    printf("-La risposta è corretta-\nL'uomo ti dà la chiave ed esce dalla porta alle tue spalle senza aggiungere altro. Effettivamente potrebbe essere andato a chiamare le altre guardie, ma per ora non ti interessa.\nGuardi la porta davanti a te. C'è dipinta sopra una scritta:\nATTENZIONE: erirpa al atrop etnematnel.\nLa prima parola è in lingua comune e la capisci benissimo, ma il resto è indecifrabile. Forse è Shaiti? Però è scritto in rune settentrionali e non sembra un idioma del Sud. Forse è solo un trucco o un altro enigma. Cosa fare?\n");
                                    printf("come apri la porta?\na) lentamente: c'è scritto di fare così\nb)velocemente: c'è scritto di fare così\nc) normalmente: è solo una porta e non hai molto tempo per pensare ad altri inganni se davvero il tizio è andato a chiamare le guardie.\n");
                                    scanf(" %c", &risposta7);

                                    if (risposta7 == 'b' || risposta7 == 'c') // muori
                                    {
                                        printf("Senti un meccanismo scattare e la terra mancare sotto i piedi. Cadi in un buco e ti sciogli in un acido");
                                    }

                                    else if (risposta7 == 'a')
                                    {
                                        printf("Trovi una donna seduta ad una scrivania di fronte a te e quattro persone armate di tutto punto sono in piedi alle sue spalle. Uno di loro è il tizio incontrato al porto. Lei ti guarda fisso e ti sembra che i suoi occhi azzurro ghiaccio ti stiano scrutando nell'anima. -Benvenuto.- ti dice con voce altrettanto gelida. -Come puoi vedere, qui non c'è nessuno da salvare, ma io sono qui per farti una proposta.-\nEra davvero tutto un trucco organizzato -Che cosa volete da me?- dici.\n-Io mi chiamo Valenska Sorayensky e solo il capo dei Cobra Spinati. Avrai sentito parlare della mia banda.-\nMa certo, chi non conosceva l'associazione criminale più pericolosa di Harkins.\n-Io, oggi, ti propongo un accordo.- continua lei, -Tu accetti di lavorare per me firmando questo contratto e tu in cambio riceverai soldi in funzione di quanto mi sarai utile e avrai la protezione dei Cobra Spinati per fare qualunque cosa tu voglia.-\n");
                                        printf("non è una scelta facile: firmare un contratto con la donna più pericolosa di Harkins non è certo qualcosa da cui si può tornare indietro, ma allo stesso tempo negarle qualcosa potrebbe essere ancora peggio.\n-E i miei centomila settentri d'oro?- chiedi invece.\n-Non hai liberato nessuno, quindi la tua missione non è completa.-\n-Ma non c'è nessuno da liberare! Voglio i soldi che mi avete promesso.-\n-Questo non cambia nulla. L'accordo era centomila settentri in cambio della liberazione di un uomo. Niente uomo, niente denaro. Allora, firmi il contratto o no?-\nSei stato fregato e non puoi farci niente. Ma ora Valenska Sorayensky esige una risposta ed è bene che tu gliela dia.");
                                        printf("Firmi il contratto ed entri tra le fila dei Cobra Spinati?\na) -sì-\nb) -no-");
                                        scanf(" %c", &risposta8);

                                        if (risposta8 == 'a')
                                        {
                                            printf("Sei sopravvissuto!\n\nCONTINUA...");
                                        }

                                        else if (risposta8 == 'b')
                                        {
                                            printf("-è stata una tua scelta. Ora però non posso lasciarti vivere.- Valenska Sorayensky prende la pistola che sta sulla scrivania, la punta alla tua fronte e preme il grilletto.");
                                        }
                                    }
                                }
                            }

                            else if (risposta5 == 'b')
                            {
                                printf("Uccidi l'uomo con il minimo sforzo, non è stato difficile batterlo. Ora prendi le chiavi dal suo cadavere e guardi la porta davanti a te. C'è dipinta sopra una scritta:\nATTENZIONE: erirpa al atrop etnematnel.\nLa prima parola è in lingua comune e la capisci benissimo, ma il resto è indecifrabile. Forse è Shaiti? Però è scritto in rune settentrionali e non sembra un idioma del Sud. Forse è solo un trucco o un altro enigma. Cosa fare?\n");
                                printf("come apri la porta?\na) lentamente: c'è scritto di fare così\nb)velocemente: c'è scritto di fare così\nc) normalmente: è solo una porta e non hai molto tempo per pensare ad altri inganni se davvero il tizio è andato a chiamare le guardie.\n");
                                scanf(" %c", &risposta7);

                                if (risposta7 == 'b' || risposta7 == 'c') // muori
                                {
                                    printf("Senti un meccanismo scattare e la terra mancare sotto i piedi. Cadi in un buco e ti sciogli in un acido");
                                }

                                else if (risposta7 == 'a')
                                {
                                    printf("Trovi una donna seduta ad una scrivania di fronte a te e quattro persone armate di tutto punto sono in piedi alle sue spalle. Uno di loro è il tizio incontrato al porto. Lei ti guarda fisso e ti sembra che i suoi occhi azzurro ghiaccio ti stiano scrutando nell'anima. -Benvenuto.- ti dice con voce altrettanto gelida. -Come puoi vedere, qui non c'è nessuno da salvare, ma io sono qui per farti una proposta.-\nEra davvero tutto un trucco organizzato -Che cosa volete da me?- dici.\n-Io mi chiamo Valenska Sorayensky e solo il capo dei Cobra Spinati. Avrai sentito parlare della mia banda.-\nMa certo, chi non conosceva l'associazione criminale più pericolosa di Harkins.\n-Io, oggi, ti propongo un accordo.- continua lei, -Tu accetti di lavorare per me firmando questo contratto e tu in cambio riceverai soldi in funzione di quanto mi sarai utile e avrai la protezione dei Cobra Spinati per fare qualunque cosa tu voglia.-\n");
                                    printf("non è una scelta facile: firmare un contratto con la donna più pericolosa di Harkins non è certo qualcosa da cui si può tornare indietro, ma allo stesso tempo negarle qualcosa potrebbe essere ancora peggio.\n-E i miei centomila settentri d'oro?- chiedi invece.\n-Non hai liberato nessuno, quindi la tua missione non è completa.-\n-Ma non c'è nessuno da liberare! Voglio i soldi che mi avete promesso.-\n-Questo non cambia nulla. L'accordo era centomila settentri in cambio della liberazione di un uomo. Niente uomo, niente denaro. Allora, firmi il contratto o no?-\nSei stato fregato e non puoi farci niente. Ma ora Valenska Sorayensky esige una risposta ed è bene che tu gliela dia.");
                                    printf("Firmi il contratto ed entri tra le fila dei Cobra Spinati?\na) -sì-\nb) -no-");
                                    scanf(" %c", &risposta8);

                                    if (risposta8 == 'a')
                                    {
                                        printf("Sei sopravvissuto!\n\nCONTINUA...");
                                    }

                                    else if (risposta8 == 'b')
                                    {
                                        printf("-è stata una tua scelta. Ora però non posso lasciarti vivere.- Valenska Sorayensky prende la pistola che sta sulla scrivania, la punta alla tua fronte e preme il grilletto.");
                                    }
                                }
                            }
                        }
                    }
            else if (risposta12 == 'b') //giro casa
            {
                printf("analizzi i dintorni della casa con prudenza noti finestra raggiungibile tramite ramo, ma chiusa con serratura, e dopo ecc trovi materiali. il resistente filo di ferro, vicino ad una rotta tubatura, un martello dentro un cespuglio, ed il coltello personale.");
                printf("cosa decidi di utilizzare? a. il coltello\nb. il filo di ferro\nc. il martello");
                scanf(" %c", &risposta9);
                printf("ti arrampichi sull'albero, arrivi al ramo e provi ad entrare.");

                        if (risposta9 == 'a')
                        {
                            printf("provi ad usare coltello ma non funziona.");
                            goto coltello;
                        }

                        else if (risposta9 == 'b')
                        {
                            printf("usi il fil di ferro e boom scassini la serratura. buona idea ecc\n");
                            printf("entri in corridoio in cui fine porta verde ma oops è collegato ad allarme.\n sbrigate.\n ce sta un generatore da cui sicuri parte l'allarme. tre fili, uno devi tagliare. rosso, blu, nero\n");
                            printf("a. rosso\nb. blu\nc. nero\n");
                            scanf(" %c", &risposta10);
                            if (risposta10 == 'c')
                            {
                                printf("cazzi tuoi. la roba esplode e schiatti malissimo.\n");
                            }
                            else if (risposta10 == 'b')
                            {
                                printf("ndovina? si attiva l'allarme, ti scoprono e ti distruggono.\n");
                            }
                            else if (risposta10 == 'a')
                            {
                                printf("Daje! hai disattivato l'allarme e la porta si apre da sola.\n");
                                printf("entri e ce sta n'artro corridoio. sta volta però le porte sono 2.\n");
                                printf("quale provi ad aprire? a. quella gialla\nb. quella rossa\n");
                                scanf(" %c", &risposta11);

                                if (risposta11 == 'a')
                                {
                                    printf("la porta esplodi e rip rip muori.");
                                }
                                else if (risposta11 == 'b')
                                {
                                    printf("entri nel corridoio.");
                                    goto corridoio;
                                }
                            }
                        }
                        else if (risposta9 == 'c')
                        {
                            printf("BAD ENDING\ncoglione. fai un frastuono della madonna e le guardie ti scoprono. inutile a dire che vieni ucciso.\n");
                        }
                    }
                }
            }
        }
    }
