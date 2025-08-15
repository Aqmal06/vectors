#include <iostream>
#include <vector>

//Code to filtered and retirieved string contains numbers
std::vector<std::string> numbersinPasswords(std::vector<std::string> passwords);

int main(){

    int size;
    std::string element;
    std::vector<std::string> passwords{};

    std::cout<<"Enter size for the vectors: ";
    std::cin>>size;

    for(int i=0; i<size; i++){
        std::cout<<"Passwords for element# "<<i+1<<": ";
        std::cin>>element;
        passwords.push_back(element);
    }

    std::cout<<"Original password: \n";
    for(std::string numbers: passwords){
        std::cout<<numbers<<"\n";
    }

    std::vector<std::string> result = numbersinPasswords(passwords);
    std::cout<<"Passwords containing numbers: ";
    for(std::string p: result){
        std::cout<<p<<" ";
    }

    return 0;
}

std::vector<std::string> numbersinPasswords(std::vector<std::string> passwords){
    std::vector<std::string> temp;

    for(std::string password: passwords){
        for(char s: password){
            if(isdigit(s)){
                temp.push_back(password);
                break;
            }
        }
    }
    return temp;
}

//Breaking down how the code works.
//line 37 = create satu string, tujuan string ini adalah untuk stored element baharu.
//line 39 = create satu loop, loop akan iterates setiap string yang terdapat dalam vectors.
//line 40 = create nested loop, nested loop akan iterates setiap character string yang terdapat dalam vectors(string baharu). Loop akan checked each string char one by one.
//line 42 = kalau character dijumpai mempunyai digit, string akan dihantar ke temp menggunakan .push_back(password)
//kenapa .push_back(password) ? bukan .push_back(s), s ialah char data types, push_back s ke dalam temp akan berlaku error kerana tidak sama data type
//kerana temp adalah std::string. Bukan itu sahaja, s akan returned char bukan string. Maka push_back password ke de dalam teme lebih logik,
//kerana sifat data types yang sama.