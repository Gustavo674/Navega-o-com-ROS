
# Projeto de Navegação Reativa para Resolver Labirinto

Esta atividade foi desenvolvida para implementar uma navegação reativa em um robô que precisa encontrar seu caminho em um labirinto até um ponto de destino. O robô é representado em um sistema ROS 2 com interface gráfica em pygame e utiliza uma lógica de navegação reativa e backtracking para evitar loops e solucionar o labirinto.

## Pré-requisitos

Para rodar este projeto, você precisará:

- **Ubuntu 22.04 ou Ubuntu 20.04** (recomendado para ROS 2 Humble ou Foxy)
- **ROS 2** (versão Humble ou Foxy)
- **Python 3** e bibliotecas Python (instaladas automaticamente com ROS 2)
- **pygame** para a interface gráfica
- **Git** para clonar o repositório do projeto

### Clonar o Repositório do Projeto

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/SeuUsuario/Navega-o-com-ROS.git
   ```

2. **Entre na pasta do projeto**:
   ```bash
   cd Navega-o-com-ROS
   ```

3. **Compile o workspace**:
   ```bash
   colcon build
   ```

4. **Fonte o workspace**:
   ```bash
   source install/setup.bash
   ```

Agora, o projeto está pronto para ser executado.

## Estrutura do Projeto

A estrutura básica do projeto é:

```
Navega-o-com-ROS/
├── cg/                     # Pacote principal do projeto
│   ├── Utils/
│   │   └── Csv.py          # Utilitário para carregar mapas em CSV
│   └── maps/               # Mapas para o labirinto
│       └── default.csv
├── reactive_navigation.py   # Código principal de navegação reativa
├── README.md                   # Documentação do projeto
└── .gitignore                  # Arquivos e pastas a serem ignorados pelo Git
```

## Execução do Projeto

Para iniciar o labirinto, execute o seguinte comando dentro da pasta cg:

```bash
ros2 run cg maze
```

Esse comando abrirá a interface do labirinto em pygame, onde o robô (ponto azul) tentará navegar até o alvo (ponto vermelho) usando o código de navegação reativa.

Para rodar o código de navegação, execute o arquivo `reactive_navigation.py` na raiz do projeto:

```bash
python3 reactive_navigation.py
```

[Link para vídeo de demonstração!](https://drive.google.com/file/d/1p3DVk_nZahV6Vq28Sl8RpUL2HmM25mPu/view?usp=sharing)

## Explicação do Código

O código foi desenvolvido para permitir que o robô navegue de forma reativa no labirinto. Aqui está um resumo das partes principais:

### 1. Classe `ReactiveNavigation`

A classe `ReactiveNavigation` herda de `Node` (do ROS 2) e é o núcleo do código de navegação.

#### Principais Atributos

- **`visited_positions`**: Um conjunto que armazena todas as posições que o robô visitou, para evitar revisitar locais já explorados.
- **`backtrack_stack`**: Uma pilha que mantém posições com múltiplas opções de caminhos, permitindo ao robô voltar para elas se ficar preso.

#### Principais Funções

- **`send_move_request`**: Envia um comando para mover o robô em uma direção específica.
- **`get_unvisited_directions`**: Analisa as direções em torno do robô e retorna aquelas que ainda não foram visitadas.
- **`prioritize_directions_toward_target`**: Define prioridades de movimento em direção ao alvo quando o robô está próximo do destino.
- **`is_near_target`**: Verifica se o robô está dentro de uma certa distância do alvo, ajudando a guiar o robô quando ele está próximo.
- **`reactive_navigation`**: A função principal de navegação, que combina a lógica de movimentação reativa e backtracking.

### 2. Estratégia de Solução do Labirinto

O código adota uma **estratégia de navegação reativa** com **backtracking**. Abaixo está um resumo da lógica:

- **Movimento Reativo**: O robô analisa os sensores para detectar o que está ao redor (esquerda, direita, cima, baixo) e escolhe uma direção livre (não bloqueada).
- **Priorização de Direções**: Se o robô está próximo ao alvo, ele prioriza movimentos que o aproximam do alvo, garantindo que a rota seja mais direta.
- **Backtracking**: Caso o robô fique preso (sem direções livres), ele usa o backtracking para voltar para um ponto anterior com opções alternativas de movimento. Isso é feito através do `backtrack_stack`, que armazena posições com múltiplos caminhos.

### 3. Funções Auxiliares

- **`move_to_position`**: Esta função implementa o backtracking propriamente dito, permitindo ao robô retornar a uma posição anterior com múltiplas opções de caminhos e tentar uma nova direção.

### Exemplo de Lógica em `reactive_navigation`

A função `reactive_navigation` executa a lógica de movimentação:

1. **Obter informações de sensores e posições**: Ele utiliza `send_move_request` para obter dados dos sensores.
2. **Verificar proximidade com o alvo**: Se estiver próximo, usa `prioritize_directions_toward_target`.
3. **Explorar e armazenar posições**: Armazena as posições visitadas em `visited_positions`.
4. **Aplicar backtracking**: Caso o robô fique preso, usa `move_to_position` para voltar ao último ponto de decisão.

## Conclusão

Esse projeto de navegação reativa foi desenvolvido para solucionar um labirinto com um robô no ROS 2. A estratégia de navegação é baseada em movimentação reativa, com priorização de caminhos e backtracking para evitar loops e áreas já visitadas. 

Essa abordagem permite que o robô encontre o caminho de forma eficiente, mesmo sem conhecer previamente o mapa completo do labirinto.


# Projeto de Navegação com Mapa para Resolver Labirinto

Esta atividade implementa uma navegação com mapa utilizando um algoritmo de planejamento de rota (A*) para guiar um robô em um labirinto até um ponto de destino. O robô é representado em um sistema ROS 2 com interface gráfica em pygame e utiliza uma abordagem baseada em mapa para encontrar o caminho mais curto até o alvo.

## Pré-requisitos

Para rodar este projeto, você precisará:

- **Ubuntu 22.04 ou Ubuntu 20.04** (recomendado para ROS 2 Humble ou Foxy)
- **ROS 2** (versão Humble ou Foxy)
- **Python 3** e bibliotecas Python (instaladas automaticamente com ROS 2)
- **pygame** para a interface gráfica
- **Git** para clonar o repositório do projeto

### Clonar o Repositório do Projeto

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/SeuUsuario/Navega-o-com-ROS.git
   ```

