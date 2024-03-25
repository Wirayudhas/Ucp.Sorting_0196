//Type A
// soal 1
// menggunakan huruf "i" sebagai index array dan "j"
//sebagai penunjuk dari nilai dalam array setelah itu
//mengurutkan dari yang terkecil hingga terbesar dengan perbandingan
//antara temporary dan j dimulai index 0
//
//soal 2
//membandingkan nilai minimum pada temporary,
//jika nilai lebih besar dari nilai minimum maka akan
//terjadi swap jika lebih kecil dari nilai index
//maka tidak terjadi swap
//
//soal 3
//menggunakan penambahan varible "j" dengan rumus j = n - 1

#include <iostream>
using namespace std;

int arr[20];                                           //deklarasi variable
int n;

void input() {                                         //memasukan prosedur input
	while (true) {
		cout << "masukan jumlah data: ";
		cin >> n;
		
		if (n <= 96) {
			break;
		}
		else 
		{
			cout << "\nArray yang anda masukan lebih dari 20\n";
		}

		
	}
	cout << endl;                                                  //menampilkan output dari prosedur input
	cout << "====================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) 
	{
		cout << "data ke " << (i + 1) << ": ";
		cin >> arr[i];

	}
}
void selectionsort() {                                      // menambhakan prosedur selectionsort
	
	int arthur, gerald;
	int temp;

	for (arthur = 1; arthur <= n - 1; arthur++) {

		temp = arr[arthur];
		gerald = arthur - 1;

		while (gerald >= 0 && arr[gerald] < temp)
		{
			arr[gerald + 1] = arr[gerald];
			gerald--;
		}

		arr[gerald + 1] = temp;
		cout << "\nPass" << arthur << ": ";
		for (int k = 0; k < n; k++)
		{
			cout << arr[k] << " ";
		}

	}



}
void display() {                                              //menambahkan prosedur display untuk menampilkan hasil sorting
	cout << endl;
	cout << "================================" << endl;
	cout << "elemen array yang telah tersusun" << endl;
	cout << "================================" << endl;

	for (int gerald = 0; gerald < n; gerald++) {
		cout << arr[gerald] << endl;
	}
	cout << endl;
}
int main() {                                               //memanggil semua prosedur yang telah di buat
	input();
	selectionsort();
	display();
}