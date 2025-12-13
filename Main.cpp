# include <ncurses/curses.h>
# include <windows.h>
# include <string>
using namespace std;

int max_y = 0, max_x = 0;
int musuh2 = 50;
int musuh3 = 0;
int musuh4 = 0;
int musuh5 = 0;

void buatBingkai(int tinggi, int lebar) {
    
        for (int y = 0; y < tinggi; y++) {
        mvaddch(y, 0, '|');           
        mvaddch(y, lebar - 1, '|');   
    }

    for (int x = 0; x < lebar; x++) {
        mvprintw(0, x, "=");           
        mvprintw(tinggi - 1, x, "=");  
    }
}

void RombonganMobil() {
 
    musuh2 = musuh2+1;    
if (musuh2 >= max_x) {
    musuh2 = 0;
}


    attron(COLOR_PAIR(1));
    mvprintw(max_y - 13, musuh2, "                                                         _________________________   ");
    mvprintw(max_y - 12, musuh2, "                    /\\\\      _____          _____       |   |     |     |    | |  \\  ");
    mvprintw(max_y - 11, musuh2, "     ,-----,       /  \\\\____/__|__\\_    ___/__|__\\___   |___|_____|_____|____|_|___\\ ");
    mvprintw(max_y - 10, musuh2, "  ,--'---:---`--, /  |  _     |     `| |      |      `| |                    | |    \\ ");
    mvprintw(max_y - 9,  musuh2, " ==(o)-----(o)==J    `(o)-------(o)=   `(o)------(o)'   `--(o)(o)--------------(o)--' ");
    attroff(COLOR_PAIR(1));
}

void Pesawat() {
 
    musuh3 = musuh3+1;    
if (musuh3 >= max_x) {
    musuh3 = 0;
}


    attron(COLOR_PAIR(1));
    mvprintw(max_y - 30, musuh3, "            ______");
    mvprintw(max_y - 29, musuh3, "            _\\ _~-\\___");
    mvprintw(max_y - 28, musuh3, "    =  = ==(____AA____D");
    mvprintw(max_y - 27, musuh3, "                \\_____\\___________________,-~~~~~~~`-.._");
    mvprintw(max_y - 26, musuh3, "                /     o O o o o o O O o o o o o o O o  |\\_");
    mvprintw(max_y - 25, musuh3, "                `~-.__        ___..----..                  )");
    mvprintw(max_y - 24, musuh3, "                      `---~~\\___________/------------`````");
    mvprintw(max_y - 23, musuh3, "                      =  ===(_________D");
    attroff(COLOR_PAIR(1));
}

void MobilPribadi() {
 
    musuh4 = musuh4-1;    
if (musuh4 <= 0) {
    musuh4 = max_x;
}

    attron(COLOR_PAIR(1));
    mvprintw(max_y - 21, musuh4, "                                  @");
    mvprintw(max_y - 20, musuh4, "               (__)    (__) _____/");
    mvprintw(max_y - 19, musuh4, "            /| (oo) _  (oo)/----/_____    *");
    mvprintw(max_y - 18, musuh4, "  _o\\______/_|\\_\\/_/_|__\\/|____|//////== *- * * -");
    mvprintw(max_y - 17, musuh4, " /_________   \\   00 |   00 |       /== -* * -");
    mvprintw(max_y - 16, musuh4, "[_____/^^\\_____\\_____|_____/^^\\_____]     *- * -");
    mvprintw(max_y - 15, musuh4, "      \\__/                 \\__/");
    attroff(COLOR_PAIR(1));
}

void KeretaMalam() {
 
    musuh5 = musuh5-1;    
if (musuh5 <= 0) {
    musuh5 = max_x;
}

    attron(COLOR_PAIR(1));
    mvprintw(max_y - 37, musuh5, "       o x o x o x o . . .");
    mvprintw(max_y - 36, musuh5, "     o      _____            _______________ ___=====__T___");
    mvprintw(max_y - 35, musuh5, "   .][__n_n_|DD[  ====_____  |    |.\\/.|   | |   |_|     |_");
    mvprintw(max_y - 34, musuh5, "  >(________|__|_[_________]_|____|_/\\_|___|_|___________|_|");
    mvprintw(max_y - 33, musuh5, "  _/oo OOOOO oo`  ooo   ooo   o^o       o^o   o^o     o^o");
    attroff(COLOR_PAIR(1));
}


