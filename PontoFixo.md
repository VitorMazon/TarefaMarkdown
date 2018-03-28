# Ponto Fixo

## Descrição

O método do ponto fixo consiste em calcular os pontos fixos de uma dada função, escrita como *f(x)=0*. Rescrevendo a função como *x=g(x)*, implementa-se o método.

No momento em que *x* é solução de *f(x)=0* a equação *x=g(x)* é satisfeita. Esse procedimento é ilustrado com o traçado da reta *y=x* e *y=g(x)*, como na figura abaixo.

![Reta e curva](/GrafPontoFixo)

Quando o método funciona, os valores de x obtidos são iterações sucessivas que
convergem progressivamente em direção à solução. *g(x)* é chamada de **função iteração**.

![Iteracoes](/GrafIteracoes)

*Fonte: Numerical Methods for Engineers and Scientists: An Introduction with Applications Using MATLAB, 1st. Edition*

## Resultado

Utilizando o método do [ponto fixo](/pontofixo.c) para valores de x inicial de 0.75 e 1.5, com erro de 1e-10. O resultado das iterações pode ser visto no gráfico abaixo (gerado a partir de ![ponto.gp](/ponto.gp)).

![Resultado](/Ponto.png)

Em comparação dos dois resultados, vemos que a iteração tomou os mesmos valores de x para a determinada iteração. Assim, os pontos tomados para se chegar no resultado final de x foram o mesmo. Não sei por quê disso ocorrer, mas acredito que seja pela reta *g(x)* tomada para esses pontos. Como o ponto deve estar entre os pontos 0.75 e 1.5, os passos para o resultado final são os mesmos.

@thadeupenna
