numbers = {'1':3, #one
           '2':3, #two
           '3':5, #three
           '4':4, #four
           '5':4, #five
           '6':3, #six
           '7':5, #seven
           '8':5, #eight
           '9':4, #nine
           '10':3, #ten
           '11':6, #eleven
           '12':6, #twelve
           '13':8, #thirteen
           '14':8, #fourteen
           '15':7, #fifteen
           '16':7, #sixteen
           '17':9, #seventeen
           '18':8, #eighteen
           '19':8  #nineteen
            }



numbers_10 = {'10':3, #ten
              '20':6, #twenty
              '30':6, #thirty
              '40':5, #forty
              '50':5, #fifty
              '60':5, #sixty
              '70':7, #seventy
              '80':6, #eighty
              '90':6  #ninety
             }         



# Constantes

AND = 3
HUNDRED = 7

# En este problema, básicamente se armaron sets de numeros
# donde cada clave te decia su longitud
# pero solo para los numeros entre 1 y 19 y los 
# divisibles entre 10.
#
# a partir de allí mediante condicionales y descomposicion
# del numero se armo la longitud de cada numero
# al final se suma 11 por "one thousand"


summ = 0
for i in range (1,1000):

    if i<=19:
        summ += numbers[str(i)]

    elif i>=20 and i<=99:
        if i%10 == 0:
            summ += numbers_10[str(i)]
        else:
            summ += numbers_10[str((i//10)*10)]+numbers[str(i%10)]

    elif i>=100 and i<=999:
        if i%100 == 0:
            summ += numbers[str(i//100)]+HUNDRED
        elif i%10 == 0:
            summ += numbers[str(i//100)]+HUNDRED+AND+numbers_10[str(i%100)]
        else:
            if i%100<=19:
                summ += numbers[str(i//100)]+HUNDRED+AND+numbers[str(i%100)]
            elif i%100>=20 and i%100<=99:
                summ += numbers[str(i//100)]+HUNDRED+AND+numbers_10[str(((i%100)//10)*10)]+numbers[str(i%10)]    

#one thousand
summ += 11
print (summ)    

