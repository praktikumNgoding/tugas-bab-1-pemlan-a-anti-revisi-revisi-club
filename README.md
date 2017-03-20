#include <iostream>
using namespace std;

class Buku{
private:
    string kategori;
    string penulis;
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
		filsafat[0].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		filsafat[1].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		filsafat[2].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		filsafat[3].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		filsafat[4].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		cout << "Daftar Buku Filsafat :" << endl;

		for (int i = 0; i < sizeof(filsafat) / sizeof(Buku); i++) {
			cout << "\nDaftar ke-" << i + 1 << endl;
			filsafat[i].Display();}}

	void bukuAgama() {
		Buku agama[5];
		agama[0].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		agama[1].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		agama[2].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		agama[3].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		agama[4].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		cout << "\nDaftar Buku Agama :" << endl;

		for (int i = 0; i < sizeof(agama) / sizeof(Buku); i++) {
			cout << "\nDaftar yang ke-" << i + 1 << endl;
			agama[i].Display();}}

	void bukuTeknologi() {
		Buku teknologi[5];
		teknologi[0].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		teknologi[1].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		teknologi[2].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		teknologi[3].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		teknologi[4].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		cout << "\nDaftar Buku Teknologi :" << endl;

		for (int i = 0; i < sizeof(teknologi) / sizeof(Buku); i++) {
			cout << "\nDaftar yang ke-" << i + 1 << endl;
			teknologi[i].Display();}}

	void bukuSejarah() {
		Buku sejarah[5];
		sejarah[0].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		sejarah[1].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		sejarah[2].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		sejarah[3].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		sejarah[4].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		cout << "\nDaftar Buku Sejarah :" << endl;

		for (int i = 0; i < sizeof(sejarah) / sizeof(Buku); i++) {
			cout << "\nDaftar yang ke-" << i + 1 << endl;
			sejarah[i].Display();}}

	void bukuPsikologi() {
		Buku psikologi[5];
		psikologi[0].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		psikologi[1].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		psikologi[2].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		psikologi[3].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		psikologi[4].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		cout << "\nDaftar Buku Psikologi :" << endl;

		for (int i = 0; i < sizeof(psikologi) / sizeof(Buku); i++) {
			cout << "\nDaftar yang ke-" << i + 1 << endl;
			psikologi[i].Display();}}

	void bukuPolitik() {
		Buku politik[5];
		politik[0].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		politik[1].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		politik[2].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		politik[3].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		politik[4].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		cout << "\nDaftar Buku Politik :" << endl;

		for (int i = 0; i < sizeof(politik) / sizeof(Buku); i++) {
			cout << "\nDaftar yang ke-" << i + 1 << endl;
			politik[i].Display();}}

	void bukuFiksi() {
		Buku fiksi[5];
		fiksi[0].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		fiksi[1].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		fiksi[2].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		fiksi[3].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		fiksi[4].isiBuku("ini judul", "ini penulis", 20, "ini penerbit");
		cout << "\nDaftar Buku Fiksi :" << endl;

		for (int i = 0; i < sizeof(fiksi) / sizeof(Buku); i++) {
			cout << "\nDaftar yang ke-" << i + 1 << endl;
			fiksi[i].Display();}}
