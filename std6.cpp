#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class nilai {
  public:
  string dosen, matkul;
  int nilai, min, max, rata_rata, i, batas;
  int A[];
  void input_matkuldosen();
  void input_nilai();
  void nilaimin_max_rata();
};

void nilai::input_matkuldosen()
{
	string dosen, matkul;
  cout<<"Nama Dosen : ";cin>>dosen;
  cout<<"Nama Matkul : ";cin>>matkul;
}
void nilai::input_nilai()
{
	int batas;
  int angka[batas];
  cout<<"MAsukkan batas :";cin>>batas;
  for(int i=0; i<batas; i++){
    cout<<"Masukkan nilai mahasiswa ke- "<<i<<":";
    cin>>angka[i];
    cout<<"Nilai mahasiswa ke-"<<i<<" : "<<angka[i]<<endl;
}
}
void nilai::nilaimin_max_rata(){

  int max, min,j,batas;
  int array[j];
  max=array[j];
  min=array[j];
  for (int j=0; j<batas; j++){
  if(array[j] > max){
    max=array[j];
  cout<<"nilai maksimum : "<<max<<endl;
  }
  if(array[j] < min){
    min=array[j];
    cout<<"nilai minimum : "<<min<<endl;
  }
  }
}
  
  int main(){
  nilai mk;
  mk.input_matkuldosen();
  mk.input_nilai();
  mk.nilaimin_max_rata();
  
  return 0;
}
 
