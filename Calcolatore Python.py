print ("Benvenuto nel fantastico calcolatore quantistico.\nSeleziona la tua scelta fra: \nA - Quadrato \nB - Cerchio\nC - Triangolo")
print ("Premi Q per uscire")

x = (input (" "))

print ("Inserisci la tua selezione: " ,x)

if x == "A" or x == "a":
    print ("La tua selezione: Quadrato")
    lato = float(input('Inserisci la lunghezza del lato: '))
    perimetro = lato *4
    print (" Il perimetro del quadrato: " ,perimetro)
    
elif x == "B" or x == "b":
    print ("La tua selezione: Cerchio")
    raggio = float(input ('Inserisci la lunghezza del raggio: '))
    circonferenza = 2*3.14159*raggio
    print (" La circonferenza del cerchio: ",circonferenza)
    
elif x == "C" or x == "c":
    print ("La tua selezione: Triangolo")
    base = float (input('Inserisci la lunghezza della base: '))
    altezza = float (input('Inserisci l altezza del Triangolo: '))
    perimetro = base*2 + altezza*2
    print ("Il perimetro del triangolo: " ,perimetro)
    
else:
    print ("Buona giornata")
    
    
