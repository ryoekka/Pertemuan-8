//MUHAMMAD AKMAL - A11.2022.14462
//PERTEMUAN KE 8 SOAL KE 1
// ALPRO 17 MEI 2023
#include <iostream>
#include <vector>

using namespace std;
void cari_genap_terkecil(const std::vector<int>& deret){
    int nilai_genap_terkecil = -1;
    int index_genap_terkecil = -1;

    for (int i=0; i<deret.size(); i++){
        if(deret[i]%2==0){
            if(nilai_genap_terkecil == -1 || deret[i] < nilai_genap_terkecil){
                nilai_genap_terkecil = deret[i];
                index_genap_terkecil = i;
            }
        }
    }
    if(index_genap_terkecil == -1){
        cout << "tidak ada nilai genap dalam deret." << endl;
    } else {
    cout << "nilai genap terkecil : " << nilai_genap_terkecil << endl;
    cout << "index nilai genap terkecil : " << index_genap_terkecil << endl;
    }
}

int main()
{
    std::vector<int> deret = {6,7,4,3,2};

    cari_genap_terkecil(deret);

    return 0;
}
