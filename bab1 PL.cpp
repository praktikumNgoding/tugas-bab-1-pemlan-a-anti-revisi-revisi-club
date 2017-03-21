#include <iostream>
using namespace std;

class Buku{
private:
    string kategori;
    string penulis;
    string penerbit;
    string judul;
    int halaman;

public:
    void idBuku(string judul, string penulis, int halaman, string penerbit) {
		this->judul = judul;
		this->penulis = penulis;
		this->penerbit = penerbit;
		this->halaman = halaman;}

    void Display(){
		cout << "Judul Buku : " << this->judul << endl;
		cout << "Penulis : " << this->penulis << endl;
		cout << "Penerbit : " << this->penerbit << endl;
		cout << "Banyak Halaman : " << this->halaman << endl;}
};

	void bukuFilsafat() {
		Buku filsafat[5];
		filsafat[0].idBuku("The Structure of Scientific Revolution", "Thomas Kuhn", 284, "University of Chicago Press");
		filsafat[1].idBuku("Filsafat Manusia", "Zainal Abidin", 262, "Rosda");
		filsafat[2].idBuku("Sejarah Filsafat Barat", "Bertrand Russel", 1110, "Pustaka Belajar");
		filsafat[3].idBuku("Filsafat Politik", "Henry J. Schmandt", 660, "Pustaka Belajar");
		filsafat[4].idBuku("Filsafat Pendidikan Al-Ghazali", "Prof. Drs. Shafique Ali Khan", 178, "Pustaka Setia");
		cout << "Daftar Buku Filsafat : " << endl;

		for (int i = 0; i < sizeof(filsafat) / sizeof(Buku); i++) {
			cout << "\nDaftar ke-" << i + 1 << endl;
			filsafat[i].Display();}}

	void bukuAgama() {
		Buku agama[5];
		agama[0].idBuku("Sejarah Pemikiran Islam", "M. Amin Nurdin", 312, "Amzah");
		agama[1].idBuku("Quantum Ridha", "M. Khalid Sabit", 357, "Amzah");
		agama[2].idBuku("Kamus Ilmu Nahwu & Sharaf Edisi 2", "Imam Saiful Mu'min ", 346, "Amzah");
		agama[3].idBuku("Fiqh Jinayah", "Dr. H.M. Nurul Irfan, M.Ag", 234, "Amzah");
		agama[4].idBuku("Ilmu Pendidikan Islam", "Sri Minarti", 270, "Amzah");
		cout << "\nDaftar Buku Agama :" << endl;

		for (int i = 0; i < sizeof(agama) / sizeof(Buku); i++) {
			cout << "\nDaftar buku ke-" << i + 1 << endl;
			agama[i].Display();}}

	void bukuTeknologi() {
		Buku teknologi[5];
		teknologi[0].idBuku("Ensiklopedi Alam Semesta", "Dr. Mike Goldsmith", 52, "Puspa Swara");
		teknologi[1].idBuku("Benarkah Matahari Mengelilingi Bumi?", "Rahmat Abdullah", 488, "Erlangga");
		teknologi[2].idBuku("Buku Pintar Tuneup dan Hacking", "Andi", 98, "Wahana Komputer");
		teknologi[3].idBuku("KUPAS TUNTAS ADOBE AFTER EFFECT CS6", " Madcoms", 120, "Penerbit Andi");
		teknologi[4].idBuku("SEMANTIC SEARCH PENCARIAN BERDASARKAN KONTEN", "Riyanarto Sarno", 228, " Penerbit Andi");
		cout << "\nDaftar Buku Teknologi :" << endl;

		for (int i = 0; i < sizeof(teknologi) / sizeof(Buku); i++) {
			cout << "\nDaftar buku ke-" << i + 1 << endl;
			teknologi[i].Display();}}

	void bukuSejarah() {
		Buku sejarah[5];
		sejarah[0].idBuku("Orientalisme", "Edward W. Said", 558, "Pustaka Belajar");
		sejarah[1].idBuku("KUMPULAN GENDHING-GENDHING LAN LAGON DOLANAN KI NARTA SABDA jilid 3", " Gatot Sasminto", 116, "Cendrawasih");
		sejarah[2].idBuku("CATHETAN NONTON WAYANG 2", " ML. sabar Sabdo", 86, "Cendrawasih");
		sejarah[3].idBuku("PRIMBON GENDHING UMBUL DONGA ISI GENDHING-GENDHING JAWI KINA ASLI NGEWRAT", " - ", 124, "Cendrawasih");
		sejarah[4].idBuku("Kearifan Budaya dalam Kata", "F.X. Rahyono", 209, "Wedatama Widya Sastra");
		cout << "\nDaftar Buku Sejarah :" << endl;

		for (int i = 0; i < sizeof(sejarah) / sizeof(Buku); i++) {
			cout << "\nDaftar buku ke-" << i + 1 << endl;
			sejarah[i].Display();}}

	void bukuPsikologi() {
		Buku psikologi[5];
		psikologi[0].idBuku("Psikologi Olahraga", "Apta Mylsidayu", 100, "Bumi Aksara");
		psikologi[1].idBuku("DINAMIKA KEPRIBADIAN (PSIKONINAMIK)", "Drs. Ujam Jaenudin, M.Si", 90, "Pustaka Setia");
		psikologi[2].idBuku("PSIKOLOGI PENDIDIKAN", "Dr. Nyayu Khodijah, S.Ag., M.Si", 336, "Rajawali Pers");
		psikologi[3].idBuku("PSIKOLOGI REMAJA PERKEMBANGAN PESERTA DIDIK", "Mohammad Ali", 450, "Bumi Aksara");
		psikologi[4].idBuku("PSIKOLOGI SOSIAL", "Dr. Bambang Syamsul Arifin, M.Si", 470, "Pustaka Setia");
		cout << "\nDaftar Buku Psikologi :" << endl;

		for (int i = 0; i < sizeof(psikologi) / sizeof(Buku); i++) {
			cout << "\nDaftar buku ke-" << i + 1 << endl;
			psikologi[i].Display();}}

	void bukuPolitik() {
		Buku politik[5];
		politik[0].idBuku("Desentralisasi Fiskal", "Wahyudi Kumorotomo", 426, "Kencana");
		politik[1].idBuku("Birokrasi Pemerintah di Era Reformasi", "Miftah Thoha", 142, "Kencana");
		politik[2].idBuku("Ensiklopedi Pemikiran Sosial Modern Edisi 2", "William Outhwaite", 1096, "Kencana");
		politik[3].idBuku("Perbandingan Kekuasaan Presiden Indonesia Setelah Perubahan UUD 1945 dengan 8 Negara Maju", "Abdul Ghoffar", 476, "Kencana");
		politik[4].idBuku("Merayakan Kemajemukan dan Kebebasan", "M. Dawam Raharjo", 336, "Kencana");
		cout << "\nDaftar Buku Politik :" << endl;

		for (int i = 0; i < sizeof(politik) / sizeof(Buku); i++) {
			cout << "\nDaftar buku ke-" << i + 1 << endl;
			politik[i].Display();}}

	void bukuFiksi() {
		Buku fiksi[5];
		fiksi[0].idBuku("The Alchemist", "Paulo Coelho", 298, "HarperCollins");
		fiksi[1].idBuku("Animal Farm", "George Orwell", 338, "Kencana");
		fiksi[2].idBuku("The Da Vinci Code", "Dan Brown", 295, "Kencana");
		fiksi[3].idBuku("The Hobbit", "J.R.R Tolkien", 190, "Dalai Lama");
		fiksi[4].idBuku("Black Beauty", "Anna Sewell", 145, "Dalai Lama");
		cout << "\nDaftar Buku Fiksi :" << endl;

		for (int i = 0; i < sizeof(fiksi) / sizeof(Buku); i++) {
			cout << "\nDaftar buku ke-" << i + 1 << endl;
			fiksi[i].Display();}}


int main(){
    int pilihan;

    cout<< "Perpustakaan Muncul Jaya"<<endl;
    cout<< "Daftar Genre Buku"<<endl;
    cout<< "1.Filsafat"<<endl;
    cout<< "2.Agama"<<endl;
    cout<< "3.Teknologi"<<endl;
    cout<< "4.Sejarah"<<endl;
    cout<< "5.Psikologi"<<endl;
    cout<< "6.Politik"<<endl;
    cout<< "7.Fiksi"<<endl;
    cout<< "8.Exit"<<endl<<endl;
    cout<< "Masukkan Pilihan : ";
    cin>>pilihan;
    
    switch(pilihan){
    	case 1 :
    		bukuFilsafat(); break;
    	case 2 :
    		bukuAgama(); break;
    	case 3 :
    		bukuTeknologi(); break;
        case 4 :
    		bukuSejarah(); break;
        case 5 :
    		bukuPsikologi(); break;	
	    case 6 :
    		bukuPsikologi(); break;
		case 7 :
    		bukuFiksi(); break;
		case 8 :
    		cout<< "GoodBye"; break;		
	}
	return 0;



}
