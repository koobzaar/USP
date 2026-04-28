# Geometria Analítica — SMA 300
**Notas de aula — Farid Tari**

---

## Axiomas da Geometria Euclideana

### Euclides de Alexandria

*[Wikipedia] — Como usar Wikipedia.*

Nascido $\sim 330$ a.C. em Síria? Grécia? Foi para Alexandria (Egito).

É reconhecido como o primeiro a tentar abordar de uma maneira sistemática o estudo da geometria plana.
Escreveu os *"Elementos"* [cópia no Tidia-ae.usp.br].

Euclides assumiu 5 postulados (o que se considera como ponto de partida, sem necessidade de demonstração). Acontece que os postulados de Euclides **não são completos**.

### David Hilbert (1862–1943, Alemanha)

Apresentou um novo conjunto de axiomas para geometria [cópia no Tidia].

#### Definir o ponto

A geometria é baseada no seguinte esquema:

$$\text{Conceitos primitivos ou termos indefinidos} \longrightarrow \text{Axiomas/Postulados} \longrightarrow \text{Termos definidos, Afirmações com demonstrações}$$

**Conceitos primitivos:** Ponto, Reta, Plano, Pertence a, Entre, Congruente.

**Termos derivados:** Definição, Lema, Proposição, Teorema, Corolário.

---

## Página 2

Hilbert organizou os axiomas em cinco grupos:

- I. Axiomas de incidência (1–7)
- II. Axiomas de ordem (1–5)
- III. Axioma das paralelas (axioma de Euclides)
- IV. Axiomas de congruência (1–6)
- V. Axioma de continuidade (axioma de Arquimedes)

Vamos ver alguns desses axiomas.

> **Axioma I1.** Dados dois pontos distintos, existe uma única reta que os contém.

**Proposição.** Duas retas distintas se intersectam em no máximo um ponto.

**Demonstração.** Suponha que elas se intersectam em dois pontos $P_1$ e $P_2$. Então existem pelo menos duas retas distintas por $P_1$ e $P_2$, o que contradiz o Axioma I1. $\blacksquare$

**Exemplos.** Normalmente pensamos em pontos e retas como objetos da geometria plana. Mas podemos construir outros modelos.

1. Seja $\mathcal{P} = \{A, B, C, D\}$ "o nosso plano" com quatro pontos, e $\mathcal{L} = \{AB, AC, AD, BC, BD, CD\}$ o conjunto das "retas" em $\mathcal{P}$.

> Figura: diagrama com quatro pontos $A, B, C, D$ e seus segmentos (modelo finito de geometria).

O conjunto $\mathcal{P}$ com as retas $\mathcal{L}$ satisfaz o Axioma I1.

2. $\mathcal{P} = \{A, B, C, D, E, F, G\}$, $\mathcal{L} = \{AFB, BDE, CEA, AGD, BGE, CGF, DEF\}$.

> Figura: diagrama com sete pontos $A, B, C, D, E, F, G$ formando o plano de Fano.

---

## Página 3

**Definição.** Dizemos que um conjunto de pontos é **colinear** (ou que seus pontos são colineares) se existe uma reta que contém o conjunto.

> **Axioma I4.** Dados três pontos não colineares, existe um único plano que os contém.

> **Axioma I5.** Se dois pontos distintos pertencem a um plano $\mathcal{P}$, então a única reta que os contém pertence a $\mathcal{P}$.

> **Axioma I7.** Em toda reta existem pelo menos dois pontos distintos, e em todo plano existem pelo menos duas retas distintas. Existem pelo menos dois planos distintos no espaço.

**Proposição.** Seja $\ell$ uma reta e $P$ um ponto que não pertence a $\ell$, $P \notin \ell$. Então existe um plano único que contém $P$ e $\ell$.

**Demonstração.** Pelo Axioma I7, existem pelo menos dois pontos distintos $Q$ e $R$ em $\ell$. Os pontos $P, Q, R$ não são colineares, pois $P \notin \ell$. Logo, pelo Axioma I4, existe um plano único que contém $P, Q, R$. Este plano contém a reta $\ell$ pelo Axioma I5. $\blacksquare$

**Definição.** Duas retas são **coplanares** se existe um plano que as contém. Elas são **paralelas** se elas são coplanares e não se intersectam.

O famoso controverso Postulado 5 de Euclides:

> **Axioma das paralelas.** Seja $\ell$ uma reta, $P$ um ponto com $P \notin \ell$ e $\mathcal{P}$ o único plano que os contém. Existe uma única reta em $\mathcal{P}$ que contém $P$ e que é paralela a $\ell$.

---

## Página 4

Matemáticos tentaram por muito tempo mostrar que o Axioma das paralelas pode ser descartado e deduzido a partir dos outros axiomas. Bolyai e Lobachevsky mostram que, ao remover o Axioma das paralelas, construímos outras geometrias (não Euclideanas):

### Geometria esférica

No plano Euclideano, o segmento da reta $AB$ é o caminho mais curto que liga os pontos $A$ e $B$.

> Figura: esfera com segmentos de grandes círculos.

Na esfera, um segmento "da reta" é um segmento das circunferências de maior raio. Quaisquer duas circunferências de maior raio se intersectam em dois pontos: **não existem "retas" paralelas na esfera.**

### Geometria hiperbólica

> Figura: semiplano superior com semi-retas verticais e semi-círculos como "retas".

Considere um semiplano onde as "retas" são as semi-retas verticais e os semi-círculos com centros na fronteira do semiplano. Existe um número infinito de retas passando por $P \notin \ell$ que são paralelas a $\ell$.

---

## Página 5

**Proposição.** Sejam $\ell_1, \ell_2, \ell_3$ três retas coplanares. Se $\ell_1$ é paralela a $\ell_2$ e $\ell_2$ é paralela a $\ell_3$, então $\ell_1$ é paralela a $\ell_3$.

**Demonstração.** Suponha que $\ell_1$ não é paralela a $\ell_3$. Como elas são coplanares, elas se intersectam em um ponto $P$. Então por $P$ passam duas retas paralelas a $\ell_2$ (as retas $\ell_1$ e $\ell_3$), o que contradiz o Axioma das paralelas. $\blacksquare$

Hilbert mostrou que podemos construir a geometria Euclideana sem fazer uso dos números reais (Axioma de Continuidade). Mas pode ser mostrado que usando os números reais obtemos a mesma geometria.

> **Axioma (de Continuidade).** Sejam $A$ e $B$ dois pontos distintos e $\ell$ a única reta que os contém. Então existe uma régua sobre $\ell$ tal que $A$ corresponde ao número $0$ e $B$ ao número $1$.

> Figura: reta $\ell$ com régua, $A$ em $0$, $C$ em $\tfrac{1}{2}$, $B$ em $1$.

Isso significa que podemos identificar a reta (infinita) com os números reais. Assim, podemos definir o ponto médio de $AB$ como o ponto $C$ que corresponde ao número $\tfrac{1}{2}$.

**Definição.** Dizemos que quatro pontos $A, B, C, D$ formam um **paralelogramo** se as retas $AB$ e $DC$ são paralelas e também as retas $BC$ e $AD$ são paralelas.

> Figura: paralelogramo $ABDC$.

---

## Página 6 — Geometria Analítica

Vamos considerar objetos simples:

- **No plano:** ponto, reta, círculo.
- **No espaço:** ponto, reta, esfera.

Vimos que podemos identificar os pontos de uma reta com o conjunto dos números reais. Considere um plano (Euclideano) $\mathcal{P}$ e duas retas $\ell_1$ e $\ell_2$ não paralelas em $\mathcal{P}$.

> Figura: plano com eixos $\ell_1$ e $\ell_2$ se intersectando em $O$.

As retas $\ell_1$ e $\ell_2$ se intersectam em um único ponto $O$. Seja $P$ um ponto do plano. Por $P$ passa uma única reta paralela a $\ell_1$, que intersecta $\ell_2$ em um único ponto que corresponde a um único número real $y$. Da mesma maneira, existe uma única reta por $P$ paralela a $\ell_2$ que intersecta $\ell_1$ em um único ponto correspondente a um número real $x$. O ponto $P$ é completamente identificado pelo par $(x, y)$. Logo, o plano $\mathcal{P}$ pode ser identificado com o conjunto

$$\mathbb{R}^2 = \{(x,y),\; x, y \in \mathbb{R}\}.$$

---

## Página 7

Podemos aproveitar as operações algébricas dos números reais para fazer contas sobre objetos geométricos.

Por exemplo, uma reta pode ser representada por uma equação algébrica: é o conjunto dos pontos $P = (x,y)$ com $x, y$ satisfazendo uma relação linear do tipo
$$y = ax + b, \quad a, b \in \mathbb{R}.$$

A **geometria analítica** é o estudo de objetos geométricos no plano ou espaço Euclideano usando álgebra. Nos vamos estudar:

- Vetores
- Retas e planos
- Cônicas
- Superfícies quádricas

*Ver Tidia para ementa detalhada.*

---

## §1 — Vetores

**Representação da força do vento.**

Um **vetor** no espaço é um segmento orientado da reta: é uma direção com **intensidade** (módulo) e **sentido** (orientação).

> Figura: segmento $\vec{u}$ de $A$ a $B$.

Um segmento da reta é representado por dois pontos $A$ e $B$ do espaço: $A$ é a **origem**, $B$ é a **extremidade**.

Denotamos por $\overrightarrow{AB}$ o vetor com sentido indo de $A$ para $B$ e com módulo o comprimento do segmento $AB$.

Observe que $\overrightarrow{BA}$ possui sentido contrário de $\overrightarrow{AB}$, portanto representa um vetor distinto de $\overrightarrow{AB}$. O vetor $\overrightarrow{BA}$ é o **oposto** de $\overrightarrow{AB}$.

Como vimos na representação da força do vento, um vetor é **livre** e pode ser representado por vários pares de pontos no espaço.

**Definição.** $\overrightarrow{AB}$ e $\overrightarrow{CD}$ representam o mesmo vetor se $ABDC$ é um paralelogramo.

> Figura: paralelogramo $ABDC$ com $\vec{u} = \overrightarrow{AB} = \overrightarrow{CD}$.

**Observação.** Um vetor é livre; isto é, não depende da escolha dos pontos $A$ e $B$ que o representam.

---

## Página 9

**Definição.** A **norma** ou o **módulo** de um vetor $\vec{u}$ é o comprimento de qualquer um de seus representantes.
Notação: $\|\vec{u}\|$.

O **vetor nulo** é o vetor representado por $\overrightarrow{AA}$ para qualquer ponto $A$ do espaço. Notação: $\vec{0}$.

Denotamos o conjunto de todos os vetores no espaço por $V^3$, e o conjunto de todos os vetores em um plano por $V^2$.

Vamos definir algumas operações em $V^3$ (valem também em $V^2$).

### Adição de dois vetores

Sejam $\vec{u}$ e $\vec{v}$ dois vetores, com $\vec{u}$ representado por $\overrightarrow{AB}$ e $\vec{v}$ representado por $\overrightarrow{BC}$.

> Figura: regra do triângulo para soma de vetores $\vec{u} + \vec{v}$.

O vetor soma de $\vec{u}$ e $\vec{v}$ é o vetor representado por $\overrightarrow{AC}$, ou seja,

$$\boxed{\vec{u} + \vec{v} = \overrightarrow{AB} + \overrightarrow{BC} = \overrightarrow{AC}}$$

