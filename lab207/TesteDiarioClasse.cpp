#include "doctest.h"
#include "DiarioClasse.hpp"

TEST_CASE("Teste05 - Reprovação por Fequência insuficiente"){
    DiarioClasse diario;
    bool aprovado = diario.determinarAprovacao(100,100,0.6);
    CHECK_FALSE(aprovado);
}

TEST_CASE("Teste06 - Reprovação por nota insuficiente no exame especial"){
   DiarioClasse diario;
    bool aprovado = diario.determinarAprovacao(59,59,0.75);
    CHECK_FALSE(aprovado); 
}
TEST_CASE("Teste07 - Repovação por Frequência Insuficiente com nota da Especial"){
   DiarioClasse diario;
    bool aprovado = diario.determinarAprovacao(100,100,0.74);
    CHECK_FALSE(aprovado); 
}
TEST_CASE("Teste08 - Repovação por Frequência Insuficiente com nota da Especial"){
   DiarioClasse diario;
    bool aprovado = diario.determinarAprovacao(40,100,0.74);
    CHECK_FALSE(aprovado); 
}
TEST_CASE("Teste09 - Excecao nota especial Invalida"){
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(30,120,0.75), ExcecaoNotaEspecialInvalida);
}
TEST_CASE("Teste10 - Excecao nota especial Invalida"){
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(30,-100,0.75), ExcecaoNotaEspecialInvalida);
}
TEST_CASE("Teste10 - Excecao nota semestre Invalida"){
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(-10,100,0.75), ExcecaoNotaSemestreInvalida);
}
TEST_CASE("Teste11 - Excecao frequencia Invalida"){
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(30,120,-0.75), ExcecaoFrequenciaInvalida);
}
TEST_CASE("Teste12 - Reprovação simples sem especial"){
    DiarioClasse diario;
    bool aprovado = diario.determinarAprovacao(20,100,0.75);
    CHECK_FALSE(aprovado);  
}

TEST_CASE("Teste13 - Aprovação Simples"){
    DiarioClasse diario;
    bool aprovado = diario.determinarAprovacao(60,0,0.75);
    CHECK(aprovado);
}



