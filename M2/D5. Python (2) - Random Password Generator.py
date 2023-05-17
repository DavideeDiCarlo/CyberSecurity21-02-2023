import random
import string
import secrets

def complex_psw_gen ():
  lenght = 20
  letters = string.ascii_letters
  digits = string.digits
  punctuaction = string.punctuation
  type = letters + digits + punctuaction
  psw = ' '
  for i in range(lenght):
    psw += ' '.join(secrets.choice(type))
  print('Password: ',(psw))

def simple_psw_gen ():
  lenght = 8
  letters = string.ascii_letters
  digits = string.digits
  type = letters + digits
  psw = ' '
  for i in range(lenght):
     psw += ' '.join(secrets.choice(type))
  print('Password: ',(psw))

print ('Benvenuto in LilloTech. Il programma per generare password random a tua scelta')
print ('Scegli il livello di sicurezza della tua password')
print ('Nota: Le password complesse includono caratteri speciali')
x = input('Premi S per una password semplice, premi C per una password complessa: ')

if x == 'C' or x == 'c':
  complex_psw_gen ()

elif x == 'S' or x == 's':
  simple_psw_gen ()

else: x != 'C' or x != 'c' or x != 'S' or x != 's'
print ('Inserisci una scelta valida')S