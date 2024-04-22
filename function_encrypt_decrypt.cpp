#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

void file(string &filename){

    cout<<"Enter file name = ";
    getline(cin,filename);
}

void encrypt(string &filename, char key) {

    ifstream
    ifile(filename);

    ofstream
    ofile("Encrypted.txt");

if (ifile.is_open() && ofile.is_open ()) {

   char ch;
   while (ifile.get(ch)) {

//Encrypting the file 
    ch = ch + key;

    ofile<<ch;
   }
        ifile.close();
        ofile.close();
        cout<<"Encrypted sucessfully"<<endl;

}
}

void decrypt( char key) {

    ifstream
    ifile("Encrypted.txt");

    ofstream
    ofile("Decrypted.txt");

if (ifile.is_open() && ofile.is_open ()) {

   char ch;
   while (ifile.get(ch)) {

//Decryptingthe file 
    ch = ch - key;

    ofile<<ch;
   }
        ifile.close();
        ofile.close();
        cout<<"Decrypted sucessfully"<<endl;
}

}

int main () {

    string filename;

    char key='#';

    file(filename);
    encrypt(filename, key);
    decrypt(key);


    return 0;
}

