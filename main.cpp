//Ryo Ekka Saputra - A11.2022.14447
//PERTEMUAN KE 8 SOAL KE 2
// ALPRO 17 MEI 2023
#include <iostream>
#include <vector>

using namespace std;
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
