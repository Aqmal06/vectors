#include <iostream>
#include <vector>

//Mencari nilai element yang kecil dalam vector
std::vector<int> smallerElement(std::vector<int> nums);

int main(){

    std::vector<int> nums = {7, 2 ,5, 3, 1, 5, 6}; //Senarai nombor dalam vector nums

    std::cout<<"Value for x: "; //Gunakan for each loop untuk prinout semua element dalam vector nums
    for(int x: nums){
        std::cout<<x<<" ";
    }

    std::cout<<"\nValue for y: ";
    std::vector<int> result = smallerElement(nums); //Invoke the functions
    for(int y: result){
        std::cout<<y<<" ";
    }


    return 0;
}

//Functions
std::vector<int> smallerElement(std::vector<int> nums){
    std::vector<int> temp; //Code untuk stored element yang execute the condition.

    for(int i=1; i<nums.size()-1; i++){ //Loop berlaku, loop akan iterates bilangan element yang stored dalam vectors.
                                        //Loop akan mula pada index 1/i=1.
        if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) //Menggunakan logical operator '&&' untuk checked kedua-dua condition
                                                   //nums(element) dalam index i less than nums(element) dalam index i ditolak dengan 1
                                                   //Merujuk kepada element yang stored di dalam vectors nums.
                                                   //nums[1] -> 2
                                                   //nums[1-1] = i=0 -> 7
                                                   //if 2<7 -> Yes, betul.7 Lebih besar dari 2.
                                                   //Condition pertama met the requirement.

                                                   //nums(element) dalam index i bigger than nums(element) dalam index i ditambah 1
                                                   //nums[1] -> 2
                                                   //nums[1+1] = i=2 -> 5
                                                   //if 2<5 -> Yes, betul. 5 lebih besar dari 2.
                                                   //Condition kedua met the requirement.
                                                   //Element 2 ialah nilai yang kecil di dalam vectors nums.

            temp.push_back(nums[i]); //Kita akan stored element yang met 2 condition dalam temp.
        }
        return temp;
}