Observe que na escolha da representação dos vetores $\vec{u}$ e $\vec{v}$, a extremidade de $\vec{u}$ é a origem de $\vec{v}$.

Observe também que usamos o mesmo símbolo "$+$" da soma de números para representar a soma de dois vetores.

---

## Página 10

> Figura: regra do paralelogramo para soma de vetores: $\vec{u} = \overrightarrow{AB}$, $\vec{v} = \overrightarrow{AD}$, $\vec{u} + \vec{v} = \overrightarrow{AC}$.

Podemos representar os vetores $\vec{u}$ e $\vec{v}$ com a mesma origem: $\vec{u} = \overrightarrow{AB}$ e $\vec{v} = \overrightarrow{AD}$.

Usando a regra do paralelogramo, temos que
$$\vec{u} + \vec{v} = \overrightarrow{AB} + \overrightarrow{AD} = \overrightarrow{AB} + \overrightarrow{BC} = \overrightarrow{AC}.$$

**Proposição** (Propriedades da adição de vetores). Sejam $\vec{u}, \vec{v}, \vec{w}$ vetores quaisquer em $V^3$. Então,

- A1: $(\vec{u}+\vec{v})+\vec{w} = \vec{u}+(\vec{v}+\vec{w})$ (Associativa)
- A2: $\vec{u}+\vec{v} = \vec{v}+\vec{u}$ (Comutativa)
- A3: $\vec{u}+\vec{0} = \vec{0}+\vec{u} = \vec{u}$ (Elemento neutro)
- A4: Para cada vetor $\vec{u}$, existe um vetor $-\vec{u}$ tal que $\vec{u}+(-\vec{u}) = (-\vec{u})+\vec{u} = \vec{0}$ (Elemento oposto)

**Demonstração.**

A1. Escolhamos representantes de $\vec{u}, \vec{v}, \vec{w}$ como segue: $\vec{u} = \overrightarrow{AB}$, $\vec{v} = \overrightarrow{BC}$, $\vec{w} = \overrightarrow{CD}$. Então,
$$(\vec{u}+\vec{v})+\vec{w} = (\overrightarrow{AB}+\overrightarrow{BC})+\overrightarrow{CD} = \overrightarrow{AC}+\overrightarrow{CD} = \overrightarrow{AD},$$
$$\vec{u}+(\vec{v}+\vec{w}) = \overrightarrow{AB}+(\overrightarrow{BC}+\overrightarrow{CD}) = \overrightarrow{AB}+\overrightarrow{BD} = \overrightarrow{AD}.$$

Portanto $(\vec{u}+\vec{v})+\vec{w} = \vec{u}+(\vec{v}+\vec{w})$.

---

## Página 11

**Exercício.** Completar a demonstração da proposição. $\square$

**Observação.** A adição de vetores tem as mesmas propriedades da adição de números reais. É por isso que usamos o símbolo "$+$" para representar esta operação. [Na álgebra, $V^3$ munido da adição "$+$", ou seja $(V^3,+)$, vira um **grupo abeliano** ou **grupo comutativo**.]

**Exercícios.**
1. Prove que $\overrightarrow{BC} + (-\overrightarrow{BA}) = \overrightarrow{AC}$.
2. Prove que $\vec{u}+\vec{x} = \vec{u}+\vec{y} \Rightarrow \vec{x}=\vec{y}$.

### Multiplicação por escalar

**Definição.** Sejam $\alpha$ um número real (um escalar) e $\vec{u}$ um vetor.

1. Se $\alpha=0$ ou $\vec{u}=\vec{0}$, então $\alpha\vec{u}=\vec{0}$.
2. Se $\alpha\neq 0$ e $\vec{u}\neq\vec{0}$, o vetor $\alpha\vec{u}$ caracteriza-se por:
   - (a) $\alpha\vec{u} \parallel \vec{u}$
   - (b) $\alpha\vec{u}$ e $\vec{u}$ são de mesmo sentido se $\alpha>0$ e de sentido contrário se $\alpha<0$.
   - (c) $\|\alpha\vec{u}\| = |\alpha|\,\|\vec{u}\|$

> Figura: vetores $\vec{u}$, $2\vec{u}$ e $-2\vec{u}$.

**Proposição** (Propriedades da multiplicação por escalar). Quaisquer que sejam os números reais $\alpha$ e $\beta$, e quaisquer que sejam os vetores $\vec{u}, \vec{v}, \vec{w}$, valem as seguintes igualdades:

- M1: $\alpha(\vec{u}+\vec{v}) = \alpha\vec{u}+\alpha\vec{v}$ (Distributividade)
- M2: $(\alpha+\beta)\vec{u} = \alpha\vec{u}+\beta\vec{u}$ (Distributividade)
- M3: $1\vec{u} = \vec{u}$ (Elt neutro)
- M4: $\alpha(\beta\vec{u}) = (\alpha\beta)\vec{u} = \beta(\alpha\vec{u})$ (Associatividade)

---

## Página 12

**Observação.** $(V^3, +, \cdot)$ é um exemplo de um **espaço vetorial real**, um conceito que vocês vão encontrar na disciplina Álgebra Linear.

**Exercícios.**
1. Mostre que se $\alpha\neq 0$, então $\alpha\vec{v}=\vec{w} \Rightarrow \vec{v}=\tfrac{1}{\alpha}\vec{w}$.
2. Resolva o seguinte sistema nas incógnitas $\vec{x}$ e $\vec{y}$:
$$\begin{cases}\vec{x}+2\vec{y}=\vec{u}\\ 3\vec{x}-\vec{y}=2\vec{u}+\vec{v}\end{cases}$$

### Aplicações geométricas

1. **Proposição.** As diagonais de um paralelogramo têm o mesmo ponto médio.

**Demonstração.** Seja $M$ o ponto médio da diagonal $AC$, ou seja, $\overrightarrow{CM}=\overrightarrow{MA}$. Precisamos mostrar que $\overrightarrow{BM}=\overrightarrow{MD}$.

Temos:
$$\overrightarrow{BM} = \overrightarrow{BC}+\overrightarrow{CM} = \overrightarrow{BC}+\overrightarrow{MA} \quad\text{(pois }M\text{ é pt médio de }AC\text{)}$$
$$= \overrightarrow{MA}+\overrightarrow{BC} \quad\text{(adição é comutativa)}$$
$$= \overrightarrow{MA}+\overrightarrow{AD} \quad\text{(}ABCD\text{ é um paralelogramo)}$$
$$= \overrightarrow{MD}. \quad\blacksquare$$

2. Veja Exercício 8 da Lista 1.

---

## Dependência Linear

### 1. Caso de dois vetores

Dois vetores $\vec{u}$ e $\vec{v}$ são **paralelos** se eles têm a mesma direção. Portanto, eles podem ser representados por pares de pontos de uma mesma reta.

> Figura: dois vetores $\vec{u} = \overrightarrow{AB}$ e $\vec{v} = \overrightarrow{AC}$ sobre a mesma reta.

Observe que o vetor nulo $\vec{0}$ é paralelo a qualquer outro vetor: $\vec{u} = \overrightarrow{AA}$, $\vec{v} = \overrightarrow{AC}$; os pontos $A, A, C$ pertencem a uma reta.

Suponha que $\vec{u}\neq\vec{0}$ e $\vec{v}\neq\vec{0}$. Então $\|\vec{u}\|\neq 0$ e $\|\vec{v}\|\neq 0$.

Temos $\dfrac{\vec{u}}{\|\vec{u}\|} = \dfrac{\vec{v}}{\|\vec{v}\|}$ ou $\dfrac{\vec{u}}{\|\vec{u}\|} = -\dfrac{\vec{v}}{\|\vec{v}\|}$

Ou seja: $\|\vec{v}\|\,\vec{u} - \|\vec{u}\|\,\vec{v} = \vec{0}$ ou $\|\vec{v}\|\,\vec{u} + \|\vec{u}\|\,\vec{v} = \vec{0}$.

Portanto, se $\vec{u}$ e $\vec{v}$ são paralelos, existem escalares $\alpha, \beta$ não ambos nulos, tal que
$$\boxed{\alpha\vec{u}+\beta\vec{v}=\vec{0}} \tag{1}$$

Esta caracterização inclui o caso onde um (ou ambos) dos vetores é nulo.

Reciprocamente, suponha que $\alpha\vec{u}+\beta\vec{v}=\vec{0}$ para alguns escalares com $\alpha\neq 0$ ou $\beta\neq 0$. Suponha (sem perda de generalidade) que $\alpha\neq 0$. Então
$$\alpha\vec{u}+\beta\vec{v}=\vec{0} \Rightarrow \alpha\vec{u}=-\beta\vec{v} \Rightarrow \vec{u}=-\frac{\beta}{\alpha}\vec{v},$$
ou seja, $\vec{u}$ e $\vec{v}$ são paralelos.

---

## Página 14

Portanto,

**Proposição.** Dois vetores $\vec{u}$ e $\vec{v}$ são paralelos se, e somente se, existem escalares $\alpha, \beta$ não ambos nulos, tal que $\alpha\vec{u}+\beta\vec{v}=\vec{0}$.

Observe que usando a proposição acima, dois vetores **não** são paralelos se e somente se $\alpha\vec{u}+\beta\vec{v}=\vec{0} \Rightarrow \alpha=\beta=0$.

A equação (1) nos disse que os vetores $\vec{u}$ e $\vec{v}$ **dependem** um do outro, por isso que dizemos que dois vetores paralelos são **(linearmente) dependentes**. Caso contrário, eles são **(linearmente) independentes**.

Vamos obter conceitos análogos para três vetores.

### 2. Caso de três vetores

Sejam $\vec{u}, \vec{v}, \vec{w}$ três vetores. Podemos representar $\vec{u}$ e $\vec{v}$ como $\vec{u}=\overrightarrow{AB}$ e $\vec{v}=\overrightarrow{AC}$.

Suponha que $\vec{u}$ e $\vec{v}$ não são paralelos. Então $A, B, C$ determinam um plano único $\mathcal{P}$ (Axioma I4).

Agora, $\vec{w}=\overrightarrow{AD}$ para algum ponto $D$ do espaço. Temos duas possibilidades:

- **Caso (i):** $D\in\mathcal{P}$

> Figura: três vetores $\vec{u}, \vec{v}, \vec{w}$ no plano $\mathcal{P}$.

Neste caso, dizemos que $\vec{u}, \vec{v}, \vec{w}$ são **paralelos ao mesmo plano**.

- **Caso (ii):** $D\notin\mathcal{P}$

> Figura: três vetores $\vec{u}, \vec{v}, \vec{w}$ com $\vec{w}$ saindo do plano $\mathcal{P}$.

---

## Página 15

Queremos um critério algébrico para caracterizar os dois casos.

Considere o Caso(i).

> Figura: plano com $A$, $B$, $B'$, $C'$, $D$ e os vetores $\vec{u}, \vec{v}, \vec{w}$; retas $\ell_1$ e $\ell_2$ paralelas.

Seja $\ell_1$ a reta (única) que contém os pontos $A$ e $B$ e seja $\ell_2$ a reta (única) que contém os pontos $A$ e $C$.

Por $D$ passa uma reta única paralela a $\ell_2$. Esta reta intersecta a reta $\ell_1$ em um ponto $B'$. Da mesma maneira, a única reta por $D$ paralela a $\ell_1$ intersecta $\ell_2$ em um ponto $C'$. O polígono $AB'DC'$ é um paralelogramo, portanto $\overrightarrow{AD}=\overrightarrow{AB'}+\overrightarrow{AC'}$.

