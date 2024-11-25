CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
OBJ_DIR = obj
SRC_DIR = .
BIN = binaryImageEncoder

SRCS = $(SRC_DIR)/index.c $(SRC_DIR)/imageEncoder.c $(SRC_DIR)/validator.c $(SRC_DIR)/utils.c
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(BIN)
