#include "DiarioClasse.hpp"

bool DiarioClasse::determinarAprovacao(double notaSemestre, double notaEspecial, double frequencia) {
    
    if (notaSemestre < 0 || notaSemestre >100)
        throw ExcecaoNotaSemestreInvalida();

    if(notaEspecial< 0 || notaEspecial>100)
        throw ExcecaoNotaEspecialInvalida();
        
    if(frequencia<0 || frequencia>1)
        throw ExcecaoFrequenciaInvalida();
        
    if(frequencia>=0.75) {
        if (notaSemestre >= 60)
            return true;

        if  (notaSemestre >= 40 && notaSemestre < 60)
            if(notaEspecial>=60) return true;
        return false;
    }
    else
        return false;

}