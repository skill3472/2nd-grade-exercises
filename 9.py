def dodawanie(a, b):
    return a + b

def odejmowanie(a, b):
    return a-b

def mnozenie(a, b):
    return a*b

def dzielenie(a, b):
    return a/b

print('Wybierz funkcje: \n(1) DODAWANIE \n(2) ODEJMOWANIE \n(3) MNOZENIE \n(4) DZIELENIE \n')
y = input()
print('Podaj argumenty: ')
a = input()
print('')
b = input()

if(y = '1'):
    print('Wynik to: ' + dodawanie(a, b))
elif(y = '2'):
    print('Wynik to: ' + odejmowanie(a, b))
elif(y = '3'):
    print('Wynik to: ' + mnozenie(a, b))
elif(y = '4'):
    print('Wynik to: ' + dzielenie(a, b))
