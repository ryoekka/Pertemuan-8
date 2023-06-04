//RYO EKKA SAPUTRA - A11.2022.14447
//PERTEMUAN KE 8
// ALPRO 17 MEI 2023
#include <iostream>
#include <vector>

using namespace std;
void cari_genap_terkecil(const vector<int>& deret){
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

void bubbleshort(vector<int>& deret){
    int n = deret.size();
    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(deret[j] < deret[j+1]){
                swap(deret[j], deret[j+1]);
            }
        }
    }
}
void selectionsort(vector<int>&deret){
    int n= deret.size();
    for (int i=0; i<n-1; i++){
        int maksindex=i;
        for(int j=i+1; j<n; j++){
            if(deret[j]>deret[maksindex]){
                maksindex=j;
            }
        }
        swap(deret[maksindex], deret[i]);
    }
}

int main()
{
    vector<int> deret = {6,7,4,3,2};

    cari_genap_terkecil(deret);

    vector<int> deret {5,4,3,2,2,1,1};

    bubbleshort(deret);
    cout << "hasil bubblesort : ";
    for(int nilai: deret){
        cout << nilai << " ";
    }
    cout <<  endl;

    deret = {5,4,3,2,2,1,1};
    selectionsort(deret);
    cout << "hasil selection sort : ";
     for(int nilai: deret){
        cout << nilai << " ";
    }
     cout <<  endl;

    return 0;
}
