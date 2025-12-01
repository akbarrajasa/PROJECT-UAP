#include <ncurses/curses.h>
#include <string>
using namespace std;

int main()
{

    initscr();

    curs_set(0);

    int max_y;
    int max_x;

    getmaxyx(stdscr, max_y, max_x);

    int posisiJudulx = (max_x - 114) / 2;
    int posisiJuduly = max_y / 2;

    mvprintw(posisiJuduly - 2, posisiJudulx, "    ___   _____ ____  ____  _____     __ __ ______    __    __________      ___________ _________    ____  ______");
    mvprintw(posisiJuduly - 1, posisiJudulx, "   /   | / ___// __ \\/ __ \\/ ___/    / //_//  _/ /   / /   / ____/ __ \\    / ____/ ___// ____/   |  / __ \\/ ____/");
    mvprintw(posisiJuduly, posisiJudulx, "  / /| | \\__ \\/ / / / / / /\\__ \\    / ,<   / // /   / /   / __/ / /_/ /   / __/  \\__ \\/ /   / /| | / /_/ / __/   ");
    mvprintw(posisiJuduly + 1, posisiJudulx, " / ___ |___/ / /_/ / /_/ /___/ /   / /| |_/ // /___/ /___/ /___/ _, _/   / /___ ___/ / /___/ ___ |/ ____/ /___   ");
    mvprintw(posisiJuduly + 2, posisiJudulx, "/_/  |_/____/_____/\\____//____/   /_/ |_/___/_____/_____/_____/_/ |_|   /_____//____/\\____/_/  |_/_/   /_____/   ");

    // Posisi awal teks
    int x = max_x / 2;
    int y = max_y;
    int panah;

    // Mengaktifkan mode input mentah (menerima input apa adanya)
    raw();

    // Mengaktifkan penangkapan tombol khusus seperti panah
    keypad(stdscr, TRUE);

    // Mencegah karakter yang ditekan muncul di layar
    noecho();

    // Loop untuk menangani input dan pergerakan
    while ((panah = getch()) != 'q') // kita nunggu input ibarat cin biasa
    {
        // Membersihkan layar setiap kali pergerakan terjadi

        clear();
        refresh();
        mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'q' untuk keluar.");

        // Memeriksa tombol yang ditekan dan memperbarui posisi
        switch (panah)
        {
        case KEY_UP:
            y = (y > 0) ? y - 1 : y; // Mencegah keluar dari batas atas
            break;                   // Bergerak ke atas

        case KEY_DOWN:
            y = (y < LINES - 1) ? y + 1 : y; // Mencegah keluar dari batas bawah
            break;                           // Bergerak ke bawah

        case KEY_LEFT:
            x = (x > 0) ? x - 1 : x; // Mencegah keluar dari batas kiri
            break;                   // Bergerak ke kiri

        case KEY_RIGHT:
            x = (x < COLS - 1) ? x + 1 : x; // Mencegah keluar dari batas kanan
            break;                          // Bergerak ke kanan
        }

        // menampilkan x pada posisi (y,x)
        mvprintw(y, x, "&");

        // Meng-update tampilan
        refresh();
    }

    refresh();

    clear();

    endwin();

    return 0;
}