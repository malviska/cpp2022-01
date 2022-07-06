CC = g++
CFLAGS=-std=c++11 -g -Wall
TARGET=vpl_execution

BUILD_DIR = ./bin
SRC_DIR = ./src
INCLUDE_DIR = ./include

${TARGET}: ${BUILD_DIR}/Coordenada.o ${BUILD_DIR}/Bloco.o ${BUILD_DIR}/BlocoContador.o ${BUILD_DIR}/BlocoMina.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Coordenada.o: ${INCLUDE_DIR}/Coordenada.hpp ${SRC_DIR}//Coordenada.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Coordenada.cpp -o ${BUILD_DIR}/Coordenada.o

${BUILD_DIR}/Bloco.o: ${INCLUDE_DIR}/Bloco.hpp ${SRC_DIR}/Bloco.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Bloco.cpp -o ${BUILD_DIR}/Bloco.o

${BUILD_DIR}/BlocoContador.o: ${INCLUDE_DIR}/BlocoContador.hpp ${SRC_DIR}/BlocoContador.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/BlocoContador.cpp -o ${BUILD_DIR}/BlocoContador.o

${BUILD_DIR}/BlocoMina.o: ${INCLUDE_DIR}/BlocoMina.hpp ${SRC_DIR}/BlocoMina.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/BlocoMina.cpp -o ${BUILD_DIR}/BlocoMina.o


${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Coordenada.hpp ${INCLUDE_DIR}/Bloco.hpp ${INCLUDE_DIR}/BlocoContador.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 
