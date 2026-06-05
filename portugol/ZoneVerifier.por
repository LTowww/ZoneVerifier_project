programa
{
	funcao banner(){
		escreva("|--------------------------|")
		escreva("\n|-------Zone Verifier------|")
		escreva("\n|--------------------------|\n")
	}
	
	funcao inicio()
	{
		inteiro codigoproduto
		cadeia regiao

		
		banner()
		
		escreva("\nEste programa irá ler o código do produto que voce inserir, e iremos informar ")
		escreva("\nde qual região do Brasil o produto vem, ou se ele é importado.")
		escreva("\n")
		escreva("\nInsira abaixo o código do produto, localizado na embalagem do mesmo: \n")
		leia(codigoproduto)
		
		escolha(codigoproduto)
		{
			caso 1:
			regiao = "Este produto é da região Sul"
			pare
			caso 2:
			regiao = "Este produto é da região Norte"
			pare
			caso 3:
			regiao = "Este produto é da região Leste"
			pare
			caso 4:
			regiao = "Este produto é da região Oeste"
			pare
			caso 5:
			regiao = "Este produto é da região Nordeste"
			pare
			caso 6:
			regiao = "Este produto é da região Nordeste"
			pare
			caso 7:
			regiao = "Este produto é da região Sudeste"
			pare
			caso 8:
			regiao = "Este produto é da região Sudeste"
			pare
			caso 9:
			regiao = "Este produto é da região Sudeste"
			pare
			caso 10:
			regiao = "Este produto é da região Centro-Oeste"
			pare
			caso 11:
			regiao = "Este produto é da região Noroeste"
			pare
			caso contrario:
			regiao = "Este produto é IMPORTADO!!"
			pare
			
		}
		limpa()

		banner()
		
		escreva("\n"+regiao)
	}
}
