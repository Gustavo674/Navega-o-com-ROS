# Projeto de Navegação com ROS 2

Este projeto implementa dois métodos distintos de navegação em um robô em um labirinto:
1. **Navegação Reativa**: Baseada em sensores e backtracking.
2. **Navegação com Mapa**: Baseada no planejamento de rota utilizando o algoritmo A*.

Os robôs navegam em um ambiente gráfico utilizando ROS 2 integrado ao pygame, com serviços dedicados para manipulação do ambiente e movimento.

## Estrutura do Projeto

O projeto está organizado da seguinte maneira:

```
Navega-o-com-ROS/
├── src/
│   └── cg/                 # Pacote principal
│       ├── Utils/          # Ferramentas auxiliares (ex: manipulação de mapas)
│       ├── maps/           # Mapas do labirinto
│       ├── cg_interfaces/  # Interfaces ROS customizadas
│       ├── reactive_navigation.py  # Navegação reativa
│       ├── map_navigation.py       # Navegação com mapa
│       ├── main.py         # Comando principal para rodar o labirinto
│   └── ...
├── install/                # Diretório gerado pelo colcon build
├── log/                    # Logs gerados pelo ROS 2
├── build/                  # Build gerado pelo colcon build
├── README.md               # Documentação do projeto
└── .gitignore              # Arquivos/pastas ignorados pelo Git
```

## Pré-requisitos

- **Ubuntu 20.04 ou 22.04**
- **ROS 2** (versão Humble ou Foxy)
- **Python 3**
- **pygame** instalado:
  ```bash
  pip install pygame
  ```

## Como Configurar e Rodar

### 1. Clonar o Repositório

```bash
git clone https://github.com/SeuUsuario/Navega-o-com-ROS.git
cd Navega-o-com-ROS
```

### 2. Configurar o ROS 2

Compile e configure o workspace ROS 2:
```bash
colcon build
source install/setup.bash
```

### 3. Rodar o Labirinto

Abra o simulador do labirinto dentro da pasta src/cg:
```bash
ros2 run cg maze
```

### 4. Executar os Algoritmos de Navegação

#### Navegação Reativa

Para executar o algoritmo de navegação reativa, na raiz do projeto:
```bash
ros2 run cg reactive_navigation
```

#### Navegação com Mapa

Para executar o algoritmo de navegação com planejamento, na raiz do projeto:
```bash
ros2 run cg map_navigation
```

## Explicação dos Algoritmos

### Navegação Reativa

O robô navega usando sensores para identificar espaços livres ou bloqueados. A lógica implementada:

- **Detecção de Obstáculos**: Sensores analisam o ambiente (cima, baixo, esquerda, direita).
- **Backtracking**: Caso o robô fique preso, ele retorna para um ponto anterior com caminhos ainda não explorados.
- **Exploração Direcionada**: Se o alvo estiver próximo, prioriza movimentos na direção do destino.

### Navegação com Mapa

O algoritmo A* é usado para calcular o caminho mais curto até o alvo:

- **Obtenção do Mapa**: Requisição ao serviço `/get_map` para construir o labirinto.
- **Planejamento**: O A* avalia o custo de cada movimento com base na distância de Manhattan.
- **Execução do Caminho**: Os comandos são enviados ao serviço `/move_command` para movimentar o robô.

## Conclusão

O projeto combina navegação reativa e planejamento com mapa para resolver labirintos. A abordagem com ROS 2 e pygame cria um ambiente completo para testar algoritmos de navegação.