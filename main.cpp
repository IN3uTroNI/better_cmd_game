#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
#include <time.h>

const int proper_size = 20;
const int table_size_y = proper_size;
const int table_size_x = 2 * table_size_y;    // x = 2y for better look
const int initial_player_poz_y = table_size_y/2;
const int initial_player_poz_x = table_size_x/2;
char table[table_size_y][table_size_x];
char hiddenTable[table_size_y][table_size_x];

int player_poz_x = initial_player_poz_x;    // player x pozition for player move updates
int player_poz_y = initial_player_poz_y;    // player y pozition for player move updates

int chapter = 0;

    // Shortcuts
void clear() {
    system("cls");
}

void say(std::string text) {
    std::cout << text;
}

void space(char array[], int size) {
    for(int space = 0; space < size; space++) {    // Main interactive area
        std::cout << array[space];
    }
}

    // The code
void loadFodder(char fodder[], int fodder_size) {    // Adds space (' ') in the array
    for(int i = 0; i < fodder_size; i++) {
        fodder[i] = ' ';
    }
}

void loadChapter(int chapterNr) {
    std::ifstream file;
    std::string text;

    if(chapterNr == 1) {    // Loads the text from files and shows it (Chapter 1)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter1_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter1_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter1_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;
        
    } if(chapterNr == 2) {    // Loads the text from files and shows it (Chapter 2)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter2_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter2_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter2_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;

    } if(chapterNr == 3) {    // Loads the text from files and shows it (Chapter 3)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter3_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter3_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter3_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;

    } if(chapterNr == 4) {    // Loads the text from files and shows it (Chapter 4)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter4_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter4_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter4_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;

    } if(chapterNr == 5) {    // Loads the text from files and shows it (Chapter 5)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter5_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter5_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter5_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;

    } if(chapterNr == 6) {    // Loads the text from files and shows it (Chapter 6)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter6_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter6_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter6_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;
        
    } if(chapterNr == 7) {    // Loads the text from files and shows it (Chapter 7)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter7_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter7_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter7_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;
        
    } if(chapterNr == 8) {    // Loads the text from files and shows it (Chapter 8)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter8_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter8_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter8_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;
        
    } if(chapterNr == 9) {    // Loads the text from files and shows it (Chapter 9)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter9_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter9_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter9_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;
        
    } if(chapterNr == 10) {    // Loads the text from files and shows it (Chapter 10)
        clear();
        int chapterPosible = rand() % 3;
        if(chapterPosible == 0) {
            std::ifstream file("chapters\\chapter10_1.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 1) {
            std::ifstream file("chapters\\chapter10_2.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        } else if(chapterPosible == 2) {
            std::ifstream file("chapters\\chapter10_3.txt");
            if(!file) {
                say("file failed!");
            }
            while(file >> text) {
                std::cout << ' ' << text;
            }
        }
        Sleep(5000);
        return;   
    }
}

//Riddle effect!!
void riddle(int &riddle_progress, bool &quit, char spacer_riddle[], int spacer_size) {    // Set and show the riddle
    std::string riddle;
    std::string answer;
    std::string fake_answer_1;
    std::string fake_answer_2;

    if(riddle_progress == 0) {    // Progres 1 out of 3
        int random_riddle_0 = rand() % 4;
        switch (random_riddle_0) {
            case 0:
                riddle = "What has keys but can't open locks?";
                answer = "A piano.";
                fake_answer_1 = "A chain.";
                fake_answer_2 = "A muzical sheet.";
                break;

            case 1:
                riddle = "What has a heart that doesn't beat?";
                answer = "An artichoke.";
                fake_answer_1 = "A corpse.";
                fake_answer_2 = "A car.";
                break;

            case 2:
                riddle = "What comes once in a minute, twice in a moment, but never in a thousand years?";
                answer = "The letter 'M'.";
                fake_answer_1 = "Time.";
                fake_answer_2 = "A flash.";
                break;

            case 3:
                riddle = "What has a neck but no head?";
                answer = "A bottle.";
                fake_answer_1 = "A vacuum cleaner.";
                fake_answer_2 = "An owl.";
                break;

            default:
                break;
        }
    } else if(riddle_progress == 1) {    // Progres 2 out of 3
        int random_riddle_1 = rand() % 4;
        switch (random_riddle_1) {
            case 0:
                riddle = "What gets wetter as it dries?";
                answer = "A towel.";
                fake_answer_1 = "A papper.";
                fake_answer_2 = "A sponge.";
                break;

            case 1:
                riddle = "What can travel around the world while staying in a corner?";
                answer = "A stamp.";
                fake_answer_1 = "A bag.";
                fake_answer_2 = "A box.";
                break;

            case 2:
                riddle = "What has hands but can't clap?";
                answer = "A clock.";
                fake_answer_1 = "A blind persone.";
                fake_answer_2 = "Atlas.";
                break;

            case 3:
                riddle = "What is full of holes but still holds water?";
                answer = "A sponge.";
                fake_answer_1 = "A bowl.";
                fake_answer_2 = "A can.";
                break;

            default:
                break;
        }
    } else if(riddle_progress == 2) {    // Progres 3 out of 3
        int random_riddle_2 = rand() % 4;
        switch (random_riddle_2) {
            case 0:
                riddle = "What belongs to you but others use it more than you do?";
                answer = "Your name.";
                fake_answer_1 = "Your hand.";
                fake_answer_2 = "Your phone.";
                break;

            case 1:
                riddle = "What has one eye but can't see?";
                answer = "A needle.";
                fake_answer_1 = "A blind cyclops.";
                fake_answer_2 = "A blind pyrate.";
                break;

            case 2:
                riddle = "What is always in front of you but can't be seen?";
                answer = "The future.";
                fake_answer_1 = "Your breath.";
                fake_answer_2 = "Your nose.";
                break;

            case 3:
                riddle = "What gets bigger the more you take away?";
                answer = "A hole.";
                fake_answer_1 = "The interior of a bag.";
                fake_answer_2 = "Your bank account.";
                break;

            default:
                break;
        }
    } else {
        return;
    }

    space(spacer_riddle, spacer_size);    // Display riddle
    std::cout << riddle << "\n";
    
    int posible_answers = 3;
    bool correct_answer[posible_answers];
    int riddle_scramble = rand() % 6;

    if(riddle_scramble == 0) {    // Posibble arrange 1
        space(spacer_riddle, spacer_size);
        std::cout << "1. ";
        std::cout << fake_answer_1 << "\n";
        correct_answer[0] = false;
        space(spacer_riddle, spacer_size);
        std::cout << "2. ";
        std::cout << fake_answer_2 << "\n";
        correct_answer[1] = false;
        space(spacer_riddle, spacer_size);
        std::cout << "3. ";
        std::cout << answer << "\n";
        correct_answer[2] = true;

    } else if(riddle_scramble == 1) {    // Posibble arrange 2
        space(spacer_riddle, spacer_size);
        std::cout << "1. ";
        std::cout << fake_answer_2 << "\n";
        correct_answer[0] = false;
        space(spacer_riddle, spacer_size);
        std::cout << "2. ";
        std::cout << fake_answer_1 << "\n";
        correct_answer[1] = false;
        space(spacer_riddle, spacer_size);
        std::cout << "3. ";
        std::cout << answer << "\n";
        correct_answer[2] = true;

    } else if(riddle_scramble == 2) {    // Posibble arrange 3
        space(spacer_riddle, spacer_size);
        std::cout << "1. ";
        std::cout << fake_answer_2 << "\n";
        correct_answer[0] = false;
        space(spacer_riddle, spacer_size);
        std::cout << "2. ";
        std::cout << answer << "\n";
        correct_answer[1] = true;
        space(spacer_riddle, spacer_size);
        std::cout << "3. ";
        std::cout << fake_answer_1 << "\n";
        correct_answer[2] = false;
    
    } else if(riddle_scramble == 3) {    // Posibble arrange 4
        space(spacer_riddle, spacer_size);
        std::cout << "1. ";
        std::cout << fake_answer_1 << "\n";
        correct_answer[0] = false;
        space(spacer_riddle, spacer_size);
        std::cout << "2. ";
        std::cout << answer << "\n";
        correct_answer[1] = true;
        space(spacer_riddle, spacer_size);
        std::cout << "3. ";
        std::cout << fake_answer_2 << "\n";
        correct_answer[2] = false;
    
    } else if(riddle_scramble == 4) {    // Posibble arrange 5
        space(spacer_riddle, spacer_size);
        std::cout << "1. ";
        std::cout << answer << "\n";
        correct_answer[0] = true;
        space(spacer_riddle, spacer_size);
        std::cout << "2. ";
        std::cout << fake_answer_1 << "\n";
        correct_answer[1] = false;
        space(spacer_riddle, spacer_size);
        std::cout << "3. ";
        std::cout << fake_answer_2 << "\n";
        correct_answer[2] = false;
    
    } else if(riddle_scramble == 5) {    // Posibble arrange 6
        space(spacer_riddle, spacer_size);
        std::cout << "1. ";
        std::cout << answer << "\n";
        correct_answer[0] = true;
        space(spacer_riddle, spacer_size);
        std::cout << "2. ";
        std::cout << fake_answer_2 << "\n";
        correct_answer[1] = false;
        space(spacer_riddle, spacer_size);
        std::cout << "3. ";
        std::cout << fake_answer_1 << "\n";
        correct_answer[2] = false;
    }

    int player_answer;

    std::cout << "\n";
    space(spacer_riddle, spacer_size);
    std::cout << "Answer in number: ";
    std::cin >> player_answer;
    Sleep(1000);
    if(correct_answer[player_answer - 1] == false) {
        quit = true;
        return;
    }
}

void pyramidRiddle(int terminal_height, int terminal_width, bool &quit) {
    int spacer_size = terminal_width/3;
    char spacer_riddle[spacer_size];
    loadFodder(spacer_riddle, spacer_size);    // Loads the spacer for centering the riddle

    int riddle_progress = 0;

    for (int questions = 0; questions < 3; questions++) {
        clear();
        for(int spacer_up = 0; spacer_up < (terminal_height/2) - 5; spacer_up++) {
            std::cout << "\n";
        }
        riddle(riddle_progress, quit, spacer_riddle, spacer_size);\
        if(quit == true) {
            return;
        }
        riddle_progress = riddle_progress + 1;
    }
}

// X 0 effect!!
void x_and_0(int terminal_height, int terminal_width, bool &quit) {
    int x_0_size = 5;
    char x_0_table[x_0_size][x_0_size];
    int spacer_size = (terminal_width/2) - 3;
    char spacer[spacer_size];
    loadFodder(spacer, spacer_size);
    
    for(int xo_y = 0; xo_y < x_0_size; xo_y++) {
        for(int xo_x = 0; xo_x < x_0_size; xo_x++) {
            if((xo_x % 2) != 0) {
                x_0_table[xo_y][xo_x] = '|';
            } else if((xo_y % 2) != 0) {
                x_0_table[xo_y][xo_x] = '=';
            } else {
                x_0_table[xo_y][xo_x] = ' ';
            }
        }
    }
    bool playing = true;
    while (playing) {
        clear();
        for(int spacer_h = 0; spacer_h < (terminal_height/2) - 3; spacer_h++) {
            std::cout << "\n";   
        }
        for(int spacer_h_m = 0; spacer_h_m < x_0_size; spacer_h_m++) {
            space(spacer, spacer_size);
            for(int size_w = 0; size_w < x_0_size; size_w++) {
                std::cout << x_0_table[spacer_h_m][size_w];
            }
            std::cout << "\n";
        }

        std::cout << "\n\n";
        space(spacer, spacer_size - 3);
        std::cout << "yx-0 2 4" << "\n";
        space(spacer, spacer_size - 3);
        std::cout << "0 - | | " << "\n";
        space(spacer, spacer_size - 3);
        std::cout << "   =====" << "\n";
        space(spacer, spacer_size - 3);
        std::cout << "2 - | | " << "\n";
        space(spacer, spacer_size - 3);
        std::cout << "   =====" << "\n";
        space(spacer, spacer_size - 3);
        std::cout << "4 - | | " << "\n\n";

        int move_y;
        int move_x;
        bool time_player = true;
        while(time_player) {
            space(spacer, spacer_size - 17);
            std::cout << "Insert your move y(you are playing '0'): ";
            std::cin >> move_y;
            space(spacer, spacer_size - 17);
            std::cout << "Insert your move x(you are playing '0'): ";
            std::cin >> move_x;

            if(x_0_table[move_y][move_x] == ' ') {
                x_0_table[move_y][move_x] = '0';
                time_player = false;
            }
        }
        
        if(((x_0_table[0][0] == '0') && (x_0_table[2][0] == '0') && (x_0_table[4][0] == '0')) ||
           ((x_0_table[0][2] == '0') && (x_0_table[2][2] == '0') && (x_0_table[4][2] == '0')) ||
           ((x_0_table[0][4] == '0') && (x_0_table[2][4] == '0') && (x_0_table[4][4] == '0')) ||
           ((x_0_table[0][0] == '0') && (x_0_table[0][2] == '0') && (x_0_table[0][4] == '0')) ||
           ((x_0_table[2][0] == '0') && (x_0_table[2][2] == '0') && (x_0_table[2][4] == '0')) ||
           ((x_0_table[4][2] == '0') && (x_0_table[4][2] == '0') && (x_0_table[4][4] == '0')) ||
           ((x_0_table[0][0] == '0') && (x_0_table[2][2] == '0') && (x_0_table[4][4] == '0')) ||
           ((x_0_table[4][4] == '0') && (x_0_table[2][2] == '0') && (x_0_table[0][0] == '0'))) {
            return;
        }

        bool time = true;
        while (time) {
            int cpu_choice_x = rand() % 3;
            if(cpu_choice_x == 1) {
                cpu_choice_x = 2;
            } else if(cpu_choice_x == 2) {
                cpu_choice_x = 4;
            }
            int cpu_choice_y = rand() % 3;
            if(cpu_choice_y == 1) {
                cpu_choice_y = 2;
            } else if(cpu_choice_x == 2) {
                cpu_choice_y = 4;
            }

            if(x_0_table[cpu_choice_y][cpu_choice_x] == ' ') {
                x_0_table[cpu_choice_y][cpu_choice_x] = 'x';
                time = false;
            }
        }

        if(((x_0_table[0][0] == 'x') && (x_0_table[2][0] == 'x') && (x_0_table[4][0] == 'x')) ||
           ((x_0_table[0][2] == 'x') && (x_0_table[2][2] == 'x') && (x_0_table[4][2] == 'x')) ||
           ((x_0_table[0][4] == 'x') && (x_0_table[2][4] == 'x') && (x_0_table[4][4] == 'x')) ||
           ((x_0_table[0][0] == 'x') && (x_0_table[0][2] == 'x') && (x_0_table[0][4] == 'x')) ||
           ((x_0_table[2][0] == 'x') && (x_0_table[2][2] == 'x') && (x_0_table[2][4] == 'x')) ||
           ((x_0_table[4][2] == 'x') && (x_0_table[4][2] == 'x') && (x_0_table[4][4] == 'x')) ||
           ((x_0_table[0][0] == 'x') && (x_0_table[2][2] == 'x') && (x_0_table[4][4] == 'x')) ||
           ((x_0_table[4][4] == 'x') && (x_0_table[2][2] == 'x') && (x_0_table[0][0] == 'x'))) {
            clear();
            for(int spacer_h = 0; spacer_h < (terminal_height/2) - 3; spacer_h++) {
                std::cout << "\n";   
            }
            for(int spacer_h_m = 0; spacer_h_m < x_0_size; spacer_h_m++) {
                space(spacer, spacer_size);
                for(int size_w = 0; size_w < x_0_size; size_w++) {
                    std::cout << x_0_table[spacer_h_m][size_w];
                }
                std::cout << "\n";
            }
            quit = true;
            return;
        }
    }
}

// Coin fplip effect!!
void coinFlip(int terminal_height, int terminal_width, bool &quit) {
    int spacer_size = (terminal_width/2);
    char spacer[spacer_size];
    loadFodder(spacer, spacer_size);

    int chances = 2;
    bool playing = true;
    while(playing) {
        if(chances == 0) {
            quit = true;
            return;
        }      
        clear();
        for(int spacer_h = 0; spacer_h < (terminal_height/2) - 3; spacer_h++) {
            std::cout << "\n";   
        }
        char player_choice;

        space(spacer, spacer_size - 25);
        std::cout << "Chosse betwen H - head and S - stema, you got to chances. Good luck.\n";
        
        int coin_flip_rezult = rand() % 2;
        char coin_face;
        if(coin_flip_rezult == 0) {
            coin_face = 'S';
        } else if(coin_flip_rezult == 1) {
            coin_face = 'H';
        }

        space(spacer, spacer_size - 25);
        std::cout << "Every choice flipps the coin.\n";
        space(spacer, spacer_size - 25);
        std::cout << "Insert your choice: ";
        std::cin >> player_choice;

        if(player_choice == coin_face) {
            return;
        } else {
            chances = chances - 1;
        }
    }
}

// Free point effect!!!
void freePoint(int terminal_height, int terminal_width) {
    int spacer_size = (terminal_width/2);
    char spacer[spacer_size];
    loadFodder(spacer, spacer_size);

    clear();
    for(int term_h = 0; term_h < (terminal_height/2) - 1; term_h++) {
        std::cout << "\n";
    }
    
    space(spacer, spacer_size - 4);
    std::cout << "Lucky...\n";

    for(int term_hm = 0; term_hm < (terminal_height/2); term_hm++) {
        std::cout << "\n";
    }
    Sleep(1000);

    return;
}

// Show hidden map effect!!!
void showHidenMap(int terminal_height, int terminal_width) {
    int spacer_size = (terminal_width/2);
    char spacer[spacer_size];
    loadFodder(spacer, spacer_size);

    clear();
    for(int term_h = 0; term_h < (terminal_height/2) - (table_size_y/2); term_h++) {
        std::cout << "\n";
    }

    for(int terminal_hw = 0; terminal_hw < table_size_y; terminal_hw++) {
        space(spacer, spacer_size - (table_size_x/2));
        for(int terminal_hw_x = 0; terminal_hw_x < table_size_x; terminal_hw_x++) {
            std::cout << hiddenTable[terminal_hw][terminal_hw_x];
        }
        std::cout << "\n";
    }

    for(int term_hm = 0; term_hm < (terminal_height/2) - (table_size_y/2); term_hm++) {
        std::cout << "\n";
    }

    Sleep(5000);
}

// Sudoku effect!!!
void offSetNumbers(int numbers[]) {    // offsets an array by 1
    int temp;
    for(int offset = 8; offset >= 0; offset--) {
        if(offset == 8) {
            temp = numbers[offset];
        } else if(offset == 0){
            numbers[offset + 1] = numbers[offset];
            numbers[offset] = temp;
        } else {
            numbers[offset + 1] = numbers[offset];
        }
    }
}

void loadSudokuTables(int sudoku_table[][9], int hidden_sudoku_table[][9], int sudoku_size, int numbers[]) {    // creates and loads the table
    int counter = 0;
    int rand_start = rand() % 9;
    int char_12 = 197;
    while(counter != sudoku_size + 1) {   // creates the hidden table
        for(int x = 0; x < sudoku_size; x++) {
            hidden_sudoku_table[rand_start][x] = numbers[x];
        }
        offSetNumbers(numbers);
        if(rand_start == 7) {
            rand_start = 0;
        } else if(rand_start == 8) {
            rand_start = 1;
        } else {
            rand_start = rand_start + 2;
        }
        counter = counter + 1;
    }

    for(int load = 0; load < 81; load++) {    // copies some numbers to real table
        int temp_poz_y = rand() % 9;
        int temp_poz_x = rand() % 9;
        sudoku_table[temp_poz_y][temp_poz_x] = hidden_sudoku_table[temp_poz_y][temp_poz_x];
    }

    for(int y = 0; y < 9; y++) {    // in case of free spots
        for(int x = 0; x < 9; x++) {
            if((sudoku_table[y][x] < 1) || (sudoku_table[y][x] > 9)) {
                sudoku_table[y][x] = 0;
            }
        }
    }

    clear();    // shows the hidden table (1 frame)
    for(int y = 0; y < 3; y++) {
        for(int x = 0; x < 3; x++) {
            std::cout << hidden_sudoku_table[y][x] << " ";
        }
        std::cout << "| ";
        for(int x_1 = 3; x_1 < 6; x_1++) {
            std::cout << hidden_sudoku_table[y][x_1] << " ";
        }
        std::cout << "| ";
        for(int x_2 = 6; x_2 < 9; x_2++) {
            std::cout << hidden_sudoku_table[y][x_2] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "------" << char(char_12) << "-------" << char(char_12) << "------";
    std::cout << "\n";
    for(int y = 3; y < 6; y++) {
        for(int x = 0; x < 3; x++) {
            std::cout << hidden_sudoku_table[y][x] << " ";
        }
        std::cout << "| ";
        for(int x_1 = 3; x_1 < 6; x_1++) {
            std::cout << hidden_sudoku_table[y][x_1] << " ";
        }
        std::cout << "| ";
        for(int x_2 = 6; x_2 < 9; x_2++) {
            std::cout << hidden_sudoku_table[y][x_2] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "------" << char(char_12) << "-------" << char(char_12) << "------";
    std::cout << "\n";
    for(int y = 6; y < 9; y++) {
        for(int x = 0; x < 3; x++) {
            std::cout << hidden_sudoku_table[y][x] << " ";
        }
        std::cout << "| ";
        for(int x_1 = 3; x_1 < 6; x_1++) {
            std::cout << hidden_sudoku_table[y][x_1] << " ";
        }
        std::cout << "| ";
        for(int x_2 = 6; x_2 < 9; x_2++) {
            std::cout << hidden_sudoku_table[y][x_2] << " ";
        }
        std::cout << "\n";
    }
}

void showSudokuTable(int sudoku_table[][9], int terminal_height, int terminal_width) {    // displays the table
    int char_12 = 197;
    int spacer_size = (terminal_width/2) - 10;
    char spacers[spacer_size];
    loadFodder(spacers, spacer_size);
    clear();
    for(int space1 = 0; space1 < (terminal_height/2) - 6; space1++) {
        std::cout << "\n";
    }
    for(int y = 0; y < 3; y++) {
        space(spacers, spacer_size);
        for(int x = 0; x < 3; x++) {
            std::cout << sudoku_table[y][x] << " ";
        }
        std::cout << "| ";
        for(int x_1 = 3; x_1 < 6; x_1++) {
            std::cout << sudoku_table[y][x_1] << " ";
        }
        std::cout << "| ";
        for(int x_2 = 6; x_2 < 9; x_2++) {
            std::cout << sudoku_table[y][x_2] << " ";
        }
        std::cout << "\n";
    }
    space(spacers, spacer_size);
    std::cout << "------" << char(char_12) << "-------" << char(char_12) << "------";
    std::cout << "\n";
    for(int y = 3; y < 6; y++) {
        space(spacers, spacer_size);
        for(int x = 0; x < 3; x++) {
            std::cout << sudoku_table[y][x] << " ";
        }
        std::cout << "| ";
        for(int x_1 = 3; x_1 < 6; x_1++) {
            std::cout << sudoku_table[y][x_1] << " ";
        }
        std::cout << "| ";
        for(int x_2 = 6; x_2 < 9; x_2++) {
            std::cout << sudoku_table[y][x_2] << " ";
        }
        std::cout << "\n";
    }
    space(spacers, spacer_size);
    std::cout << "------" << char(char_12) << "-------" << char(char_12) << "------";
    std::cout << "\n";
    for(int y = 6; y < 9; y++) {
        space(spacers, spacer_size);
        for(int x = 0; x < 3; x++) {
            std::cout << sudoku_table[y][x] << " ";
        }
        std::cout << "| ";
        for(int x_1 = 3; x_1 < 6; x_1++) {
            std::cout << sudoku_table[y][x_1] << " ";
        }
        std::cout << "| ";
        for(int x_2 = 6; x_2 < 9; x_2++) {
            std::cout << sudoku_table[y][x_2] << " ";
        }
        std::cout << "\n";
    }
    Sleep(10000);
}

void sudoku(int terminal_height, int terminal_width) {    // manages the display and creation of sudoku table
    int numbers[9];
    for(int x = 0; x < 9; x++) {
        numbers[x] = x + 1;
    }
    int sudoku_table[9][9];
    int hidden_sudoku_table[9][9];
    loadSudokuTables(sudoku_table, hidden_sudoku_table, 9, numbers);
    showSudokuTable(sudoku_table, terminal_height, terminal_width);
}

void invokeRandomEffect(int terminal_height, int terminal_width, bool &quit) {    // Effect manager
    int effect_number = rand() % 6;
    switch (effect_number) {
    case 0:    // Effect - 1 (the riddle)
        pyramidRiddle(terminal_height, terminal_width, quit);
        break;
    
    case 1:    // Effect - 2 (X and 0)
        x_and_0(terminal_height, terminal_width, quit);
        break;
    
    case 2:    // Effect - 3 (coin flip)
        coinFlip(terminal_height, terminal_width, quit);
        break;

    case 3:    // Effect - 4 (free point) ("_")
        freePoint(terminal_height, terminal_width);
        break;

    case 4:    // Effect - 5 (show hidden map)
        showHidenMap(terminal_height, terminal_width);
        break;

    case 5:    // Effect - 6
        sudoku(terminal_height, terminal_width);
        break;

    default:    // Default rezult in case of bad code
        break;
    }
}

void standardEvent(int player_poz_y, int player_poz_x, int terminal_height, int terminal_width, bool &quit) {    // Manages chapters and progress
    if(hiddenTable[player_poz_y][player_poz_x] == '?') {
        if(chapter == 0) {
            loadChapter(1);    // Chapter 1
            chapter = chapter + 1;
            return;
        } if(chapter == 1) {
            loadChapter(2);    // Chapter 2
            chapter = chapter + 1;
            return;
        } if(chapter == 2) {
            loadChapter(3);    // Chapter 3
            chapter = chapter + 1;
            return;
        } if(chapter == 3) {
            loadChapter(4);    // Chapter 4
            chapter = chapter + 1;
            return;
        } if(chapter == 4) {
            loadChapter(5);    // Chapter 5
            chapter = chapter + 1;
            return;
        } if(chapter == 5) {
            loadChapter(6);    // Chapter 6
            chapter = chapter + 1;
            return;
        } if(chapter == 6) {
            loadChapter(7);    // Chapter 7
            chapter = chapter + 1;
            return;
        } if(chapter == 7) {
            loadChapter(8);    // Chapter 8
            chapter = chapter + 1;
            return;
        } if(chapter == 8) {
            loadChapter(9);    // Chapter 9
            chapter = chapter + 1;
            return;
        } if(chapter == 9) {
            loadChapter(10);   // Chapter 10
            quit = true;
            return;
        }
    } else {
        invokeRandomEffect(terminal_height, terminal_width, quit);    // Loads the effect manager
    }
}

// Characters meaning
/*
    # - wall
    @ - player
    ! - warning
    ? - note    -\_('-')_/-
*/
void loadTable() {    // Adds player and walls
    for(int y = 0; y < table_size_y; y++) {
        for (int x = 0; x < table_size_x; x++) {
            if(y == 0 || y == table_size_y - 1) {
                table[y][x] = '#';
            } else if(x == 0 || x == table_size_x - 1) {
                table[y][x] = '#';
            } else if(x == initial_player_poz_x && y == initial_player_poz_y) {
                table[y][x] = '@';
            } else {
                table[y][x] = ' ';
            }
        }
    }
}

void debugShowTable(char table_to_show[table_size_y][table_size_x]) {    // Shows the hidden table
    for(int y = 0; y < table_size_y; y++) {
        for(int x = 0; x < table_size_x; x++) {
            std::cout << table_to_show[y][x];
        }
        std::cout << "\n";
    }   
}

void addStory() {    // Ads the interactive story points
    for(int h = 0; h < table_size_y; h++) {
        for(int w = 0; w < table_size_x; w++) {
            if(table[h][w] == '@') {
                hiddenTable[h][w] = ' ';
            } else {
                hiddenTable[h][w] = table[h][w];
            }
        }
    }

    int counter = 0;
    for(int y = 0; y < table_size_y; y++) {
        for(int x = 0; x < table_size_x; x++) {
            int coin = rand() % 2;
            if(coin == 1) {
                if(table[y][x] == '!' && hiddenTable[y][x] != '?' && counter < 10) {
                    hiddenTable[y][x] = '?';
                    counter = counter + 1;
                }
            }
        }
    }
    if(counter <= 10) {    // In case there were not enough story points
        int temp_counter = 10 - counter;
        for(int u = 0; u < temp_counter; u++) {
            int t_y = rand() % table_size_y;
            int t_x = rand() % table_size_x;
            if(table[t_y][t_x] != '#' && table[t_y][t_x] != '@') {
                hiddenTable[t_y][t_x] = '?';
                table[t_y][t_x] = '!';
            } else {
                temp_counter = temp_counter + 1;
            }
        }
    }
}

void loadDangers() {    // Adds dangers -\_('!')_/-     '!' - symbol
    for(int danger_count = 0; danger_count < table_size_y; danger_count++) {
        int rand_x = rand() % table_size_x;
        int rand_y = rand() % table_size_y;
        if (table[rand_y][rand_x] == ' ' || table[rand_y][rand_x] == ' ') {
            table[rand_y][rand_x] = '!';
            hiddenTable[rand_y][rand_x] = '!';
        }
    }
}

void drawTable(int half_width_screen, int half_height_screen, char fodder[]) {    // Visual output and main play area
    //h1_2 first half of the screen (height)                                      // centering
    //h2_2 last half of the screen (height)
    //w1_2 first half of the screen (width)
    //w2_2 last half of the screen (width)

    for(int h1_2 = 0; h1_2 < half_height_screen - (table_size_y/2); h1_2++) {    // First spacer (for centering)
        std::cout << " \n";
    }

    for(int y = 0; y < table_size_y; y++) {    // Middle drawing and play area
        for(int x_fodder = 0; x_fodder < half_width_screen - (table_size_x/2); x_fodder++) {    // For width centering
            std::cout << fodder[x_fodder];
        }

        for(int x = 0; x < table_size_x; x++) {    // Main play area
            std::cout << table[y][x];
        }
        std::cout << "\n";
    }

    for(int h2_2 = 0; h2_2 < half_height_screen - (table_size_y/2); h2_2++) {    // Last spacer (for centering)
        std::cout << " \n";
    }
}

void movePlayer(bool &quit, int terminal_height, int terminal_width) {    // Moves the player acording to input
    char input = _getch();

    switch (input) {
    case 'w':    // Moves the player up
        if(table[player_poz_y][player_poz_x] == '@' && table[player_poz_y - 1][player_poz_x] != '#' && table[player_poz_y - 1][player_poz_x] != '!') {
            table[player_poz_y][player_poz_x] = ' ';
            player_poz_y = player_poz_y - 1;
            table[player_poz_y][player_poz_x] = '@';
        } else if(table[player_poz_y][player_poz_x] == '@' && table[player_poz_y - 1][player_poz_x] == '!') {
            table[player_poz_y][player_poz_x] = ' ';
            player_poz_y = player_poz_y - 1;
            table[player_poz_y][player_poz_x] = '@';
            standardEvent(player_poz_y, player_poz_x, terminal_height, terminal_width, quit);
        }
        break;
    
    case 's':    // Moves the player down
        if(table[player_poz_y][player_poz_x] == '@' && table[player_poz_y + 1][player_poz_x] != '#' && table[player_poz_y + 1][player_poz_x] != '!') {
            table[player_poz_y][player_poz_x] = ' ';
            player_poz_y = player_poz_y + 1;
            table[player_poz_y][player_poz_x] = '@';
        } else if(table[player_poz_y][player_poz_x] == '@' && table[player_poz_y + 1][player_poz_x] == '!') {
            table[player_poz_y][player_poz_x] = ' ';
            player_poz_y = player_poz_y + 1;
            table[player_poz_y][player_poz_x] = '@';
            standardEvent(player_poz_y, player_poz_x, terminal_height, terminal_width, quit);
        }
        break;

    case 'a':    // Moves the player left
        if(table[player_poz_y][player_poz_x] == '@' && table[player_poz_y][player_poz_x - 1] != '#' && table[player_poz_y][player_poz_x - 1] != '!') {
            table[player_poz_y][player_poz_x] = ' ';
            player_poz_x = player_poz_x - 1;
            table[player_poz_y][player_poz_x] = '@';
        } else if(table[player_poz_y][player_poz_x] == '@' && table[player_poz_y][player_poz_x - 1] == '!') {
            table[player_poz_y][player_poz_x] = ' ';
            player_poz_x = player_poz_x - 1;
            table[player_poz_y][player_poz_x] = '@';
            standardEvent(player_poz_y, player_poz_x, terminal_height, terminal_width, quit);
        }
        break;

    case 'd':    // Moves the player right
        if(table[player_poz_y][player_poz_x] == '@' && table[player_poz_y][player_poz_x + 1] != '#' && table[player_poz_y][player_poz_x + 1] != '!') {
            table[player_poz_y][player_poz_x] = ' ';
            player_poz_x = player_poz_x + 1;
            table[player_poz_y][player_poz_x] = '@';
        } else if(table[player_poz_y][player_poz_x] == '@' && table[player_poz_y][player_poz_x + 1] == '!') {
            table[player_poz_y][player_poz_x] = ' ';
            player_poz_x = player_poz_x + 1;
            table[player_poz_y][player_poz_x] = '@';
            standardEvent(player_poz_y, player_poz_x, terminal_height, terminal_width, quit);
        }
        break;
    
    case 'q':    // Sets quit true to exit the main loop
        quit = true;
        break;
    }
}

int main() {
    srand(time(NULL));

    clear();
    std::cout << "For better expirience put terminal in fullscreen (alt+enter). \n" 
              << "And activate terminal retro effect from terminal settings (appearence).";
    std::cout << "\nThe game will proceed in a few seconds...";
    Sleep(5000);

    int width_terminal, height_terminal;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    width_terminal = csbi.srWindow.Right - csbi.srWindow.Left + 1;    // Get terminal height and width
    height_terminal = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;    // For the centering of the output
    int half_height_screen = height_terminal / 2;
    int half_width_screen = width_terminal / 2;

    bool quit = false;    // The exit method for the main loop

    int fodder_size = half_width_screen - (table_size_x/2);
    char fodder[fodder_size];    // Fodder for centering the table
    loadFodder(fodder, fodder_size);    // Load fodder with spacers
    loadTable();      // Load table with arena
    loadDangers();    // Load table with interactive? dangers   -\_{'_'}_/-
    addStory();       // Load story points

    while(!quit) {    // Main game loop   
        clear();
        drawTable(half_width_screen, half_height_screen, fodder);
        //debugShowTable(hiddenTable);    //For testing |-=('_')=-|
        movePlayer(quit, height_terminal, width_terminal);
    }

    clear();
    return 0;
}