Mas $\overrightarrow{AB'} \parallel \overrightarrow{AB}=\vec{u}$ e $\overrightarrow{AC'} \parallel \overrightarrow{AC}=\vec{v}$. Logo,
$$\vec{w} = \alpha\vec{u}+\beta\vec{v} \quad\text{para alguns escalares }\alpha,\beta.$$

Equivalentemente,
$$\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}=\vec{0} \quad\text{(com }\gamma=-1\text{ em nosso caso).} \tag{2}$$

Colocando todos estes casos juntos, mostramos que se $\vec{u}, \vec{v}, \vec{w}$ são paralelos a um mesmo plano, então existem escalares $\alpha, \beta, \gamma$ **não todos nulos** tal que
$$\boxed{\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}=\vec{0}.} \tag{2}$$

---

## Página 16

Reciprocamente, suponha que $\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}=\vec{0}$ com $\alpha, \beta, \gamma$ não todos nulos. Podemos supor, sem perda de generalidade, que $\gamma\neq 0$.

Logo $\vec{w} = -\dfrac{\alpha}{\gamma}\vec{u} - \dfrac{\beta}{\gamma}\vec{v}$.

Isto implica que os vetores $\vec{u}, \vec{v}, \vec{w}$ podem ser representados por pares de pontos de um mesmo plano.

Acabamos de provar a seguinte proposição.

**Proposição.** Três vetores $\vec{u}, \vec{v}, \vec{w}$ são paralelos a um mesmo plano se, e somente se, existem escalares $\alpha, \beta, \gamma$ não todos nulos, tal que $\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}=\vec{0}$.

#### Observações

1. Segue da proposição que $\vec{u}, \vec{v}, \vec{w}$ **não** são paralelos ao mesmo plano (caso (ii), p.14) se, e somente se, $\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}=\vec{0} \Rightarrow \alpha=\beta=\gamma=0$.

2. A proposição acima inclui o caso onde dois (ou todos) dos vetores $\vec{u}, \vec{v}, \vec{w}$ são paralelos. (Exercício.)

Vamos definir os conceitos que acabamos de usar.

**Definição.** Se $\vec{z}=\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}$, dizemos que $\vec{z}$ é **combinação linear** de $\vec{u}, \vec{v}, \vec{w}$, ou $\vec{z}$ é **gerado** por $\vec{u}, \vec{v}, \vec{w}$. Os escalares $\alpha, \beta, \gamma$ são chamados dos **coeficientes** da combinação linear.

Três vetores $\vec{u}, \vec{v}, \vec{w}$ são **linearmente dependentes (LD)** se $\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}=\vec{0}$ para alguns escalares $\alpha, \beta, \gamma$ não todos nulos.

Se $\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}=\vec{0} \Rightarrow \alpha=\beta=\gamma=0$, dizemos que $\vec{u}, \vec{v}, \vec{w}$ são **linearmente independentes (LI)**.

---

## Página 17 — Observações

1. Os conceitos de LI e LD valem para qualquer número de vetores.
2. Se um dos vetores $\vec{v}_1, \vec{v}_2, \ldots, \vec{v}_n$ é o vetor nulo $\vec{0}$, então $\vec{v}_1, \vec{v}_2, \ldots, \vec{v}_n$ são LD.
3. Dois vetores $\vec{u}$ e $\vec{v}$ são LD $\Leftrightarrow$ são paralelos.
   Três vetores $\vec{u}, \vec{v}, \vec{w}$ são LD $\Leftrightarrow$ são paralelos a um mesmo plano $\Leftrightarrow$ um deles é combinação linear dos outros dois.

**Exemplo.** Mostre que os vetores $\vec{a}, \vec{b}, \vec{c}$, com
$$\vec{a} = \vec{u}+2\vec{v}-\vec{w}, \quad \vec{b} = 2\vec{u}-3\vec{v}+\vec{w}, \quad \vec{c} = 7\vec{v}-3\vec{w}$$
são LD.

**Solução.** Precisamos procurar escalares $\alpha, \beta, \gamma$, não todos nulos, do modo que $\alpha\vec{a}+\beta\vec{b}+\gamma\vec{c}=\vec{0}$.

Temos $\alpha\vec{a}+\beta\vec{b}+\gamma\vec{c} = (\alpha+2\beta)\vec{u} + (2\alpha-3\beta+7\gamma)\vec{v} + (-\alpha+\beta-3\gamma)\vec{w}$.

Então, basta procurar $\alpha, \beta, \gamma$ satisfazendo
$$\begin{cases} \alpha+2\beta = 0 & (1)\\ 2\alpha-3\beta+7\gamma=0 & (2)\\ -\alpha+\beta-3\gamma=0 & (3)\end{cases}$$

Equação (1) implica $\alpha=-2\beta$. Substituindo em (2) e (3) obtemos
$$\begin{cases}-7\beta+7\gamma=0 \\ +3\beta+3\gamma=0\end{cases} \Rightarrow \beta=\gamma \Rightarrow \alpha=-2\gamma.$$

Logo, $-2\gamma\vec{a}+\gamma\vec{b}+\gamma\vec{c}=\vec{0}$ qualquer que seja $\gamma\in\mathbb{R}$. Esta equação é equivalente a $\gamma(-2\vec{a}+\vec{b}+\vec{c})=\vec{0} \Rightarrow -2\vec{a}+\vec{b}+\vec{c}=\vec{0}$.

Achamos uma combinação linear de $\vec{a}, \vec{b}, \vec{c}$ que da o vetor $\vec{0}$,

---

## Página 18

com coeficientes não nulos. Portanto $\vec{a}, \vec{b}, \vec{c}$ são LD.

(Podemos também usar o método de escalonamento de sistemas lineares para resolver o sistema de equações (1)–(3).) $\square$

**Proposição.** Se três vetores são LI, então quaisquer dois deles são LI.

**Demonstração.** Suponha, por absurdo, que dois deles $\vec{u}$ e $\vec{v}$ são LD, e denote por $\vec{w}$ o terceiro vetor. Então existem $\alpha, \beta$, não ambos nulos, tal que $\alpha\vec{u}+\beta\vec{v}=\vec{0}$. Portanto,
$$\alpha\vec{u}+\beta\vec{v}+0\vec{w}=\vec{0}, \quad\text{com }\alpha, \beta, \gamma=0\text{ não todos nulos.}$$
Ou seja $\vec{u}, \vec{v}, \vec{w}$ são LD, o que contradiz a hipótese da proposição. $\blacksquare$

**Observação.** A recíproca da proposição anterior não vale. (Exercício.)

**Exemplo.** Prove que $\vec{u}, \vec{v}, \vec{w}$ LI $\Rightarrow \vec{u}+\vec{v},\;\vec{u}+\vec{w},\;\vec{v}+\vec{w}$ são LI.

**Solução.** Temos $\alpha(\vec{u}+\vec{v})+\beta(\vec{u}+\vec{w})+\gamma(\vec{v}+\vec{w})=\vec{0}$
$$\Leftrightarrow (\alpha+\beta)\vec{u}+(\alpha+\gamma)\vec{v}+(\beta+\gamma)\vec{w}=\vec{0}. \quad (*)$$

Como $\vec{u}, \vec{v}, \vec{w}$ são LI, $(*)$ $\Rightarrow \begin{cases}\alpha+\beta=0\\ \alpha+\gamma=0\\ \beta+\gamma=0\end{cases} \Rightarrow \alpha=\beta=\gamma=0$.

Portanto $\vec{u}+\vec{v},\;\vec{u}+\vec{w},\;\vec{v}+\vec{w}$ são LI.

**Proposição.** Se $\vec{u}, \vec{v}, \vec{w}$ são LI em $V^3$, então qualquer vetor $\vec{x}$ em $V^3$ é combinação linear única de $\vec{u}, \vec{v}, \vec{w}$.

**Demonstração.** Representamos os vetores $\vec{u}, \vec{v}, \vec{w}, \vec{x}$ como segue: $\vec{u}=\overrightarrow{OA}$, $\vec{v}=\overrightarrow{OB}$, $\vec{w}=\overrightarrow{OC}$ e $\vec{x}=\overrightarrow{OD}$.

---

## Página 19

> Figura: três vetores $\vec{u}, \vec{v}, \vec{w}$ com origem $O$, ponto $D$ fora do plano, pontos $M$, $Q$, $P$ auxiliares.

Sejam $M$ o ponto de interseção da reta por $D$ e paralela a $\vec{w}$ com o plano $\mathcal{P}$ que contém os pontos $O, A, B$; $Q$ o ponto da interseção da reta por $M$ e paralela a $\vec{u}$ com a reta que contém $O$ e $B$; $P$ o ponto de interseção da reta por $M$ e paralela a $\vec{v}$ com a reta que contém $O$ e $A$.

Temos:
$$\vec{x} = \overrightarrow{OD} = \overrightarrow{OM}+\overrightarrow{MD} = \overrightarrow{OP}+\overrightarrow{OQ}+\overrightarrow{MD} = \alpha\vec{u}+\beta\vec{v}+\gamma\vec{w} \quad\text{para alguns escalares }\alpha,\beta,\gamma.$$

Portanto $\vec{x}$ é combinação linear de $\vec{u}, \vec{v}, \vec{w}$.

