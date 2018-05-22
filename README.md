# como_gerar_combinações_com_linguagem_C
como gerar combinações com linguagem C-algoritmo mais eficiente
<h3>COMO USAR<h3/>
Exemplo para achar combinação C 6,2.

Simples faça o download do arquivo  gerador_de_programa_para_gerar_combinação.c

execute o programa em c . E digite 6 e deopois 2.  

Ira ser criado um arquivo code_by_gabrielbgab.txt

Mude de code_by_gabrielbgab.txt para code_by_gabrielbgab.c

e execute o arquivo.

o resultado saira no aulas4you.txt (apenas os numeros)

Exemplo de resultado para C60,6 -> todos os 50 milhoes de jogos da mega sena
Exemplo de resultado para C25,15 -> todos os 3 milhoes de jogos da lotofacil
Exemplo de resultado para C31,7 -> todos os 2 milhoes de jogos do dia da sorte




OBS: Use o software Pilotedit para abrir arquivos de textos grandes.Se abrir com editor de texto comum trava.
http://www.pilotedit.com/index.html

<h1>O algoritmo</h1>

A combinação de n elementos tomados em grupos de  p pode ser representado por um sistema numerico especial

Por exemplo imagine o conjunto letras={A,B,C,D,E,F} que possui 6 elementos.
Vamos calcular C6,2. A combinação de 6 elementos em grupos de 2.

C6,2= 15 grupos 

Estes grupos são.

1.-AB
2.-AC
3.-AD
4.-AE
5.-AF
6.-BC
7.-BD
8.-BE
9.-BF
10.-CD
11.-CE
12.-CF
13.-DE
14.-DF
15.-EF

Mas como gerar isso pro programação?

O unico algoritmo que conhecia era contagem binaria mas para gerar 15 combinações este algoritmo precisa de 2^6 operações
ou seja é muito ineficiente.

Logo desenvolvi um algoritmo que gasta exatamente 15 operações para gerar as 15 combinações!! Vamos ver!


Para esse problema , Achar C6,2 do conjunto letras={A,B,C,D,E,F}   Imagine que numero de dois digitos _ _ em um sistema de 6 algarismos. 1,2,3,4,5,6
em que 
1=A,2=B,3=C,4=D,5=E,6=F
VAmos contar nesse sistema de 6 digitos.
1,2,3,4,5,16,11,12,13,14,15,16,26,21,22,23,24,25,26..e assim por diante.

repare que AB=12,AC=13,14=AD,15=AE,16=AF,23=BC,24=BD,25=BE,26=BF,34=CD,35=CE,36=CF,37=DF,48=EF

Assim repare que a combinação esta parecida com uma contagem em um sistema de 6 digitos.
Porém eu tive que mapear no excel na mão C6,2 ,C6,3 C6,4 e C6,5 ate perceber a logica...deu muito trabalho
mas agora entendi a relação e vou escrer aqui em baixo o segredo.!

Repare que os digitos da esquerda são sempre maiores que os digitos da direita.Isso é a parte dificil de perceber mas
que resolve todo o problema e torna o algoritmo mais eficiente.!

Finalmente para C6,2

Dado um conjunto letras={A,B,C,D,E,F} de 6 elementos para acharmos as combinações em grupos de 2 temos que contar
no sistema de digitos(1,2,3,4,5,6) e escolher os numeros de 2 algarismos em que os digitos da esquerda são sempre maiores que os digitos da direita!
E depois mapear  a=1,b=2,c=3,d=4,e=5,6=f.

Para C6,3
Dado um conjunto letras={A,B,C,D,E,F} de 6 elementos para acharmos as combinações em grupos de 3 temos que contar
no sistema de digitos(1,2,3,4,5,6) e escolher os numeros de 3 algarismos em que os digitos da esquerda são sempre maiores que os digitos da direita!
E depois mapear  a=1,b=2,c=3,d=4,e=5,6=f.

Para C6,4
Dado um conjunto letras={A,B,C,D,E,F} de 6 elementos para acharmos as combinações em grupos de 4 temos que contar
no sistema de digitos(1,2,3,4,5,6) e escolher os numeros de 4 algarismos em que os digitos da esquerda são sempre maiores que os digitos da direita!
E depois mapear  a=1,b=2,c=3,d=4,e=5,6=f.

E assim por diante.Generalizando...


Para Cn,p
Dado um conjunto letras={A,B,C,D,E,F,...,z} de n elementos para acharmos as combinações em grupos de p elementos temos que contar
no sistema de digitos(1,2,3,4,5,6,...,n) e escolher os numeros de p algarismos em que os digitos da esquerda são sempre maiores que os digitos da direita!
E depois mapear  a=1,b=2,c=3,d=4,e=5,6=f,....n=Z


<h3>problema<h3/>

Quando aumento o p, é preciso aumentar um loop. Então tive que fazer um algoritmo para gerar outro algoritmo para poder
implementar o Cn,p para um p generico.
Porem usei apenas 25 letras do alfabeto e calcula ate Cn,25. Para grupos maiores que 25 é so modificar o algoritmo .







