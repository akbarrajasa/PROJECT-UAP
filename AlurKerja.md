# Alur Kerja Program

## Opening
1. Program melakukan inisialisasi ncurses
2. Program mengaktifkan fungsi nodelay supaya musuh tetap jalan walau kita belum input
3. Posisi awal karakter pemain di garis paling bawah (Start)
4. Musuh musuh ditaruh di koordinat awal mereka masing masing

## Looping
> Program akan terus ngelooping jika nyawa > 0 dan player tidak menekan tombol Q

1. Baca Input
   *Program ngecek apakah ada tombol yang dipencet
   *Kalau ada (Arah keyboard), Posisi pemain (Koordinat X,Y) terus diupdate
   *Kalau tidak ada, Pemain diam tapi program lanjut terus

2. Gerakan Musuh
   *Setiap musuh posisinya selalu digeser sesuai dengan koordinat Y nya masing masing
   *Kalau musuh jalan mentok sampai ke ujung kanan, maka dia dipindah ke ujung kiri (begitupun sebaliknya)

3. Cek tabrakan
   *Program ngecek apakah koordinat X dan Y pemain sama dengan koordinat musuh
   *Jika sama, nyawa berkurang dan posisi karakter pemain reset ke awal (start)
   *Jika tidak, maka permainan terus berlanjut

4. Cek Kondisi Menang
   *Program ngecek apakah posisi pemain sudah berada di koordinat Y paling atas
   *Jika sudah, maka Permainan selesai dan program ngeprint "YOU WIN"

5. Cek Kondisi Kalah
   *Program ngecek apakah nyawa masih > 0
   *Jika tidak, maka looping berhenti, permainan selesai, dan program ngeprint "YOU LOSE"