Suponha que $\vec{x} = \alpha\vec{u}+\beta\vec{v}+\gamma\vec{w} = \alpha'\vec{u}+\beta'\vec{v}+\gamma'\vec{w}$. Então
$$(\alpha-\alpha')\vec{u}+(\beta-\beta')\vec{v}+(\gamma-\gamma')\vec{w}=\vec{0}.$$

Como $\vec{u}, \vec{v}, \vec{w}$ são LI, temos $\alpha'-\alpha=0$, $\beta'-\beta=0$, $\gamma'-\gamma=0$, ou seja, a combinação linear é única. $\blacksquare$

**Observação.** Como a combinação linear na proposição anterior é única, podemos identificar o vetor $\vec{x}=\alpha\vec{u}+\beta\vec{v}+\gamma\vec{w}$ com a tripla $(\alpha,\beta,\gamma)$ de números reais.

---

## Base

**Definição.** Uma tripla ordenada $E=(\vec{e}_1, \vec{e}_2, \vec{e}_3)$ de vetores LI chama-se de **base** de $V^3$.

Vimos que qualquer vetor $\vec{x}$ em $V^3$ é combinação linear única de $\vec{e}_1, \vec{e}_2, \vec{e}_3$, ou seja
$$\vec{x} = x_1\vec{e}_1 + x_2\vec{e}_2 + x_3\vec{e}_3$$

e os escalares $x_1, x_2, x_3$ são únicos para cada vetor $\vec{x}$.

Chamamos $(x_1, x_2, x_3)_E \in \mathbb{R}^3$ das **coordenadas** do vetor $\vec{x}$ na base $E$. Escrevemos $\vec{x}=(x_1,x_2,x_3)_E$.

Vamos interpretar os conceitos que vimos até agora sobre vetores usando suas coordenadas.

**Propriedades.**

(a) $(x_1,x_2,x_3)_E + (y_1,y_2,y_3)_E = (x_1+y_1, x_2+y_2, x_3+y_3)_E$

(b) $\alpha(x_1,x_2,x_3)_E = (\alpha x_1, \alpha x_2, \alpha x_3)_E$

---

## Página 21 — Dependência linear de dois vetores usando coordenadas

Sejam $\vec{u}=(a_1, b_1, c_1)_E$ e $\vec{v}=(a_2, b_2, c_2)_E$.

Os vetores $\vec{u}$ e $\vec{v}$ são LD se, e somente se, existem $x, y$ não ambos nulos tal que $x\vec{u}+y\vec{v}=\vec{0}$.

Usando a proposição anterior: $x\vec{u}+y\vec{v}=\vec{0} \Leftrightarrow (xa_1+ya_2, xb_1+yb_2, xc_1+yc_2)_E = (0,0,0)_E$

$$\Leftrightarrow \begin{cases} xa_1+ya_2 = 0\\ xb_1+yb_2 = 0\\ xc_1+yc_2 = 0\end{cases} \quad\text{com }x,y\text{ não ambos nulos.}$$

**Proposição.** Dois vetores $\vec{u}=(a_1,b_1,c_1)_E$, $\vec{v}=(a_2,b_2,c_2)_E$ são LD se, e somente se,
$$\begin{vmatrix}a_1 & b_1\\ a_2 & b_2\end{vmatrix}=0, \quad \begin{vmatrix}a_1 & c_1\\ a_2 & c_2\end{vmatrix}=0 \quad\text{e}\quad \begin{vmatrix}b_1 & c_1\\ b_2 & c_2\end{vmatrix}=0.$$

**Exemplos.**
1. Verifique se $\vec{u}$ e $\vec{v}$ são LI ou LD:
   - (a) $\vec{u}=(0,1,0)_E$, $\vec{v}=(1,0,1)_E$
   - (b) $\vec{u}=(1,-3,14)_E$, $\vec{v}=(\tfrac{1}{14},-\tfrac{3}{14},1)_E$

2. Determine $m$ e $n$ de modo que $\vec{u}$ e $\vec{v}$ sejam LD, sendo $\vec{u}=(1,m,n+1)_E$ e $\vec{v}=(m,n,10)_E$.

---

## Página 22 — Dependência linear de três vetores usando coordenadas

**Proposição.** Os vetores $\vec{u}=(a_1,b_1,c_1)_E$, $\vec{v}=(a_2,b_2,c_2)_E$, $\vec{w}=(a_3,b_3,c_3)_E$ são LD se, e somente se,

$$\begin{vmatrix}a_1 & b_1 & c_1\\ a_2 & b_2 & c_2\\ a_3 & b_3 & c_3\end{vmatrix}=0.$$

**Demonstração.** $\vec{u}, \vec{v}, \vec{w}$ são LD se, e somente se, existem $x, y, z$ não todos nulos tal que $x\vec{u}+y\vec{v}+z\vec{w}=\vec{0}$.

$$x\vec{u}+y\vec{v}+z\vec{w} = (xa_1+ya_2+za_3, xb_1+yb_2+zb_3, xc_1+yc_2+zc_3)_E = (0,0,0)_E.$$

Então $\vec{u}, \vec{v}, \vec{w}$ são LD se, e somente se, o sistema linear
$$\begin{cases}xa_1+ya_2+za_3=0\\ xb_1+yb_2+zb_3=0\\ xc_1+yc_2+zc_3=0\end{cases}$$
possui uma solução $(x,y,z)\neq(0,0,0)$, ou seja, se e somente se
$$\begin{vmatrix}a_1 & a_2 & a_3\\ b_1 & b_2 & b_3\\ c_1 & c_2 & c_3\end{vmatrix}=0 \quad\Leftrightarrow\quad \begin{vmatrix}a_1 & b_1 & c_1\\ a_2 & b_2 & c_2\\ a_3 & b_3 & c_3\end{vmatrix}=0. \quad\blacksquare$$

---

## Página 23 — Exemplos

1. Verifique se $\vec{u}=(1,-1,2)_E$, $\vec{v}=(-3,4,1)_E$, $\vec{w}=(1,0,9)_E$ são LI ou LD.

2. Calcule $m$ para que os vetores $\vec{u}=(m,1,1+m)_E$, $\vec{v}=(1,2,m)_E$, $\vec{w}=(1,1,1)_E$ sejam LD.

3. Sendo $E=(\vec{e}_1, \vec{e}_2, \vec{e}_3)$ é base de $V^3$ e que
$$\vec{f}_1 = 2\vec{e}_1-\vec{e}_2, \quad \vec{f}_2 = \vec{e}_1-\vec{e}_2+2\vec{e}_3, \quad \vec{f}_3 = \vec{e}_1+2\vec{e}_3$$
   - (a) Mostre que $F=(\vec{f}_1, \vec{f}_2, \vec{f}_3)$ é base de $V^3$.
   - (b) Calcule as coordenadas do vetor $\vec{v}=(1,1,1)_E$ na base $F$.

### Alguns pontos importantes

- Em $V^3$, uma base é formada por 3 vetores LI. (As bases não são únicas!)
- A importância de ter uma base é que qualquer vetor em $V^3$ pode ser representado de uma maneira única com uma tripla ordenada de números reais, ou seja, podemos identificar $V^3$ com $\mathbb{R}^3$.
- Todas as propriedades sobre vetores podem ser enunciadas usando coordenadas.
- As operações sobre vetores podem ser feitas usando coordenadas, que é mais fácil e mais prático (especialmente se queremos usar um computador).

---

## Mudança de base

Sabemos que $V^3$ não possui uma única base. Dadas duas bases $E=(\vec{e}_1,\vec{e}_2,\vec{e}_3)$ e $F=(\vec{f}_1,\vec{f}_2,\vec{f}_3)$ de $V^3$, um vetor $\vec{v}$ de $V^3$ tem coordenadas $(x_1,x_2,x_3)_E$ na base $E$ e coordenadas $(y_1,y_2,y_3)_F$ na base $F$.

Como $E$ é uma base e $\vec{f}_1, \vec{f}_2, \vec{f}_3$ são vetores de $V^3$, existem escalares $a_{ij}$ tal que
$$\vec{f}_1 = a_{11}\vec{e}_1 + a_{21}\vec{e}_2 + a_{31}\vec{e}_3$$
$$\vec{f}_2 = a_{12}\vec{e}_1 + a_{22}\vec{e}_2 + a_{32}\vec{e}_3$$
$$\vec{f}_3 = a_{13}\vec{e}_1 + a_{23}\vec{e}_2 + a_{33}\vec{e}_3$$

> Nota: $a_{ij}$ — $i$ é o coeficiente de $\vec{e}_i$, $j$ é o índice de $\vec{f}_j$.

Pela unicidade das coordenadas:
$$x_1 = a_{11}y_1+a_{12}y_2+a_{13}y_3, \quad x_2 = a_{21}y_1+a_{22}y_2+a_{23}y_3, \quad x_3 = a_{31}y_1+a_{32}y_2+a_{33}y_3.$$

---

## Página 25

Escrevendo as equações na forma matricial, obtemos

$$\begin{pmatrix}x_1\\ x_2\\ x_3\end{pmatrix}_E = \begin{pmatrix}a_{11} & a_{12} & a_{13}\\ a_{21} & a_{22} & a_{23}\\ a_{31} & a_{32} & a_{33}\end{pmatrix} \begin{pmatrix}y_1\\ y_2\\ y_3\end{pmatrix}_F.$$

A matriz $M_{EF} = \begin{pmatrix}a_{11} & a_{12} & a_{13}\\ a_{21} & a_{22} & a_{23}\\ a_{31} & a_{32} & a_{33}\end{pmatrix}$ chama-se de **matriz de mudança de base** $E$ para base $F$.

A primeira coluna de $M_{EF}$ é formada pelas coordenadas de $\vec{f}_1$ na base $E$, a segunda pelas de $\vec{f}_2$ e a terceira pelas de $\vec{f}_3$.

Escrevemos: $\begin{pmatrix}\;\end{pmatrix}_E = M_{EF}\begin{pmatrix}\;\end{pmatrix}_F$.

Como $\vec{f}_1, \vec{f}_2, \vec{f}_3$ são LI ($F$ é uma base), $\det(M_{EF})\neq 0$ e $M_{EF}$ possui uma inversa $(M_{EF})^{-1}$, com $M_{EF}\cdot(M_{EF})^{-1} = (M_{EF})^{-1}\cdot M_{EF} = \mathcal{I}_d$.

**Exemplos.**
1. Mostre que $M_{EE}=\mathcal{I}_d$.
2. Determine $a, b, c$ sabendo que $(1,1,2)_E=(2,1,0)_F$ e $M_{FE}=\begin{pmatrix}-1 & 0 & a\\ 2 & 1 & b\\ 1 & 0 & c\end{pmatrix}$.
3. Escreva a matriz de mudança da base $E$ para $F$ sabendo que $\vec{f}_1=(-3,1,1)_E$, $\vec{f}_2=(1,-2,1)_E$, $\vec{f}_3=(1,2,0)_E$. Quais são as coordenadas de $\vec{u}=(-4,1,-1)_F$ na base $E$?

---

## Página 26

**Proposição.** Sejam $E, F, G$ três bases de $V^3$. Então $M_{EF}\cdot M_{FG} = M_{EG}$.

**Demonstração.** Exercício.

**Corolário.** $M_{FE} = (M_{EF})^{-1}$.

**Demonstração.** Temos $M_{FE}\cdot M_{EF} = M_{FF} = \mathcal{I}_d$ e $M_{EF}\cdot M_{FE} = M_{EE} = \mathcal{I}_d$. Portanto $M_{FE}$ é a matriz inversa de $M_{EF}$. $\blacksquare$

**Exercício.** Sejam $E=(\vec{u},\vec{v},\vec{w})$ uma base de $V^3$ e $F=(\vec{v}-\vec{u},\vec{u}-\vec{w},\vec{u})$.
1. Mostre que $F$ é uma base de $V^3$.
2. Calcule as coordenadas de $\vec{u}+2\vec{v}+3\vec{w}$ na base $F$.

**Solução.** 1) $\vec{f}_1=(-1,1,0)_E$, $\vec{f}_2=(1,0,-1)_E$, $\vec{f}_3=(1,0,0)_E$. Como $\begin{vmatrix}-1 & 1 & 1\\ 1 & 0 & 0\\ 0 & -1 & 0\end{vmatrix}=-1\neq 0$, $F$ é base de $V^3$.

2. $\vec{u}=(0,0,1)_F$, $\vec{v}=(1,0,1)_F$, $\vec{w}=(0,-1,1)_F$ e

$$M_{FE} = \begin{pmatrix}0 & 1 & 0\\ 0 & 0 & -1\\ 1 & 1 & 1\end{pmatrix}, \quad \begin{pmatrix}x\\ y\\ z\end{pmatrix}_F = \begin{pmatrix}0 & 1 & 0\\ 0 & 0 & -1\\ 1 & 1 & 1\end{pmatrix}\begin{pmatrix}1\\ 2\\ 3\end{pmatrix}_E = \begin{pmatrix}2\\ -3\\ 6\end{pmatrix}_F.$$

---

## Produto escalar

Sejam $\vec{u}$ e $\vec{v}$ dois vetores não nulos com a mesma origem $O$: $\vec{u}=\overrightarrow{OP}$, $\vec{v}=\overrightarrow{OQ}$.

**Definição.** A **medida angular** entre $\vec{u}$ e $\vec{v}$ é a medida $\Theta$ do ângulo $\widehat{POQ}$ com $0\leq\Theta\leq\pi$.

