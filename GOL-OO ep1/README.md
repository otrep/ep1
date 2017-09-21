ALUNO: Vinícius Couto Barros 
MATRICULA: 16/0147760  O jogo trabalha com matrizes de celulas vivas e mortas, sendo '-' celulas mortas, e '*'
celulas vivas. Estas celulas seguem regras para viver e morrer durante o jogo. As regras são :

1a) Se uma celula viva tiver menos que duas celulas vivas ao seu redor, ela morre de solidão.

2a) Se uma celula viva tiver mais que três celulas vivas ao seu redor ela morre de superpopulação.

3a) Se uma celula estiver morta e tiver exatamente três celulas vivas ao seu redor, ela volta a vida.

4a) Se uma celula estiver viva e tiver duas ou três celulas vivas ao seu redor, ela continua viva.

As impressões das gerações são feitas com 1/4 segundos de diferença para melhor visualização e dar uma
aparencia de animação ao jogo. 



Como jogar:baixe o repositorio e acessando a pasta ep1 execute:

    make

    make run

 Escolha um conjunto de células para rodar ou monte o seu próprio com as alternativas de
'random set', 'Build your own set' ou 'write your set of cells'. ja programadas, tem como opções a Block, a Blinker, a Glider e a Gosper Glider Gun.

OBS: A matriz sera quadrada, sendo o tamanho escolhido o valor da coluna e linha.RANDOM SET:voce cria o tamanho da matriz, as celulas sao definidas aleatoriamente.
RIDE YOUR OWN ASSEMBLY:aqui deve-se definir o tamanho da matriz e nome do conjunto. Após essas definições 
o usuario deve escolher conjuntos para adicionar à matriz e depois dar as coodenadas, suas opções de conjuntos são: Blinker, Block e Glider. Para terminar de montar basta acessar a opção 'finish'.


WRITE YOUR CELL SET:
determine o nome e o tamanho do jogo a
 ser montado, e em seguida determine, celula por celula, qual está viva e qual está morta, escrevendo
'-' para as células mortas e '*' para as vivas.

Após escolhido ou formado o seu conjunto, o usuario pode alterar a quantidade de gerações
a serem rodadas e então o jogo começa.

O jogo trabalha com matrizes de celulas vivas e mortas, sendo '-' celulas mortas, e '*'
celulas vivas. 