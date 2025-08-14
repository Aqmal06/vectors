#include <iostream>
#include <vector>
#include <algorithm>

bool consecutive(std::vector<int> numbers);

int main(){

    int size;
    int element;
    std::vector<int> numbers;

    //Code input untuk senaraikan berapa ruang dalam vector.
    std::cout<<"Give the size for the vector: "; 
    std::cin>>size;

    //Code akan buat loop, dan suruh senaraikan element ikut pada input yang telah kita tulis.
    for(int i=0; i<size; i++){
        std::cout<<"Enter an element at #"<<i+1<<": ";
        std::cin>>element;
        numbers.push_back(element); //Kesemua value yang ada dalam element, akan pindah masuk dalam numbers.
    }

    //Code untuk print output numbers.
    for(int number: numbers){
        std::cout<<number<<" ";
    }
    std::cout<<'\n'<<consecutive(numbers);
    if(consecutive(numbers) == 0){
        std::cout<<"\nThe numbering is not consecutive";
    }
    else{
        std::cout<<"\nThe numbering is consecutive";
    }
}

//Functions
//Bertujuan untuk check adakah element yang disenaraikan adalah nombor yang diikut rapat secara menaik.
bool consecutive(std::vector<int> numbers){
    std::sort(numbers.begin(), numbers.end());

    for(int i=0; i<numbers.size()-1; i++){
        //numbers[i+1] merujuk kepada value baharu apabila kedudukan index berubah
        //Condition asal menyatakan i=0, tetapi telah berubah kepada i=1 kerana telah ditambah dengan 1.
        //Maka, value yang stored dalam numbers[i+1] ialah 2.
        
        //numbers[i]+1 merujuk kepada value yang ada dalam index akan ditambah dengan 1.
        //Contohnya, i=0/index 0 memegang value 1.
        //Jadi, nilai yang ada dalam index 0 akan ditambah dengan 1.
        //Maka, keputusan untuk (numbers[i] + 1) akan menjadi 2.
        if(numbers[i+1]!=numbers[i]+1)
        return false;
    }
    return true;
}