### Lei do Cosseno

$$\boxed{c^2 = a^2+b^2-2ab\cos\Theta}$$

$$\boxed{\|\vec{u}-\vec{v}\|^2 = \|\vec{u}\|^2+\|\vec{v}\|^2-2\|\vec{u}\|\|\vec{v}\|\cos\Theta}, \quad \Theta=\text{ang}(\vec{u},\vec{v}).$$

**Definição.** O **produto escalar** dos vetores $\vec{u}$ e $\vec{v}$, indicado por $\vec{u}\cdot\vec{v}$:

- (a) Se $\vec{u}$ ou $\vec{v}$ é nulo, $\vec{u}\cdot\vec{v}=0$.
- (b) Se $\vec{u}$ e $\vec{v}$ não são nulos: $\boxed{\vec{u}\cdot\vec{v} = \|\vec{u}\|\|\vec{v}\|\cos\Theta.}$

**Observações/Propriedades.**

1. $\cos\Theta = \dfrac{\vec{u}\cdot\vec{v}}{\|\vec{u}\|\|\vec{v}\|}$.
2. $\|\vec{u}\| = \sqrt{\vec{u}\cdot\vec{u}}$.
3. $\vec{u}\perp\vec{v}$ se e somente se $\vec{u}\cdot\vec{v}=0$.
4. **Desigualdade de Schwarz:** $|\vec{u}\cdot\vec{v}|\leq\|\vec{u}\|\|\vec{v}\|$.

---

## Base ortonormal

**Definição.** $E=(\vec{e}_1,\vec{e}_2,\vec{e}_3)$ é **base ortonormal** se $\|\vec{e}_i\|=1$ e $\vec{e}_i\cdot\vec{e}_j=0$ para $i\neq j$.

**Proposição.** Seja $E$ ortonormal, $\vec{u}=(a_1,b_1,c_1)_E$, $\vec{v}=(a_2,b_2,c_2)_E$. Então
$$\boxed{\vec{u}\cdot\vec{v} = a_1a_2+b_1b_2+c_1c_2.}$$

---

## Página 31–32

**Demonstração.** $\|\vec{x}\|^2=x_1^2+x_2^2+x_3^2$ (Pitágoras). Pela Lei do Cosseno e expansão:

$$\|\vec{u}-\vec{v}\|^2 = \|\vec{u}\|^2+\|\vec{v}\|^2-2(a_1a_2+b_1b_2+c_1c_2),$$

portanto $a_1a_2+b_1b_2+c_1c_2 = \vec{u}\cdot\vec{v}$. $\blacksquare$

**Proposição** (Propriedades do produto escalar). $\forall\vec{u},\vec{v},\vec{w}$, $\forall\lambda\in\mathbb{R}$:

- (a) $\vec{u}\cdot(\vec{v}+\vec{w}) = \vec{u}\cdot\vec{v}+\vec{u}\cdot\vec{w}$
- (b) $\vec{u}\cdot(\lambda\vec{v}) = \lambda(\vec{u}\cdot\vec{v})$
- (c) $\vec{u}\cdot\vec{v} = \vec{v}\cdot\vec{u}$
- (d) Se $\vec{u}\neq\vec{0}$, então $\vec{u}\cdot\vec{u}>0$.

---

## Projeção ortogonal

$$\boxed{\vec{p} = \frac{\vec{u}\cdot\vec{v}}{\|\vec{u}\|^2}\vec{u}}, \qquad \boxed{\vec{q} = \vec{v}-\frac{\vec{u}\cdot\vec{v}}{\|\vec{u}\|^2}\vec{u}.}$$

**Proposição.** $\text{proj}_{\vec{u}}\vec{v} = \dfrac{\vec{u}\cdot\vec{v}}{\|\vec{u}\|^2}\vec{u}$, com módulo $\|\vec{p}\|=\dfrac{|\vec{u}\cdot\vec{v}|}{\|\vec{u}\|}$.

---

## Processo de ortonormalização de Gram-Schmidt

1. $\vec{i}=\dfrac{\vec{e}_1}{\|\vec{e}_1\|}$.
2. $\vec{q}_2=\vec{e}_2-(\vec{i}\cdot\vec{e}_2)\vec{i}$, $\vec{j}=\dfrac{\vec{q}_2}{\|\vec{q}_2\|}$.
3. $\vec{q}_3=\vec{e}_3-(\vec{e}_3\cdot\vec{i})\vec{i}-(\vec{e}_3\cdot\vec{j})\vec{j}$, $\vec{k}=\dfrac{\vec{q}_3}{\|\vec{q}_3\|}$.

---

## Orientação de $V^3$

$E\sim F$ se $\det(M_{EF})>0$. $\mathcal{B}$ tem exatamente duas classes de equivalência (**orientações**).

**Convenção.** Orientamos $V^3$ com a **regra da mão direita**.

---

## Produto vetorial

**Definição.** O **produto vetorial** $\vec{u}\wedge\vec{v}$:
- (a) Se $\vec{u}$ e $\vec{v}$ são LD, $\vec{u}\wedge\vec{v}=\vec{0}$.
- (b) Se LI: (b1) $\vec{u}\wedge\vec{v}\perp\vec{u}$ e $\vec{u}\wedge\vec{v}\perp\vec{v}$; (b2) $(\vec{u},\vec{v},\vec{u}\wedge\vec{v})$ é base positiva; (b3) $\|\vec{u}\wedge\vec{v}\|=\|\vec{u}\|\|\vec{v}\|\sin\Theta$.

**Proposição.** Em base ortonormal positiva $B=(\vec{i},\vec{j},\vec{k})$:

$$\vec{u}\wedge\vec{v} = \begin{vmatrix}\vec{i} & \vec{j} & \vec{k}\\ a_1 & b_1 & c_1\\ a_2 & b_2 & c_2\end{vmatrix}$$

**Propriedades:**
- (a) $\vec{u}\wedge\vec{v} = -\vec{v}\wedge\vec{u}$.
- (b) $\vec{u}\wedge(\lambda\vec{v}) = \lambda(\vec{u}\wedge\vec{v})$.
- (c) $\vec{u}\wedge(\vec{v}+\vec{w}) = \vec{u}\wedge\vec{v}+\vec{u}\wedge\vec{w}$.

**Corolário** (Identidade de Jacobi).
$$(\vec{u}\wedge\vec{v})\wedge\vec{w}+(\vec{v}\wedge\vec{w})\wedge\vec{u}+(\vec{w}\wedge\vec{u})\wedge\vec{v}=\vec{0}.$$

---

## Produto misto

$$[\vec{u},\vec{v},\vec{w}] = \vec{u}\wedge\vec{v}\cdot\vec{w} = \begin{vmatrix}a_1 & b_1 & c_1\\ a_2 & b_2 & c_2\\ a_3 & b_3 & c_3\end{vmatrix}.$$

$V = |[\vec{u},\vec{v},\vec{w}]|$ é o volume do paralelepípedo determinado por $\vec{u},\vec{v},\vec{w}$.

---

## §2. Retas e Planos

### Sistema de Coordenadas

$\Sigma=(O,E)$: **sistema de coordenadas** em $\mathbb{E}^3$, origem $O$, base $E$. Coordenadas de $P$ são as de $\overrightarrow{OP}$ na base $E$.

### Soma de ponto com vetor

$P+\vec{u}=Q \Leftrightarrow \overrightarrow{PQ}=\vec{u}$.

**Proposição.** $\overrightarrow{AB}=(x_2-x_1,y_2-y_1,z_2-z_1)_E$. $d(A,B)=\sqrt{(x_2-x_1)^2+(y_2-y_1)^2+(z_2-z_1)^2}$ (sistema ortogonal).

---

## Retas

$$\boxed{X\in r \Leftrightarrow X=A+\lambda\vec{u},\quad \lambda\in\mathbb{R}.}$$

Forma paramétrica: $\begin{cases}x=x_0+\lambda a\\ y=y_0+\lambda b\\ z=z_0+\lambda c\end{cases}$. Forma simétrica: $\dfrac{x-x_0}{a}=\dfrac{y-y_0}{b}=\dfrac{z-z_0}{c}$.

---

## Planos

$$\boxed{X\in\Pi \Leftrightarrow X=A+\lambda\vec{u}+\mu\vec{v},\quad \lambda,\mu\in\mathbb{R}.}$$

**Equação geral:** $ax+by+cz+d=0$.

**Vetor normal:** $(a,b,c)$ é normal a $\Pi$ se e somente se $\Pi: ax+by+cz+d=0$ (sistema ortogonal).

---

## Posição relativa e interseção de retas e planos

Quatro casos para duas retas: paralelas distintas, coincidentes, concorrentes, reversas.

$$\cos(\text{ang}(r,s)) = \frac{|\vec{r}\cdot\vec{s}|}{\|\vec{r}\|\|\vec{s}\|}, \quad \sin(\text{ang}(r,\Pi)) = \frac{|\vec{r}\cdot\vec{n}|}{\|\vec{r}\|\|\vec{n}\|}, \quad \cos(\text{ang}(\Pi_1,\Pi_2)) = \frac{|\vec{n}_1\cdot\vec{n}_2|}{\|\vec{n}_1\|\|\vec{n}_2\|}.$$

---

## Distância

$$d(P,r) = \frac{\|\overrightarrow{AP}\wedge\vec{r}\|}{\|\vec{r}\|}, \quad d(P,\Pi) = \frac{|ax_0+by_0+cz_0+d|}{\sqrt{a^2+b^2+c^2}}, \quad d(r,s) = \frac{|\overrightarrow{AB}\cdot\vec{r}\wedge\vec{s}|}{\|\vec{r}\wedge\vec{s}\|}.$$

---

## Mudança de Sistema de Coordenadas

$$\begin{pmatrix}x\\ y\\ z\end{pmatrix} = \begin{pmatrix}h\\ k\\ l\end{pmatrix} + M_{EF}\begin{pmatrix}u\\ v\\ w\end{pmatrix}.$$

**Translação:** $M_{EE}=\mathcal{I}_d \Rightarrow \begin{cases}x=h+u\\ y=k+v\\ z=l+w\end{cases}$.

**Rotação** (em torno de $\vec{e}_3$, ângulo $\Theta$):
$$M_{EF}=\begin{pmatrix}\cos\Theta & -\sin\Theta & 0\\ \sin\Theta & \cos\Theta & 0\\ 0 & 0 & 1\end{pmatrix}, \quad \begin{cases}x=u\cos\Theta-v\sin\Theta\\ y=u\sin\Theta+v\cos\Theta\\ z=w.\end{cases}$$

---

## Cônicas

**Definição.** Uma **cônica** é o lugar geométrico dos pontos $X=(x,y)$ que satisfazem $g(x,y)=ax^2+bxy+cy^2+dx+ey+f=0$.

**Matriz de $g$:**
$$M = \begin{pmatrix}a & \frac{b}{2} & \frac{d}{2}\\ \frac{b}{2} & c & \frac{e}{2}\\ \frac{d}{2} & \frac{e}{2} & f\end{pmatrix}.$$

### Elipse

$$\frac{x^2}{a^2}+\frac{y^2}{b^2}=1, \quad b^2=a^2-c^2, \quad e=\frac{c}{a}\in(0,1).$$

### Hipérbole

$$\frac{x^2}{a^2}-\frac{y^2}{b^2}=1, \quad c^2=a^2+b^2, \quad e=\frac{c}{a}>1. \quad \text{Assíntotas: }y=\pm\frac{b}{a}x.$$

