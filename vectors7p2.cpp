#include <iostream>
#include <vector>

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
        //std::cout<<colors[i];

        colors[i][0] = toupper(colors[i][0]);
        for(int j=1; j<colors[i].size(); j++){
            colors[i][j] = tolower(colors[i][j]);
        }       
    }
    return colors; 
}