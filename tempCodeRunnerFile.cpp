int main() 
{
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    // panggil prosedur input
    inputData(berat, tinggi);

    // hitung BMI
    bmi = hitungBMI(berat, tinggi);

    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status : " << statusBMI(bmi) << endl;

    return 0;
}//selesai