### Parábola

$$y^2=4px. \quad e=1.$$

---

## Translação e rotação de cônicas

**Passo 1.** Se $ac-\dfrac{b^2}{4}\neq 0$, eliminar termos lineares: resolver $\begin{cases}ah+\tfrac{b}{2}k+\tfrac{d}{2}=0\\ \tfrac{b}{2}h+ck+\tfrac{e}{2}=0.\end{cases}$

**Passo 2.** Se $b\neq 0$, eliminar o termo misto: $\cot 2\Theta=\dfrac{a-c}{b}$, com

$$\begin{cases}a'+c'=a+c\\ a'-c'=b\sqrt{1+\left(\dfrac{a-c}{b}\right)^2}\end{cases}.$$

---

## Retas secantes, tangentes e normais

**Definição.**
- $r$ é **secante** a $C$ se $|r\cap C|=2$.
- $r$ é **tangente** a $C$ se $r\cap C$ tem raiz dupla.

**Equação da reta tangente à elipse** $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=1$ no ponto $T=(h,k)$:
$$\boxed{\frac{h}{a^2}x+\frac{k}{b^2}y=1.}$$

---

## Página 104

- $1-k^2<0 \Leftrightarrow k<-1$ ou $k>1$: $r\cap C=\phi$.
- $1-k^2=0 \Leftrightarrow k=\pm 1 \Rightarrow \lambda^2=0$, $\lambda=0$ solução dupla:
  - $k=1$: $r: X=(\lambda m, 1)$, $\lambda\in\mathbb{R}$, reta tangente no ponto $(0,1)$.
  - $k=-1$: $r: X=(\lambda m,-1)$, $\lambda\in\mathbb{R}$, reta tangente no ponto $(0,-1)$.
- $1-k^2>0 \Leftrightarrow -1<k<1$: $\lambda=\pm\dfrac{2}{m}\sqrt{1-k^2}$, $r$ é uma reta secante.

> Figura: elipse com retas tangentes $k=1$ e $k=-1$ e reta secante.

---

## 2. Hipérbole

Escolhamos um sistema ortogonal de coordenadas de modo que os focos da hipérbole estejam no eixo $x$. Então $C: \dfrac{x^2}{a^2}-\dfrac{y^2}{b^2}-1=0$ e

$$r\cap C: \left(\frac{m^2}{a^2}-\frac{n^2}{b^2}\right)\lambda^2+2\left(\frac{mh}{a^2}-\frac{nk}{b^2}\right)\lambda+\frac{h^2}{a^2}-\frac{k^2}{b^2}-1=0.$$

A equação de $r\cap C$ é de segundo grau se, e somente se, $\dfrac{m^2}{a^2}-\dfrac{n^2}{b^2}\neq 0$, equivalentemente $\vec{r}=(m,n)$ não é paralelo a $(a,b)$ ou $(a,-b)$, equivalentemente $r$ não é paralela a uma das assíntotas.

---

## Página 105

Se a equação de $r\cap C$ é de segundo grau, calculamos $\Delta$:

- $\Delta>0$: $r$ é uma reta secante.
- $\Delta=0$: $r$ é uma reta tangente. Se $\lambda_0$ é a solução dupla, então $T=(h+\lambda_0 m, k+\lambda_0 n)$ é o ponto de tangência.
- $\Delta<0$: $r\cap C=\phi$.

Suponha que $r$ é paralela a uma das assíntotas. Caso $\vec{r}=(a,b)$:

$$r\cap C:\; 2\left(\frac{h}{a}-\frac{k}{b}\right)\lambda+\frac{h^2}{a^2}-\frac{k^2}{b^2}-1=0.$$

$\dfrac{h}{a}-\dfrac{k}{b}=0 \Leftrightarrow A=(h,k)\in r$ pertence à assíntota $\Leftrightarrow r$ é uma das assíntotas. Como $\dfrac{h}{a}=\dfrac{k}{b}$, temos $\dfrac{h^2}{a^2}-\dfrac{k^2}{b^2}-1=-1\neq 0$, logo $r\cap C=\phi$.

Se $\dfrac{h}{a}-\dfrac{k}{b}\neq 0$, $r$ é paralela a uma assíntota mas distinta dela. A equação de $r\cap C$ tem uma solução única.

**Resumindo:**

> Figura: cinco casos de posição relativa da reta e hipérbole: retas secantes ($\Delta>0$), reta tangente ($\Delta=0$), $r\cap C=\phi$ ($\Delta<0$), assíntota, reta paralela a uma das assíntotas.

---

## 3. Parábola

Escolhamos um sistema de coordenadas de modo que a equação de $C$ seja $y^2=4px$. Então

$$r\cap C:\; n^2\lambda^2+2(nk-2pm)\lambda+k^2-4ph=0.$$

A equação é de segundo grau se e somente se $n\neq 0$, equivalentemente $\vec{r}=(m,n)$ não é paralelo ao eixo da parábola.

Se $n\neq 0$:
- $\Delta>0$: $r$ é reta secante.
- $\Delta=0$: $r$ é reta tangente no ponto $T=(h+\lambda_0 m, k+\lambda_0 n)$.
- $\Delta<0$: $r\cap C=\phi$.

Se $n=0$: $r\cap C:\; -4pm\lambda+k^2-ph=0$. Como $p\neq 0$ e $m\neq 0$, $r\cap C$ é um ponto único.

> Figura: quatro casos de posição relativa da reta e parábola ($n\neq 0$, $\Delta>0$; $n\neq 0$, $\Delta=0$; $n\neq 0$, $\Delta<0$; $n=0$).

---

## Coordenadas polares (no plano)

Um **sistema de coordenadas** nos ajuda a localizar as posições de pontos no plano (ou no espaço).

Seja $\Sigma=(O,(\vec{i},\vec{j}))$ um sistema ortogonal de coordenadas de um plano. Tal sistema é chamado **sistema de coordenadas cartesiano**.

### Coordenadas polares

Fixamos um ponto $O$ no plano e uma semi-reta orientada. Chamamos $O$ de **polo** e a semi-reta **eixo-polar**.

> Figura: polo $O$ com eixo polar horizontal e ponto $P$ com coordenadas $(r,\Theta)$.

Dado um ponto $P$ do plano, denotamos por $\Theta$ o ângulo entre o semi-eixo polar e $\overrightarrow{OP}$ medido no sentido anti-horário, e por $r$ o módulo de $\overrightarrow{OP}$, i.e., $r=\|\overrightarrow{OP}\|$.

O par $(r,\Theta)$ é denominado **coordenadas polares** do ponto $P$. $\Theta$ é o **argumento** e $r$ o **raio**.

**Observação.**
1. Variando $\Theta\in[0,2\pi)$, $r>0$, fica associado a cada ponto do plano um único par $(r,\Theta)$, exceto o polo que tem coordenadas $(0,\Theta)$, $0\leq\Theta<2\pi$.
2. Podemos supor que $\Theta\in\mathbb{R}$, mas $(r,\Theta)$ e $(r,\Theta+2\pi)$ representam o mesmo ponto no plano.

---

## Relação entre coordenadas polares e cartesianas

Seja $\Sigma=(O,(\vec{i},\vec{j}))$ um sistema cartesiano. Escolhamos $O$ com o polo e o semi-eixo $x$, $\overrightarrow{Ox}$, como o eixo polar.

> Figura: eixos cartesianos com ponto $P=(x,y)=(r,\Theta)$.

Seja $P$ um ponto do plano distinto da origem (polo). Temos $\dfrac{x}{r}=\cos\Theta$ e $\dfrac{y}{r}=\sin\Theta$, portanto:
$$\begin{cases}x=r\cos\Theta\\ y=r\sin\Theta.\end{cases}$$

Daí:
$$\begin{cases}r^2=x^2+y^2 \Rightarrow r=\sqrt{x^2+y^2}\\ \tan\Theta=\dfrac{y}{x} \quad\text{se }x\neq 0.\end{cases}$$

### Funções em coordenadas polares

Expressões da forma $r=f(\Theta)$ são chamadas **funções em coordenadas polares**.

> Figura: polo $O$ com eixo polar e curva $r=f(\Theta)$.

**Exemplos.**

1. $r=1$. Como $r=\sqrt{x^2+y^2}$, temos $r=1 \Rightarrow x^2+y^2=1$. O gráfico de $r=1$ é o **círculo** de centro $O$ e raio $1$.

2. $r=-3\sin\Theta$. Multiplicando por $r$: $r^2+3r\sin\Theta=0$. Em coordenadas cartesianas: $x^2+y^2+3y=0 \Leftrightarrow x^2+\left(y+\dfrac{3}{2}\right)^2=\dfrac{9}{4}$, o **círculo** de centro $\left(0,-\dfrac{3}{2}\right)$ e raio $\dfrac{3}{2}$.

3. $r\cos\Theta=3$. Em coordenadas cartesianas: $x=3$, a **reta vertical** passando por $(3,0)$.

4. $\Theta=\dfrac{\pi}{4}$. É a equação da **semi-reta** que forma um ângulo $\dfrac{\pi}{4}$ com o eixo polar.

5. **Lemniscata:** é o lugar geométrico dos pontos $P$ de um plano cujo produto das distâncias a dois pontos fixos $F_1$ e $F_2$ do plano é constante e igual a $\left(\dfrac{d(F_1,F_2)}{2}\right)^2$.

Vamos achar a equação da lemniscata em coordenadas cartesianas e polares. Escolhamos um sistema de coordenadas $\Sigma=(O,(\vec{i},\vec{j}))$ tal que $F_1=(-a,0)$ e $F_2=(0,a)$.

Então $X=(x,y)\in\text{lemniscata} \Leftrightarrow d(X,F_1)\cdot d(X,F_2)=a^2$.

---

## Página 110

$$X=(x,y)\in\text{lemniscata} \Leftrightarrow \sqrt{(x+a)^2+y^2}\cdot\sqrt{(x-a)^2+y^2}=a^2$$
$$\Leftrightarrow \left((x+a)^2+y^2\right)\left((x-a)^2+y^2\right)=a^4$$
$$\Leftrightarrow (x+a)^2(x-a)^2+y^2\left((x+a)^2+(x-a)^2\right)+y^4=a^4$$
$$\Leftrightarrow x^4-2a^2x^2+a^4+2x^2y^2+2a^2y^2+y^4=a^4$$
$$\Leftrightarrow \boxed{(x^2+y^2)^2-2a^2(x^2-y^2)=0}$$

que é uma equação de grau 4 em $x,y$.

Em coordenadas polares, esta equação vira
$$(r^2)^2-2a^2(r^2\cos^2\Theta-r^2\sin^2\Theta)=0 \Leftrightarrow \boxed{r^2-2a^2\cos 2\Theta=0.}$$

> Figura: lemniscata com dois laços simétricos em relação à origem.

**Exercício.** Achar equações da elipse/hipérbole/parábola nas coordenadas polares.

---

## Superfície esférica

Vamos considerar o lugar geométrico de pontos do espaço $\mathbb{E}^3$ cujas coordenadas, em relação a um dado sistema de coordenadas, satisfazem uma equação de grau dois. Começamos com a esfera.

**Definição.** A **esfera**, ou superfície esférica, $S$ de **centro** $C$ e **raio** $\rho$ (número positivo) é o lugar geométrico dos pontos $X$ de $\mathbb{E}^3$ tais que $d(X,C)=\rho$.

