CC = g++
CFLAGS=-std=c++11 -g -Wall
TARGET=vpl_execution

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${TARGET}: ${BUILD_DIR}/ireadable.o ${BUILD_DIR}/pessoa.o ${BUILD_DIR}/csv.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/ireadable.o: ${INCLUDE_DIR}/ireadable.hpp ${SRC_DIR}/ireadable.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/ireadable.cpp -o ${BUILD_DIR}/ireadable.o

${BUILD_DIR}/pessoa.o: ${INCLUDE_DIR}/pessoa.hpp ${SRC_DIR}/pessoa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/pessoa.cpp -o ${BUILD_DIR}/pessoa.o

${BUILD_DIR}/csv.o: ${INCLUDE_DIR}/csv.hpp ${SRC_DIR}/csv.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/csv.cpp -o ${BUILD_DIR}/csv.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/ireadable.hpp ${INCLUDE_DIR}/pessoa.hpp ${INCLUDE_DIR}/csv.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. 
# Call 'make clean' to use it
clean:
	rm -f ${BUILD_DIR}/* 
