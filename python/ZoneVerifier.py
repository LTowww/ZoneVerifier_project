import os

def banner():
    os.system('cls')
    print("=========================")
    print("===== Zone Verifier =====")
    print("=========================")

banner()

print("Este programa irá ler o código do produto que você inserir, e iremos informar de qual região do Brasil o produto vem, ou se ele é importado.")

codigo_produto = float(input("Insira o código do produto, localizado na embalagem do mesmo: "))


match codigo_produto:
    case 1:
        regiao = "Este produto é da região Sul."
    case 2:
        regiao = "Este produto é da região Norte."
    case 3:
        regiao = "Este produto é da região Leste."
    case 4:
        regiao = "Este produto é da região Oeste."
    case 5:
        regiao = "Este produto é da região Nordeste."
    case 6:
        regiao = "Este produto é da região Nordeste."
    case 7:
        regiao = "Este produto é da região Sudeste."
    case 8:
        regiao = "Este produto é da região Sudeste."
    case 9:
        regiao = "Este produto é da região Sudeste."
    case 10:
        regiao = "Este produto é da região Centro-Oeste."
    case 11:
        regiao = "Este produto é da região Noroeste."
    case _:
        regiao = "Este produto é IMPORTADO!!!"

os.system('cls')

banner()

print(regiao)
