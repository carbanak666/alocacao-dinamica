# alocacao-dinamica
Alocação dinamica

Documentação malloc :

https://www.youtube.com/watch?v=EZ2yTJqQ43Y&list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW&index=96
https://www.ime.usp.br/~pf/algoritmos/aulas/aloca.html

Documentação realloc :

https://www.youtube.com/watch?v=Dq4FidsTubQ

Função free() :

https://www.youtube.com/watch?v=Za1WFOq65A4&list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW&index=97

Caso seu programa tem que ter 2 free();
basta colocar

ponteiromalloc = NULL;

Se você colocar dois free() no seu programa, ele vai dar erro talvez execute mais vai dar uma mensagem de erro.
se você quiser usar basta fazer assim:

se tiver malloc e realloc que você queira, devolver a memoria para o sistema, coloca uma como free, ea outra como NULL.
