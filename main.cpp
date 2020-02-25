#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>


void print_vector(std::vector<int> my_vector){

    std::cout<<"Your guesses: \n";
    for(int i=0; i<my_vector.size();i++){
            std::cout<<my_vector[i]<<"\t";
    }
    std::cout<<"\n";
}

void play_game(){
std::vector<int> guesses;

std::cout<<"Playing!\n";
int random = rand() %251;
std::cout<<"Guess the number: ";
std::cout<<"\n("<<random<<")"<<std::endl;

    while(true){
     int guess;
     std::cin>>guess;
     guesses.push_back(guess);
        if(guess ==random){
            std::cout<<"You win!\n";
            break;
        }else if(guess<random){
            std::cout<<"Too low!\n";
        }else if(guess>random){
            std::cout<<"Too high!\n";
        }
    }
    print_vector(guesses);
}

int main()
{
    srand(time(NULL));
    int choice;

    do{
        std::cout<<"Quit - 0"<<std::endl<<"Play - 1\n";
        std::cin>>choice;

        switch(choice){
            case 0:
                std::cout<<"Bye!\n";
                return 0;
            case 1:
                std::cout<<"Lets Play!\n";
                play_game();
                break;
        }
    }while(choice !=0);
}