int main () {

initscr();
curs_set(0);
start_color();
init_pair(1, COLOR_RED, COLOR_BLACK);
init_pair(2, COLOR_GREEN, COLOR_BLACK);
init_pair(3, COLOR_MAGENTA,COLOR_BLACK);
init_pair(4, COLOR_CYAN,COLOR_BLACK);
init_pair(5, COLOR_YELLOW,COLOR_BLACK);

getmaxyx(stdscr, max_y, max_x);
int posisiJudulx = (max_x-61)/2;
int posisiJuduly = max_y/2;
int posisiMenangx = (max_x-76)/2;
int posisiMenangy = max_y/2;
int posisiScorey = max_y/2;
int posisiScorex = (max_x-38)/2;
int posisiKalahx = (max_x-94)/2;

    musuh4 = max_x-49;
    musuh5 = max_x/2-30; 

    attron(COLOR_PAIR(1));
mvprintw(posisiJuduly - 2, posisiJudulx, " _       _____  ______________  __  ____  __  ______________");
mvprintw(posisiJuduly - 1, posisiJudulx, "| |     / /   |/_  __/ ____/ / / / / __ \\/ / / /_  __/ / / /");
mvprintw(posisiJuduly,     posisiJudulx, "| | /| / / /| | / / / /   / /_/ / / / / / / / / / / / / / / ");
mvprintw(posisiJuduly + 1, posisiJudulx, "| |/ |/ / ___ |/ / / /___/ __  / / /_/ / /_/ / / / /_/_/_/  ");
mvprintw(posisiJuduly + 2, posisiJudulx, "|__/|__/_/  |_/_/  \\____/_/ /_/  \\____/\\____/ /_/ (_|_|_)   ");
    attroff(COLOR_PAIR(1));
    refresh();
    getch();
    clear();

int Loadingx =(max_x-20)/2;
int Loadingy = max_y/2;

    for(int i = 0; i < 2; i++){
        mvprintw(Loadingy-1, Loadingx, "Loading...");
        mvprintw(Loadingy, Loadingx, "--------------------"); 
        mvprintw(Loadingy+1, Loadingx, "|                  |");
        mvprintw(Loadingy+2, Loadingx, "--------------------");

        attron(COLOR_PAIR(2));
        for (int f = 1; f < 18; f++){
            mvprintw(Loadingy + 1, Loadingx + f, ">");
            refresh(); 
            Sleep(200); 
        }
        attroff(COLOR_PAIR(2));
    }
        refresh();

    int x = max_x/2; 
    int y = max_y-1; 
    int panah;
    int score = 0;
    int nyawa = 3;

    raw();
    keypad(stdscr, TRUE);
    noecho();
    nodelay(stdscr, TRUE); 

    while ((panah = getch()) != 'q')
    {

        clear();
        refresh();
        attron(COLOR_PAIR(2));
        buatBingkai(max_y, max_x);
        attroff(COLOR_PAIR(2));
        attron(COLOR_PAIR(3));
        string scoreTemp = to_string(score);
        mvprintw(3, 2, "Score: ");
        mvprintw(3, 9, scoreTemp.c_str());
        string nyawaTemp = to_string(nyawa);
        mvprintw(3, max_x-20, "Heart: ");
        mvprintw(3, max_x-10, nyawaTemp.c_str());
        mvprintw(1, 2, "[ || ]  [ > ]  [ <))) ]");
        mvprintw(max_y-5, 2, " .-. ___|");
        mvprintw(max_y-4, 2, " |=|/     /  \\ ");      
        mvprintw(max_y-3, 2, " | |__|^^_|");     
        mvprintw(max_y-2, 2, " ||[X]|_|");    
        attroff(COLOR_PAIR(3));
        
        switch (panah)
        {
        case KEY_UP:
            if (y > 0){
                score = score + 10;
            }
            y = (y > 0) ? y - 1 : y; 
    
            break;                   

        case KEY_DOWN:
            if (y < LINES - 1){

            score = score - 10;
            }
            y = (y < LINES - 1) ? y + 1 : y; 

            break;                          

        case KEY_LEFT:
            x = (x > 0) ? x - 1 : x; 
            break;                   

        case KEY_RIGHT:
            x = (x < COLS - 1) ? x + 1 : x; 
            break;                          

        }


        flushinp();
        attron(COLOR_PAIR(5));
        mvprintw(y, x, "\\ (^_^) /");
        attroff(COLOR_PAIR(5));
        RombonganMobil();
        Pesawat();
        MobilPribadi();
        KeretaMalam();
         
        if (score == 400) {
            
            nodelay(stdscr, FALSE);  
            clear(); 

            attron(COLOR_PAIR(2));
mvprintw(posisiMenangy - 2, posisiMenangx, "_    _  _    _    _     _    _    _  _  .   .  _ ");
mvprintw(posisiMenangy - 1, posisiMenangx, "\\   \\  /   / /  __  \\  |  |  |  |    \\   \\  /  \\  /   / |  | |  \\ |  | |  |");
mvprintw(posisiMenangy,     posisiMenangx, " \\   \\/   / |  |  |  | |  |  |  |     \\   \\/    \\/   /  |  | |   \\|  | |  |");
mvprintw(posisiMenangy + 1, posisiMenangx, "  \\_    _/  |  |  |  | |  |  |  |      \\            /   |  | |  . `  | |  |");
mvprintw(posisiMenangy + 2, posisiMenangx, "    |  |    |  `--'  | |  `--'  |       \\    /\\    /    |  | |  |\\   | |__|");
mvprintw(posisiMenangy + 3, posisiMenangx, "    ||     \\/   \\/         \\/  \\/     || || \\| ()");
            attroff(COLOR_PAIR(2));
            
            refresh(); 
            
            getch(); 
          
                clear();
    attron(COLOR_PAIR(5));
    mvprintw(posisiScorey-8, posisiScorex, "   ____");
    mvprintw(posisiScorey-7, posisiScorex, " / \\                             \\."); 
    mvprintw(posisiScorey-6, posisiScorex, "|   |                            |.");
    mvprintw(posisiScorey-5, posisiScorex, " \\_ |                            |.");
    mvprintw(posisiScorey-4, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey-3, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey-2, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey-1, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey,   posisiScorex, "    |                            |.");
    mvprintw(posisiScorey+1, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey+2, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey+3, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey+4, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey+5, posisiScorex, "    |                            |.");
    mvprintw(posisiScorey+6, posisiScorex, "    |   ___|_");
    mvprintw(posisiScorey+7, posisiScorex, "    |  /                           /.");
    mvprintw(posisiScorey+8, posisiScorex, "    \\/\\___/.");
    attroff(COLOR_PAIR(5));
    attron(COLOR_PAIR(2));
    mvprintw(posisiScorey-1, posisiScorex+10, "   GOOD JOB!!!  ");
    attroff(COLOR_PAIR(2));
    attron(COLOR_PAIR(4));
    mvprintw(posisiScorey+1, posisiScorex+10, "  HIGH SCORE :  400  ");
    attroff(COLOR_PAIR(4));

            refresh(); 
            getch(); 

    break;

