#include<stdio.h>
#include<math.h>
/*
* Benvenuto a chi vuol essere milionario! Il primo game-show italiano in onda sul tuo computer.
* Rispondi correttamente a 15 domande e vincere 1000000 €!
*/

void main_menu ();
int start;
void gioca_partita ();
char nome;
char scelta; 
int main () 

{

int start;

        printf("Benvenuto a chi vuol essere milionario! Il primo game-show italiano in onda sul tuo computer!\n");
        printf("Sei pronto ad iniziare?\n");
        printf("1. Si sono pronto\n");
        printf("2. No, ho bisogno di una pausa tattica\n");
        scanf("%d", &start);
        switch(start){
                case 1:{
                gioca_partita ();
                }
                break;
                case 2:{
        printf("Goditi la tua pausa tattica, torna quando sarai pronto\n");
                }
                break;
                }
        return 0;

} 

void gioca_partita () 

{

char scelta;
char let;
int punteggio = 0;
char nome;

printf("Inserisci il tuo nome\n");
scanf("%s", &nome);
printf("Prima domanda:\n");
printf("Ex capitano e numero 10 della Roma\n");
printf("A) Javier Zanetti\t B) Roberto Baggio\t C) Alex Del Piero\t D) Fancesco Totti\t");
scanf("%s", &scelta);
	if (scelta == 'D'|| scelta == 'd' || scelta == '4')
		{
		printf("Un bel riscaldamento per il nostro concorrente, andiamo alla prossima!\n");
		punteggio ++;
		}

	else if (scelta != 'D' || scelta != 'd' || scelta != '4')
		{
		printf("Non ho parole. Torna quando sarai piu preparato\n");
		return;
		}

printf("Seconda domanda:\n");
printf("Non fa parte della famiglia animale dei felini\n");
printf("A) Giaguaro\t B) Opossum\t C) Tigre\t D) Puma\t");
scanf("%s", &scelta);
	if (scelta == 'B' || scelta == 'b' || scelta == '2')
		{
		printf("Bravissimo, prossima domanda.\n");
		punteggio ++;
		}
	else if (scelta != 'B' || scelta != 'b' || scelta != '2')
		{
		printf("Dimmi che stai scherzando.\n");
		return;
		}

printf("Terza domanda:\n");
printf("Chi fu l'autore dell'Odissea?\n");
printf("A) Cesare\t B) Omero\t C) Virgilio\t D) Achille\t");
scanf("%s", &scelta);
	if (scelta == 'B' || scelta == 'b' || scelta == '2')
		{
		printf("Stai tirando drittoo, e andiamoo\n");
		punteggio ++;
		}
	else if (scelta != 'B' || scelta != 'b' || scelta != '2')
		{
		printf("Fermarsi alla terza domanda con stile. Torna quando sarai pronto.\n");
		return;
		}

printf("Quarta domanda:\n");
printf("A quanti grammi equivalgono 100 millilitri?\n");
printf("A) 0.1 grammi\t B) 10 grammi\t C) 100 grammi\t D) 1 grammo\t");
scanf("%s", &scelta); 
	if (scelta == 'C' || scelta == 'c' || scelta == '3')
		{
		printf("La matematica non e' un'opinione, a quanto pare anche per il nostro concorrente.\n");
		punteggio ++;
		}
	else if (scelta != 'C' || scelta != 'c' || scelta != '3')
		{
		printf("A quanto pare matematica ed equivalenze sono un problema per te. Alla prossima!\n");
		return;
		}

printf("Quinta domanda, valida per il primo traguardo:\n");
printf("L'elemento piu abbondante sul pianeta Terra?\n");
printf("A) Idrogeno\t B) Azoto\t C) Carbonio\t D) Stronzio\t");
scanf("%s", &scelta);
	if (scelta == 'A' || scelta == 'a' || scelta == '1')
		{
		printf("Non era scontata, ma ci hai preso. Andiamo avanti.\n");
		punteggio ++;
		}
	else if (scelta != 'A' || scelta != 'a' || scelta != '1')
		{
		printf("Una domanda a trabochetto, ma ci potevi arrivare, riprova!\n");
		return;
		}

printf("Sesta domanda:\n");
printf("Che forma ha il segnale stradale che indica il divieto di transito?:\n");
printf("A) Quadrata\t B) Triangolare\t C) Rotonda\t D) Esagonale\t");
scanf("%s", &scelta); 
	if (scelta == 'C' || scelta == 'c' || scelta == '3')
		{
		printf("Patente confermata!Bravo!\n");
		punteggio ++;
		}
	else if (scelta != 'C' || scelta != 'c' || scelta != '3')
		{
		printf("Ritirate la patente a quest'uomo!!\n");
		return;
		}

printf("Settima domanda:\n");
printf("Ne Il signore degli anelli sono i due cugini di Frodo Baggins\n");
printf("A) Aragorn e Gandalf\t B) Gimli e Legolas\t C) Smeagol e Sauron\t D) Marry e Pipino\t");
scanf("%s", &scelta);
	if (scelta == 'D' || scelta == 'd' || scelta == '4')
		{
		printf("Mi fossi cascato su questa ti avrei ucciso. Ma non e' successo!\n");
		punteggio ++;
		}
	else if (scelta != 'D' || scelta != 'd' || scelta != '4')
		{
		printf("Vergogna totale. Ciao.\n");
		return;
		}

printf("Ottava domanda:\n");
printf("Fu reso/a disponibile al pubblico l'11 Novembre 2006 ?:\n");
printf("A) Il primo iPhone\t B) La prima Audi A1\t C) La PlayStation 3\t D) Il pallone dei mondiali vinti dall'Italia\t");
scanf("%s", &scelta);
	if (scelta == 'C' ||  scelta == 'c' || scelta == '3')
		{
		printf("E allooooooora!\n");
		punteggio ++;
		}
	else if (scelta != 'C' || scelta != 'c' || scelta != '3')
		{
		printf("Era difficile. Peccato, torna la prossima volta.\n");
		return;
		}

printf("Nona domanda e secondo traguardo:\n");
printf("La data di arrivo dell'uomo sulla Luna?:\n");
printf("A) 20 Giugno 1986\t B) 10 Luglio 1969\t C) 14 Febbraio 1974\t D) 30 Settembre 1971\t");
scanf("%s", &scelta);
	if (scelta == 'B'|| scelta == 'b' || scelta == '2') 
		{
		printf("Forse eri troppo giovane per conoscerla. Ma non e' stato cosi. Allooooora\n");
		punteggio ++;
		}
	else if (scelta != 'B' || scelta != 'b' || scelta != '2')
		{
		printf("Complimenti per la cultura scadente. Torna quando sarai piu preparato\n");
		return;
		}

printf("Decima domanda:\n");
printf("Fu il serial killer piu prolifico della storia:\n");
printf("A) Gary Leon Ridgway\t B) Ted Bundy\t C) Jeffrey Dahmer\t D) Pietro Pacciani\t");
scanf("%s", &scelta);
	if (scelta == 'A' || scelta == 'a' || scelta == '1')
		{
		printf("Ma chi abbiamo qui? Salvo Sottile?\n");
		punteggio ++;
		}
	else if (scelta != 'A' || scelta != 'a' || scelta != '1')
		{
		printf("Era difficile, ma ci hai provato comunque. Alla prossima.\n");
		return;
		}

printf("Undicesima domanda:\n");
printf("Filosofo tedesco nato il 22 Aprile 1724 conosciuto anche come Padre dell'Idealismo: \n");
printf("A) Friedrich Hegel\t B) Immanuel Kant\t C) Martin Heidegger\t D) Arthur Schopenhauer\t");
scanf("%s", &scelta);
	if (scelta == 'B' || scelta == 'b' || scelta == '2')
		{
		printf("Il tuo professore di filosofia sarebbe orgoglioso di te.\n");
		punteggio ++;
		}
	else if (scelta != 'B' || scelta != 'b' || scelta != '2')
		{
		printf("Suggerirei un ripasso di filosofia, socio.\n");
		return;
		}

printf("Dodicesima domanda e terzo traguardo: \n");
printf("L'indirizzo di residenza fittizio di Sherlock Holmes?: \n");
printf("A) 10 Downing Street\t B) 36 Craven Street\t C) 221B Backer Street\t D) 23 e 25 Brook Street\t");
scanf("%s", &scelta);
	if (scelta == 'C' || scelta == 'c' || scelta == '3')
		{
		printf("Siamo vicini al miliooonee, e allora.\n");
		punteggio ++;
		}
	else if (scelta != 'C' || scelta != 'c' || scelta != '3')
		{
		printf("Un gran peccato. Hai comunque raggiunto 12 domande esatte.\n");
		return;
		}

printf("Tredicesima domanda: \n");
printf("Fu il compositore della colonna sonora della triolgia di Christopher Nolan su Batman: \n");
printf("A) Ennio Morricone\t B) Howard Shore\t C) Nino Rota\t D) Hans Zimmer\t");
scanf("%s", &scelta);  
	if (scelta == 'D' || scelta == 'd' || scelta == '4')
		{
		printf("Non potevi sbagliare su Batman, e non l'hai fatto.\n");
		punteggio ++;
		}
	else if (scelta != 'D' || scelta != 'd' || scelta != '4')
		{
		printf("Mi sei caduto su Batman.\n");
		return;
		}

printf("Quattordicesima domanda: \n");
printf("Interpreto Janice nella famosa serie TV Friends: \n");
printf("A) Lisa Kudrow\t B) Jane Linch\t C) Courtney Cox\t D) Meggie Wheeler\t");
scanf("%s", &scelta);  
	if (scelta == 'D' || scelta == 'd' || scelta == '4')
		{
		printf("Una domanda ardua. Ma ci sei arrivato. Sai cosa ti aspetta? La domanda per il miliooone\n");
		punteggio ++;
		}
	else if (scelta != 'D' || scelta != 'd' || scelta != '4')
		{
		printf("Ad un passo dalla fine, riprova. Ci sei quasi!\n");
		return;
		}
printf("Quindicesima ed ultima domanda, sei ad un passo dal milione\n");
printf("A chi appartiene la citazone Ogni cosa mortal Tempo interrompe.: \n");
printf("A) Dante Alighieri\t B) Francesco Petrarca\t C) Giacomo Leopardi\t D) Giovanni Boccaccio\t");
scanf("%s", &scelta);  
	if (scelta == 'B' || scelta == 'b' || scelta == '2') 
		{
		printf("E ALLOOOOOOOOOOOOOOOOOOOOORAAAAAAAAAA 1 MILIONEEEEEEEEEEEEEEEEEEEEEE\n");
		punteggio ++;
		}
	else if (scelta != 'B' || scelta != 'b' || scelta != '2')
		{
		printf("Mi sei caduto sull'ultima. Riprova, ci sei quasi.\n");
		return;


} 

} //prima funzione void
