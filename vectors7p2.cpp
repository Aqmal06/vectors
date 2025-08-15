#include <iostream>
#include <vector>

//Capalalized the first character for each string character.
std::vector<std::string> capitalizedLetter(std::vector <std::string> colors);

int main(){
    int size;
    std::string element;
    std::vector <std::string> colors;

    std::cout<<"Enter the size of an vector: ";
    std::cin>>size;

    for(int y=0; y<size; y++){
        std::cout<<"Enter the colors #"<<y+1<<" :";
        std::cin>>element;
        colors.push_back(element);
    }
    
    std::cout<<"Current colors alphabetical: ";
    for(std::string color: colors){
        std::cout<<color<<" ";
    }

    std::vector<std::string> result = capitalizedLetter(colors);
    std::cout<<"\nNewest colors alphabetical: ";
    for(std::string firstLetter: result){
        std::cout<<firstLetter<<" ";
    }

    return 0;  
}

std::vector<std::string> capitalizedLetter(std::vector <std::string> colors){
    for(int i=0; i<colors.size(); i++){
        colors[0][0] = toupper(colors[0][0]);

        colors[i][0] = toupper(colors[i][0]);
        for(int j=1; j<colors[i].size(); j++){
            colors[i][j] = tolower(colors[i][j]);
        }       
    }
    return colors; 
}

//Breaking down how the code works.
//line 36 = create satu loops, loops akan continue iterates selagi mana index < bilangan element dalam colors.
//Contoh, colors mempunyai 3 element, tapi computer akan detect sehingga index 2 kerana computer bermula dengan angka sifar.
//line 37 = code akan access char pertama[0] di string pertama[0], kemudian capatalized char pertama.
//line 39 = code akan access char[i] di string[i]. kemudian capatalized char i yang pertama.
//setelah i=0, i=1 kerana melaui proses iterasi.
//line 40 = create satu loops, assign int baharu j dengan index 1. Loops akan continue iterates selagi mana j<bilangan character dalam i.
//Contoh, colors[1] adalah "merah", (int j=1) -> loop bermula pada index 1.
//(j<colors[i].size()) -> loops akan iterates setiap character yang ada dalam string "merah", bermula pada index 1. So, dia skip huruf 'm', terus pada 'e'
//line 41 = Code akan kecilkan huruf yang didapati capatalized selepas huruf pertama/index =0.
