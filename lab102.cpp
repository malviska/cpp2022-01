#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string input[100], n, hashtags[100], arrobas[100];
    int i=0,k;
    size_t found, found2, found3;
    while(true){
        cin >> input[i];
        n = getchar();
        found = n.find("\n");
        if(found != string::npos)
            break;
        i++;
    }
    for (int j =0; j<= i; j++){
        found2 = input[j].find("#");
        if(found2!=string::npos){
            hashtags[k] = input[j];
            k++;
    }
    }
    if(k == 0){
        cout<< "O tweet não possui hashtags.";
    }else{
        cout<<"Hashtags: ";
        int j = 0;
        do{
            cout<< hashtags[j]<< " ";
            j++;
        }while(j<k);
    }
    cout<<endl;
    k = 0;
    for (int j =0; j<= i; j++){
        found2 = input[j].find("@");
        if(found2!=string::npos){
            arrobas[k] = input[j];
            k++;
    }
    }
    if(k == 0){
        cout<< "O tweet não possui arrobas.";
    }else if(k>3){
        cout<< "Tweet inválido.";
    }else{
        cout<<"Arrobas: ";
        int j = 0;
        do{
            cout<< arrobas[j]<< " ";
            j++;
        }while(j<k);
    }
    cout<<endl;
    return 0;
}