2. **Entre na pasta do projeto**:
   ```bash
   cd Navega-o-com-ROS
   ```

3. **Compile o workspace**:
   ```bash
   colcon build
   ```

4. **Fonte o workspace**:
   ```bash
   source install/setup.bash
   ```

Agora, o projeto está pronto para ser executado.

## Estrutura do Projeto

A estrutura básica do projeto é:

```
Navega-o-com-ROS/
├── cg/                     # Pacote principal do projeto
│   ├── Utils/
│   │   └── Csv.py          # Utilitário para carregar mapas em CSV
│   └── maps/               # Mapas para o labirinto
│       └── default.csv
├── reactive_navigation.py   # Código de navegação reativa
├── map_navigation.py        # Código de navegação com mapa
├── README1.md                   # Documentação do projeto
├── README2.md                   # Documentação do projeto
└── .gitignore                  # Arquivos e pastas a serem ignorados pelo Git
```

## Execução do Projeto

Para iniciar o labirinto, execute o seguinte comando dentro da pasta cg:

```bash
ros2 run cg maze
```

Esse comando abrirá a interface do labirinto em pygame, onde o robô (ponto azul) tentará navegar até o alvo (ponto vermelho) usando o código de navegação com mapa.

Para rodar o código de navegação com mapa, execute o arquivo `map_navigation.py` na raiz do projeto:

```bash
python3 map_navigation.py
```

[Link para vídeo de demonstração! Basta alterar o arquivo python do video pelo map_navigation.py](https://drive.google.com/file/d/1p3DVk_nZahV6Vq28Sl8RpUL2HmM25mPu/view?usp=sharing)


## Explicação do Código

O código foi desenvolvido para permitir que o robô navegue de forma otimizada no labirinto com base no mapa. Aqui está um resumo das partes principais:

### 1. Classe `MapNavigation`

A classe `MapNavigation` herda de `Node` (do ROS 2) e é o núcleo do código de navegação com mapa.

#### Principais Atributos

- **`move_client`** e **`map_client`**: Clientes para interagir com os serviços `/move_command` e `/get_map`.
- **`map`**: Matriz 2D representando o labirinto, onde cada célula é um espaço livre, bloqueado, posição do robô ou do alvo.
- **`start_pos`** e **`target_pos`**: Coordenadas iniciais do robô e do alvo, respectivamente.
- **`path`**: Caminho planejado de direções (ex.: `['down', 'down', 'right', ...]`) até o alvo.

#### Principais Funções

- **`get_map`**: Requisita o mapa do labirinto pelo serviço `/get_map`, reconstruindo o grid 2D a partir do mapa planificado.
- **`find_positions`**: Localiza as posições iniciais do robô (`r`) e do alvo (`t`) no mapa.
- **`plan_path`**: Implementa o algoritmo A* para planejar o caminho mais curto do robô até o alvo.
- **`navigate`**: Executa os movimentos planejados, enviando comandos de movimentação para o robô com base na rota calculada.
- **`send_move_request`**: Envia comandos de movimento para o robô, interagindo com o serviço `/move_command`.

### 2. Estratégia de Solução com A*

O código utiliza o algoritmo A* para encontrar o caminho mais curto até o destino. Abaixo está um resumo da lógica:

- **Obtenção do Mapa**: O código usa o serviço `/get_map` para adquirir e reconstruir o grid do labirinto.
- **Heurística de Manhattan**: A função `heuristic` calcula a distância Manhattan entre o robô e o alvo, priorizando nós mais próximos do destino.
- **Expansão de Nós**: A função `get_neighbors` obtém os nós vizinhos (posições adjacentes) para expandir a busca.
- **Reconstrução do Caminho**: Após alcançar o alvo, `reconstruct_path` reconstrói o caminho do robô até o destino usando os nós explorados.

### Exemplo de Lógica em `plan_path`

A função `plan_path` implementa o A* para calcular o caminho:

1. **Lista de Nós Abertos**: Armazena posições que precisam ser exploradas, priorizadas pela distância estimada ao alvo.
2. **Geração de Caminho**: Após encontrar o alvo, reconstrói o caminho de volta, resultando em uma lista de direções que o robô deve seguir.

## Conclusão

Esse projeto de navegação com mapa foi desenvolvido para resolver um labirinto com um robô no ROS 2, utilizando o algoritmo A* para buscar uma rota otimizada até o destino. Com a abordagem de planejamento de rota, o robô é capaz de encontrar o caminho mais curto, evitando bloqueios e áreas já visitadas.
