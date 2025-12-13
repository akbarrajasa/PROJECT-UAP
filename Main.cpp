   // menampilkan x pada posisi (y,x)
        mvprintw(y, x, "&");

        // menampilkan musuh 
        mvprintw(max_y / 2 - 1, musuh1, "Sigma");
        mvprintw(max_y / 2 + 1, musuh2, "Skibidi")

        // Meng-update tampilan
        refresh();

        // delay
        usleep(80000);
    }

    refresh();

    clear();

    endwin();

    return 0;
}
