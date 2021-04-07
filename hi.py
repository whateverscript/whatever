def mais_um_ano(idade):
    return idade + 1

print(mais_um_ano(22))

filmes = ["SAO 3", "BUNNY GIRL"]
print (filmes)
print (filmes[1])

def imprimeFilmes(filmes_que_quero_imprimir):
    print("Lista de filmes disponíveis: ")
    for filme in filmes_que_quero_imprimir:
        print(filme)

imprimeFilmes(filmes)


pessoa = {"nome" : "Joao",
          "idade": 37,
          "empresa": "pedreiros & cia"}

print("nome: ", pessoa["nome"], ".\nempresa:",  pessoa["empresa"])