Seja $\Sigma=(O,B)$ um sistema ortogonal de coordenadas, $C=(x_0,y_0,z_0)$ e $X=(x,y,z)$. Então
$$X\in S \Leftrightarrow (x-x_0)^2+(y-y_0)^2+(z-z_0)^2=\rho^2.$$

Esta equação é chamada **equação reduzida** da superfície esférica. Desenvolvendo os quadrados:
$$X=(x,y,z)\in S \Leftrightarrow x^2+y^2+z^2-2x_0x-2y_0y-2z_0z+x_0^2+y_0^2+z_0^2-\rho^2=0,$$
que é da forma
$$x^2+y^2+z^2+ax+by+cz+d=0. \quad (*)$$

Esta equação é chamada **equação geral** da superfície esférica.

Nem todas as equações da forma $(*)$ descrevem superfícies esféricas; por exemplo $x^2+y^2+z^2+1=0$.

Podemos escrever $(*)$, completando quadrados, da forma
$$\left(x+\frac{a}{2}\right)^2+\left(y+\frac{b}{2}\right)^2+\left(z+\frac{c}{2}\right)^2=\frac{a^2+b^2+c^2-4d}{4}.$$

**Proposição.** A equação $x^2+y^2+z^2+ax+by+cz+d=0$ descreve, em relação a um sistema ortogonal de coordenadas fixado,

(a) uma superfície esférica de centro $C=\left(-\dfrac{a}{2},-\dfrac{b}{2},-\dfrac{c}{2}\right)$ e raio $\dfrac{\sqrt{a^2+b^2+c^2-4d}}{2}$ se $a^2+b^2+c^2-4d>0$;

(b) o conjunto formado pelo ponto $C=\left(-\dfrac{a}{2},-\dfrac{b}{2},-\dfrac{c}{2}\right)$ se $a^2+b^2+c^2-4d=0$;

(c) o conjunto vazio se $a^2+b^2+c^2-4d<0$.

---

## Página 112 — Exemplo

1. Qual é o conjunto descrito pela equação $x^2+y^2+z^2-\sqrt{3}\,x-4y+8=0$.

2. Determine o centro da superfície esférica de equação $x^2+y^2+z^2-2x-4y-15=0$.

3. Quantas esferas passam por 1/2/3 pontos fixados?

**Proposição.** Existe uma superfície esférica única que contém os pontos distintos $P, Q, R$ e $S$ se, e somente se, esses pontos não são coplanares.

**Demonstração.** Precisamos achar um único ponto $C$ (centro) equidistante dos quatro pontos $P, Q, R, S$. O ponto $C$ é equidistante de $P$ e $Q$, i.e., $d(C,P)=d(C,Q)$, se e somente se $C$ pertence ao plano mediador de $PQ$. Portanto, $C$ é equidistante aos quatro pontos se e somente se pertence à interseção dos planos mediadores de $PQ$, $PR$ e $PS$.

Escolhamos um sistema ortogonal de coordenadas $\Sigma=(O,E)$. Sejam $\overrightarrow{PQ}=(a_1,b_1,c_1)_E$, $\overrightarrow{PR}=(a_2,b_2,c_2)_E$, $\overrightarrow{PS}=(a_3,b_3,c_3)_E$ as coordenadas dos vetores na base $E$. Tais vetores são normais aos planos mediadores de $PQ$, $PR$ e $PS$ respectivamente. Logo, as equações de tais planos são da forma
$$a_1x+b_1y+c_1z+d_1=0,\quad a_2x+b_2y+c_2z+d_2=0,\quad a_3x+b_3y+c_3z+d_3=0.$$

Os planos têm um ponto em comum se e somente se o sistema formado pelas três equações acima tem solução única. Equivalentemente,
$$\begin{vmatrix}a_1 & b_1 & c_1\\ a_2 & b_2 & c_2\\ a_3 & b_3 & c_3\end{vmatrix}\neq 0.$$

Esta condição é equivalente a $\overrightarrow{PQ}, \overrightarrow{PR}, \overrightarrow{PS}$ serem LI, que é equivalente a $P, Q, R, S$ não serem coplanares. $\blacksquare$

---

## Página 113

Seja $S$ uma superfície esférica de centro $C$ e raio $\rho$. Um ponto $P$ é **interior** a $S$ se $d(P,C)<\rho$, e **exterior** a $S$ se $d(P,C)>\rho$. Um conjunto de pontos é interior (resp. exterior) a $S$ se todos os seus pontos são interiores (resp. exteriores) a $S$.

**Exemplo.** Localize o ponto $A=(2,-1,3)$ em relação à superfície esférica $S: x^2+y^2+z^2-6x+2y-2z+7=0$.

---

## Interseção e posição relativa de reta e superfície esférica

**Proposição.** Sejam $r$ uma reta e $S$ uma superfície esférica de centro $C$ e raio $\rho$.

(a) Se $d(C,r)>\rho$, então $r$ é exterior a $S$, ou seja $S\cap r=\phi$.

(b) Se $d(C,r)=\rho$, então $r\cap S$ contém um único ponto que é a projeção ortogonal de $C$ sobre $r$. Os demais pontos de $r$ são exteriores a $S$.

(c) Se $d(C,r)<\rho$, então $r\cap S$ é formado de dois pontos distintos $A$ e $B$, cujo ponto médio é a projeção ortogonal de $C$ sobre $r$. Todos os pontos interiores ao segmento $AB$ são interiores a $S$ e todos os pontos da reta $r$ exteriores ao segmento $AB$ são exteriores a $S$.

> Figura: três casos — $d(C,r)>\rho$ ($r\cap S=\phi$, $r$ exterior); $d(C,r)=\rho$ ($r$ tangente em $T$); $d(C,r)<\rho$ ($r\cap S=\{A,B\}$, reta secante).

---

## Página 114 — Demonstração

(a) Por definição $d(C,r)=$ menor das distâncias $d(C,P)$, com $P\in r$. Se $d(C,r)>\rho$, então $d(C,P)\geq d(C,r)>\rho$ para todo $P\in r$. Logo, todos os pontos de $r$ são exteriores a $S$, ou seja, $S\cap r=\phi$.

(b) e (c). Escolhamos um sistema ortogonal de coordenadas com origem $O=C$ e de tal modo que um vetor diretor da reta $r$ seja $\vec{r}=(0,0,1)$.

Seja $Q=(x_0,y_0,0)$ o ponto de interseção de $r$ com o plano $z=0$. Uma equação vetorial de $r$ é $r: X=Q+\lambda\vec{r}$, $\lambda\in\mathbb{R}$, ou seja $X=(x_0,y_0,\lambda)$, $\lambda\in\mathbb{R}$, são as coordenadas de todos os pontos de $r$.

A equação de $S$ é $x^2+y^2+z^2=\rho^2$. Temos
$$X\in r\cap S \Leftrightarrow x_0^2+y_0^2+\lambda^2=\rho^2 \Leftrightarrow \lambda^2=\rho^2-(x_0^2+y_0^2) \Leftrightarrow \lambda^2=\rho^2-d^2(Q,O) \Leftrightarrow \lambda^2=\rho^2-d^2(C,r). \quad (*)$$

Portanto,

- Se $\rho=d(C,r)$, a equação $(*)$ tem uma solução dupla $\lambda=0$, ou seja $r$ e $S$ têm um único ponto em comum. Para os demais valores de $\lambda$, $d(X,C)>0$, para todos $X=(x_0,y_0,\lambda)\in r$, $\lambda\neq 0$. Ou seja, os demais pontos são exteriores a $S$.

- Se $\rho>d(C,r)$, a equação $(*)$ tem duas soluções distintas $\lambda_1, \lambda_2$. Ou seja, $r\cap S$ é formado de dois pontos distintos $A=(x_0,y_0,\lambda_1)$ e $B=(x_0,y_0,\lambda_2)$. Os pontos interiores ao segmento $AB$ são os pontos $X=(x_0,y_0,\lambda)$ com $\lambda_1<\lambda<\lambda_2$ e os pontos da reta $r$ exteriores ao segmento $AB$ são os pontos $X=(x_0,y_0,\lambda)$ com $\lambda<\lambda_1$ ou $\lambda>\lambda_2$. Analisando o sinal de $\lambda^2-(\rho^2-d^2(C,r))$, obtemos que $X=(x_0,y_0,\lambda)$ é interior (resp. exterior) a $S$ se e somente se $\lambda_1<\lambda<\lambda_2$ (resp. $\lambda<\lambda_1$ ou $\lambda>\lambda_2$). $\blacksquare$

---

## Página 115 — Exemplo

Sejam $r: X=(1,0,a)+\lambda(a,a,0)$ e $S: 8x^2+8y^2+8z^2-16x+24y-8z+19=0$. Determine $a$, em cada caso: (1) $r$ é tangente a $S$, (2) $r$ é secante a $S$, (3) $r$ é exterior a $S$.

---

## Interseção e posição relativa de plano e superfície esférica

**Proposição.** Sejam $\Pi$ um plano e $S$ uma superfície esférica de centro $C$ e raio $\rho$.

(a) Se $d(C,\Pi)>\rho$, então $\Pi$ é exterior a $S$, ou seja $\Pi\cap S=\phi$.

(b) Se $d(C,\Pi)=\rho$, então $\Pi\cap S$ contém um único ponto que é a projeção ortogonal de $C$ a $\Pi$. Os demais pontos de $\Pi$ são exteriores a $S$.

(c) Se $d(C,\Pi)<\rho$, então $\Pi\cap S$ é o círculo de raio $r=\sqrt{\rho^2-d^2(C,\Pi)}$ contido em $\Pi$, cujo centro é a projeção ortogonal de $C$ a $\Pi$.

> Figura: três casos — $\Pi$ exterior a $S$ ($d(C,\Pi)>\rho$); $\Pi$ tangente a $S$ ($d(C,\Pi)=\rho$); $\Pi$ plano secante ($d(C,\Pi)<\rho$).

---

## Página 116 — Demonstração

Fixamos um sistema ortogonal de coordenadas de origem $O=C$ e tal que o plano $Oxy$ seja paralelo a $\Pi$.

As equações de $S$ e $\Pi$ em relação a este sistema de coordenadas são
$$S:\; x^2+y^2+z^2=\rho^2 \quad \Pi:\; z=m.$$

Logo $S\cap\Pi:\; \begin{cases}x^2+y^2=\rho^2-m^2\\ z=m\end{cases} \Leftrightarrow \begin{cases}x^2+y^2=\rho^2-d^2(C,\Pi)\\ z=m\end{cases}$

(observando que $d(C,\Pi)=|m|$).

Portanto, $S\cap\Pi$ é $\begin{cases}\phi & \text{se }d(C,\Pi)>\rho\\ \text{ponto se }d(C,\Pi)=\rho\\ \text{círculo de centro }(0,0,m)\text{ e raio }\sqrt{\rho^2-d^2(C,\Pi)}\text{ se }d(C,\Pi)<\rho.\end{cases}$

Observe que o centro de $S\cap\Pi$ no caso $d(C,\Pi)<\rho$ é a projeção ortogonal de $C$ a $\Pi$. No caso $d(C,\Pi)=\rho$, o ponto de interseção de $S$ e $\Pi$ é a projeção ortogonal de $C$ a $\Pi$, $(0,0,m)$. $\blacksquare$

