
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
python3 src/cg/reactive_navigation.py
```

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