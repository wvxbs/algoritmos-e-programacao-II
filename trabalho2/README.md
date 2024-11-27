
# **Codificador de Imagens Binárias (Run-Length Encoding)**

## **Autores do projeto**
- **Caio Ariel Cardoso Saraiva** - RA: 10439611  
- **Gabriel Ferreira** - RA: 10442043  
- **Jiye Huang** - RA: 10438990  

---

## **Descrição do Projeto**
Este projeto implementa um codificador de imagens binárias utilizando a técnica de **Run-Length Encoding (RLE)**. Ele suporta entrada manual e leitura de arquivos no formato **PBM** (Portable Bitmap). O código é dividido em múltiplos arquivos para maior modularidade.

---

## **Estrutura do Projeto**
- **`index.c`**: Gerencia a execução principal do programa.  
- **`imageEncoder.c`**: Implementa a lógica de codificação Run-Length.  
- **`validator.c`**: Valida entradas manuais e arquivos PBM.  
- **`utils.c`**: Oferece funções utilitárias para manipulação de dados.  
- **`Makefile`**: Automatiza a compilação do projeto.  

---

## **Requisitos**
- Compilador **GCC** ou similar.  
- Sistema operacional com suporte a comandos Unix/Linux (ou equivalente em Windows).  

---

## **Instruções para Compilar e Executar**

1. **Clone o repositório ou copie os arquivos do projeto para o diretório local.**

2. **Acesse o diretório do projeto**:
   ```bash
   cd caminho/para/o/projeto
   ```

3. **Compile o código usando o Makefile**:
   ```bash
   make
   ```

   Isso criará um executável chamado `imageEncoder`.

4. **Execute o programa**:
   ```bash
   ./binaryImageEncoder
   ```

5. **Para limpar os arquivos gerados durante a compilação**:
   ```bash
   make clean
   ```

---

## **Funcionalidades**
### **1. Entrada Manual**
- O programa solicita ao usuário o tamanho da matriz (largura e altura).  
- O usuário insere os valores binários manualmente.  
- O programa valida a entrada antes de processá-la.

### **2. Leitura de Arquivo PBM**
- Permite carregar uma imagem binária de um arquivo PBM.  
- Verifica a conformidade do arquivo com o formato esperado.  

### **3. Codificação Run-Length**
- Compacta a matriz binária utilizando a técnica Run-Length Encoding.  
- Exibe os resultados na tela.

---

## **Exemplo de Arquivo PBM**
Para usar um arquivo PBM, salve o seguinte conteúdo em um arquivo chamado `exemplo.pbm`:
```
P1
4 4
1 0 0 1
1 1 1 0
0 0 0 0
1 1 1 1
```

---

## **Makefile**
O Makefile é configurado com os seguintes comandos:

```Makefile
CC = gcc
CFLAGS = -Wall -g
OBJS = index.o imageEncoder.o validator.o utils.o
TARGET = imageEncoder

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
```

- **`all`**: Compila o programa.  
- **`clean`**: Remove arquivos objeto e o executável.  

---