//33.	Найти и вывести на экран все слова строки, в которых все буквы различны.
#include <iostream>
#include <string>
#include <cstring>
#include <clocale>
#include <Windows.h>

using namespace std;

const int size=800;

char* init_string (char * str){
    int c=0;
    cout<<"Выберите способ ввода строки:"<<endl<<"  1. Автоматически "<<endl<<"  2. Вручную "<<endl;
    cin>>c;
    switch(c){
        case 1: strcpy(str,"Это небольшой текст, который содержит занаки препинания. Ура! Только чему радоваться? Ну хотя бы тому, что все работает правильно; ");
                cout<<str<<endl;
            break;
        default: cin.getline(str,size);
            break;
    }
    return str;
}

void copy_string (char *str, char *tmpstr){
    strcpy(tmpstr,str);
}

void symbols_recheck (char *word,char *tmpword){
    char symbol[size/2];
    strcpy(tmpword,word);
    for(int i=0;i<strlen(word);i++){
        if(*(tmpword+i)>='A' && *(tmpword+i)<='Z') {*(tmpword+i)+=32;}
        if(*(tmpword+i)>='А' && *(tmpword+i)<='Я') {*(tmpword+i)+=32;}
    }
    for(int i=0;i<strlen(word);i++){
        strncpy(symbol,tmpword,1);
        strcpy(tmpword,tmpword+1);
        int rep=strcspn(tmpword,symbol);
        if(rep!=strlen(tmpword))return;
    }

    cout<<word<<endl;
}

void word_selection (char *tmpstr,char *word,char *separators,char *tmpword){
    int st=1;
    while (st){
        int begin = strspn(tmpstr,separators);
        strcpy(tmpstr,tmpstr+begin);
        int end = strcspn(tmpstr,separators);
        strcpy(word,tmpstr);
        strcpy(word+end,"\0");
        symbols_recheck(word,tmpword);
        strcpy(tmpstr,tmpstr+end);
        st=strlen(tmpstr);
    }
}

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);        // для возможности ввода строки
    SetConsoleOutputCP(1251);  // на русском
    char * const str=new(char[size]);
    char * const tmpstr=new(char[size]);
    char * const word=new(char[size/2]);
    char * const tmpword=new(char[size/2]);
    char * const separators=new (char[30]);
    cout<<"Условие:"<<endl<<"     Найти и вывести на экран все слова строки, в которых все буквы различны."<<endl<<endl;
    strcpy(separators," ,.!?:;-+()*?%№=_&^$#/|\[]{}");
    init_string (str);
    copy_string(str,tmpstr);
    word_selection (tmpstr,word,separators,tmpword);
    return 0;
}
