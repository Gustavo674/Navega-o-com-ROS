
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