**Exemplo.** Obtenha uma equação geral do plano tangente à superfície esférica $S$ no ponto $T$, com $S: x^2+y^2+z^2-2x-1=0$ e $T=\left(-\dfrac{1}{3},\dfrac{1}{3},-\dfrac{1}{3}\right)$.

**Solução.** Temos $S: (x-1)^2+y^2+z^2=2$, ou seja a superfície esférica tem centro $C=(1,0,0)$ e raio $\rho=\sqrt{2}$.

O ponto $T\in S$: de fato $\left(\dfrac{1}{3}\right)^2+\left(\dfrac{1}{3}\right)^2+\left(\dfrac{1}{3}\right)^2-2\left(-\dfrac{1}{3}\right)-1=\dfrac{1}{3}+\dfrac{2}{3}-1=0$. ✓

O vetor $\overrightarrow{CT}=\left(-\dfrac{4}{3},\dfrac{1}{3},-\dfrac{1}{3}\right)$ é um vetor normal ao plano $\Pi$ tangente a $S$ em $T$. Portanto uma equação geral de $\Pi$ é
$$\Pi:\; -4x+y-z+d=0.$$

Como $T\in\Pi$: $-4\left(-\dfrac{1}{3}\right)+\dfrac{1}{3}-\left(-\dfrac{1}{3}\right)+d=0 \Rightarrow d=-2$. Daí,
$$\Pi:\; -4x+y-z-2=0 \Leftrightarrow 4x-y+z+2=0. \quad\blacksquare$$

---

## Quádricas

Uma **quádrica** é o lugar geométrico de pontos de $\mathbb{E}^3$ descrito, em relação a um sistema (ortogonal) de coordenadas, por uma equação de segundo grau
$$ax^2+by^2+cz^2+dxy+exz+fyz+gx+hy+iz+j=0.$$

Vamos estudar alguns casos particulares da equação acima. (Um estudo análogo das cônicas pode ser feito para as quádricas.)

---

### Elipsóide

Uma quádrica $\Omega$ é uma **elipsóide** se existem números reais positivos $a,b,c$, pelo menos dois deles distintos, e um sistema ortogonal de coordenadas em relação ao qual $\Omega$ pode ser descrita pela equação
$$\frac{x^2}{a^2}+\frac{y^2}{b^2}+\frac{z^2}{c^2}=1,$$
chamada **equação reduzida** da elipsóide.

> Figura: esboço de elipsóide.

Vamos estudar a interseção da elipsóide com planos paralelos aos coordenados. Seja $\Pi: z=k$. Temos

$$\Pi\cap\Omega:\; \begin{cases}\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=1-\dfrac{k^2}{c^2}\\ z=k.\end{cases}$$

Portanto, $\Pi\cap\Omega$ é o conjunto vazio se $k^2>c^2$; é o ponto $(0,0,k)$ se $k^2=c^2$; é a elipse de equação reduzida $\dfrac{x^2}{pa^2}+\dfrac{y^2}{pb^2}=1$ no plano $z=k$, onde $p=1-\dfrac{k^2}{c^2}$, se $k^2<c^2$. [Se $a=b$, a elipse degenera a uma circunferência.]

Tomando planos paralelos a $Oxz$ ou a $Oyz$ conduz a conclusões semelhantes.

---

## Página 118 — Hiperbolóide de uma folha

Uma quádrica $\Omega$ é uma **hiperbolóide de uma folha** se existem números reais positivos $a,b,c$ e um sistema ortogonal de coordenadas em relação ao qual $\Omega$ pode ser descrita pela equação
$$\frac{x^2}{a^2}+\frac{y^2}{b^2}-\frac{z^2}{c^2}=1,$$
chamada **equação reduzida** de $\Omega$.

> Figura: esboço de hiperbolóide de uma folha.

Vamos analisar a interseção de $\Omega$ com os planos paralelos aos coordenados.

**Interseção com os planos $z=k$:**

$$\Pi\cap\Omega:\; \begin{cases}\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=1+\dfrac{k^2}{c^2}\\ z=k.\end{cases}$$

Portanto,
- Se $a=b$, $\Pi\cap\Omega$ é uma circunferência no plano $z=k$ com centro $(0,0,k)$ e raio $\sqrt{1+k^2/c^2}$.
- Se $a\neq b$, $\Pi\cap\Omega$ é uma elipse no plano $z=k$, com centro $(0,0,k)$. Estude a posição dos focos desta elipse.

**Interseção com os planos $y=k$:**

$$\Pi\cap\Omega:\; \begin{cases}\dfrac{x^2}{a^2}-\dfrac{z^2}{c^2}=1-\dfrac{k^2}{b^2}\\ y=k.\end{cases}$$

- Se $k^2=b^2$: $\dfrac{x^2}{a^2}-\dfrac{z^2}{c^2}=0 \Leftrightarrow \left(\dfrac{x}{a}-\dfrac{z}{c}\right)\left(\dfrac{x}{a}+\dfrac{z}{c}\right)=0$; portanto $\Pi\cap\Omega$ é a união das duas retas concorrentes
$$\begin{cases}\dfrac{x}{a}-\dfrac{z}{c}=0\\ y=k\end{cases} \quad\text{e}\quad \begin{cases}\dfrac{x}{a}+\dfrac{z}{c}=0\\ y=k.\end{cases}$$

- Suponha que $k^2\neq b^2$ e denote $p=1-\dfrac{k^2}{b^2}$. Então $\Pi\cap\Omega:\; \begin{cases}\dfrac{x^2}{pa^2}-\dfrac{z^2}{pc^2}=1\\ y=k,\end{cases}$ que é uma equação reduzida de uma hipérbole.

---

## Página 119

Se $p>0$, o centro da hipérbole é $(0,k,0)$ e seus focos são localizados na reta $r: X=(0,k,0)+\lambda(1,0,0)$, $\lambda\in\mathbb{R}$.

Se $p<0$, o centro da hipérbole é $(0,k,0)$ e seus focos são sobre a reta $r: X=(0,k,0)+\lambda(0,0,1)$, $\lambda\in\mathbb{R}$.

Observe que $p<0 \Leftrightarrow k<-b$ ou $k>b$ e $p>0 \Leftrightarrow -b<k<b$.

> Figura: três esboços do hiperbolóide de uma folha correspondentes a $k<-b$, $k=-b$ e $-b<k<b$.

---

### Hiperbolóide de duas folhas

Uma quádrica $\Omega$ é uma **hiperbolóide de duas folhas** se existem números reais positivos $a,b,c$ e um sistema ortogonal de coordenadas em relação ao qual $\Omega$ pode ser descrita pela equação
$$-\frac{x^2}{a^2}+\frac{y^2}{b^2}-\frac{z^2}{c^2}=1,$$
chamada **equação reduzida** de $\Omega$.

> Figura: esboço de hiperbolóide de duas folhas com as duas folhas separadas no eixo $y$.

Analise a interseção de $\Omega$ com planos paralelos aos coordenados.

---

## Página 120 — Parabolóide

Se existem números reais positivos $a$ e $b$ e um sistema ortogonal de coordenadas em relação ao qual uma quádrica $\Omega$ seja descrita pela equação
$$z=\frac{x^2}{a^2}+\frac{y^2}{b^2},$$
então:
- (a) Se $a\neq b$, $\Omega$ é um **parabolóide elítico**.
- (b) Se $a=b$, $\Omega$ é um **parabolóide de rotação**.

> Figura: esboço de parabolóide elítico.

Estude a interseção de $\Omega$ com os planos paralelos aos coordenados.

**Definição.** Uma quádrica $\Omega$ é um **parabolóide hiperbólico** se existem números reais positivos $a$ e $b$ e um sistema ortogonal de coordenadas em relação ao qual $\Omega$ pode ser descrita pela equação
$$z=-\frac{x^2}{a^2}+\frac{y^2}{b^2},$$
chamada **equação reduzida** de $\Omega$.

> Figura: esboço de parabolóide hiperbólico (forma de sela).

Estude a interseção de $\Omega$ com os planos paralelos nos coordenados.

---

## Página 121 — Quádricas cilíndricas (Q.C.)

$a,b,c$ números positivos.

| Tipo | Equação reduzida |
|---|---|
| **Q.C. elíptica** | $\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}=1$ ($a\neq b$) |
| **Q.C. hiperbólica** | $\dfrac{x^2}{a^2}-\dfrac{y^2}{b^2}=1$ |
| **Q.C. parabólica** | $y^2=cx$ |

> Figura: esboços dos três tipos de quádricas cilíndricas.

### Quádricas cônicas

$a>0$, $b>0$. $\Omega:\; z^2=\dfrac{x^2}{a^2}+\dfrac{y^2}{b^2}$.

> Figura: esboço de quádrica cônica (cone duplo).

---

**Exemplo.** Sejam $A=(0,3,0)$ e $B=(0,-3,0)$. Obtenha uma equação geral do lugar geométrico dos pontos $X$ de $\mathbb{E}^3$ tais que $d(X,A)-d(X,B)=m$ e identifique o lugar geométrico, nos casos

(a) $m=2$, (b) $m=6$, (c) $m=10$, (d) $m=-2$.

**Sol.** $4m^2x^2+(4m^2-144)y^2+4m^2z^2+36m^2-m^4=0$.

---

## Página 122 — Coordenadas esféricas

> Figura: sistema ortogonal $\Sigma=(O,B)$ em $\mathbb{E}^3$ com ponto $P=(x,y,z)$ e projeção $Q$ no plano $xy$, mostrando os ângulos $\varphi$ e $\Theta$ e o raio $\rho$.

Seja $\Sigma=(O,B)$ um sistema ortogonal de coordenadas em $\mathbb{E}^3$ e $(x,y,z)$ as coordenadas de um ponto em $\mathbb{E}^3$.

Podemos identificar a posição do ponto $P$ com os seguintes dados:

$$\rho = d(P,O);\quad 0\leq\rho<\infty$$
$$\varphi = \text{ângulo entre o eixo-}z\text{ e a reta }OP;\quad 0\leq\varphi<\pi$$
$$\Theta = \text{ângulo entre o eixo-}x\text{ e a reta }OQ,\text{ onde }Q\text{ é a projeção ortogonal de }P\text{ ao plano }xy;\quad 0\leq\Theta\leq 2\pi.$$

A tripla $(\rho,\Theta,\varphi)$ chama-se **coordenadas esféricas** do ponto $P$. Temos as seguintes relações entre as coordenadas cartesianas e esféricas:

$$\begin{cases}x=\rho\sin\varphi\cos\Theta\\ y=\rho\sin\varphi\sin\Theta\\ z=\rho\cos\varphi\end{cases} \qquad \begin{cases}\rho=\sqrt{x^2+y^2+z^2}\\ \Theta=\arctan\!\left(\dfrac{y}{x}\right),\; x\neq 0\\ \varphi=\arctan\!\left(\dfrac{\sqrt{x^2+y^2}}{z}\right),\; z\neq 0.\end{cases}$$

---

### Coordenadas cilíndricas

As **coordenadas cilíndricas** de $P=(x,y,z)$ são a tripla $(r,\Theta,z)$, onde $(r,\Theta)$ são as coordenadas polares do ponto $Q$ no plano $xy$, com $Q$ a projeção ortogonal de $P$ a este plano. Temos

$$\begin{cases}x=r\cos\Theta & 0\leq\Theta<2\pi\\ y=r\sin\Theta & r\geq 0\\ z=z.\end{cases}$$
