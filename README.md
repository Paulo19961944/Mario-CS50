# MARIO CS50

Esse é um projeto que foi aprendido no curso de CS50 do grupo EAD Estudar, nesse projeto foi passado em aula pra fazer a parede do Mário, utilizando os conceitos que aprendemos em aula. Eles tem uma biblioteca que chama CS50, e então eu fiz uma recriação dessa biblioteca, utilizando algumas bibliotecas como limits que captura um limite da variável int.

**int:** Valores entre -2147483648 até 2147483648, armazenando 32 bits de Memoria, ou 4 bytes.

Com isso eu recriei a função get_int() deles, utilizando um delimitador de até 20 carateres. Caso a variável não seja do tipo int, ele manda na tela que não é do tipo inteiro.<br></br>


##  COMO INSTALAR O GCC

### Instalação do gcc

Se você descobrir que o gcc não está instalado, você pode instalá-lo através de um dos seguintes métodos:<br></br>


### MinGW (Minimalist GNU for Windows):

1. Baixe o instalador do MinGW em MinGW-w64 ou procure pelo instalador do MinGW.
2. Durante a instalação, certifique-se de selecionar os componentes necessários (como o gcc).
3. Adicione o diretório bin do MinGW ao seu PATH:
Vá em Painel de Controle → Sistema → Configurações avançadas do sistema.
Clique em Variáveis de ambiente.
4.Em "Variáveis do sistema", encontre a variável Path, selecione e clique em Editar.
5.Adicione o caminho do diretório bin (ex: C:\MinGW\bin).<br></br>


### WSL (Windows Subsystem for Linux)
Se você preferir usar um ambiente Linux, pode instalar o WSL e, em seguida, instalar o gcc usando um gerenciador de pacotes, como apt:

```bash
sudo apt update
sudo apt install build-essential
```

Depois de instalar, repita o comando gcc --version no cmd para verificar se a instalação foi bem-sucedida.<br></br>


## COMO UTILIZAR


**Passo 1: Digite o seguinte comando**

```bash
gcc -c -std=c99 hashes.c
gcc -c -std=c99 main.c
```

**Passo 2: Compile o programa**

```bash
gcc -c -std=c99 hashes.c
gcc -c -std=c99 main.c
gcc -o mario main.o hashes.o
```



**Passo 3: Execute o programa**

```bash
mario
```
