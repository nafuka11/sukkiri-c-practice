CC = gcc
EXE_NAME = Message
DIR_PATH = ./src
CHECK_RESULT_FILE_PATH = checkresult.txt
OBJECTS = $(DIR_PATH)/main.o $(DIR_PATH)/sub.o

# 実行ファイルの生成
$(EXE_NAME): $(OBJECTS)
	$(CC) -o $@ $^

# ビルドパイプラインの一括実行
.PHONY: all
all: clean check $(EXE_NAME) docs

# 実行ファイル、オブジェクトファイルの削除
.PHONY: clean
clean:
	rm -f $(EXE_NAME) $(OBJECTS)

# 仕様書の生成
.PHONY: docs
docs:
	doxygen

# 静的解析の実行、実行結果の出力
.PHONY: check
check:
	cppcheck --enable=all $(DIR_PATH) > $(CHECK_RESULT_FILE_PATH) 2>&1
