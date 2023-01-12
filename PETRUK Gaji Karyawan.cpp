#include <iostream>
#include <string> 
using namespace std;
main ()
{
	string nama [10];
	int jum,gol [10], kerja [10], lembur[10];
	int pokok [10],glembur[10],tunj [10],pajak [10], pajaklembur [10],total [10],gajibersih [10];
	
	cout<<"\t\t\t\t\t\t===Program Hitung Gaji Karyawan==="<<endl;
	cout<<endl;
	
	cout<<"Masukan Jumlah Karyawan :";
	cin>>jum;
	cout<<"===============================================";
	cout<<endl;
	

		for (int i=1;i<=jum;i++)
     	{
     		
			cout<<"Karyawan Ke-"<<i<<endl;
			cout<<"Masukan Nama			:";
			cin>>nama[i];
			cout<<"Masukan Golongan		:";
			cin>>gol[i];
			cout<<"Masukan Jumlah Jam Kerja :";
			cin>>kerja[i];
			cout<<endl;
	   

			switch(gol[i])
			{
				case 1:
					//cout<<"Golongan I"<<endl;
					pokok [i]=1000000;
					tunj[i]=250000;
					break;
				
				case 2:
					//cout<<"Golongan II"<<endl;
					pokok [i]=2000000;
					tunj[i]=300000;
					break;
				
				case 3:
					//cout<<"Golongan III"<<endl;
					pokok [i]=3000000;
					tunj[i]=350000;
					break;
				
				case 4:
					//cout<<"Golongan IV"<<endl;
					pokok [i]=4000000;
					tunj[i]=400000;
					break;
				default :
					pokok[i]=0;
					tunj[i]=0;
			}
			
			if ( kerja [i]>173){
				lembur[i]=kerja[i]-173;
			}
			else{
				lembur[i]=0;
			}
			
			glembur[i]=lembur[i]*20000;
			pajak [i]=0.05*pokok[i];
			pajaklembur[i]=0.05*glembur[i];
			total[i]=pajak[i]+pajaklembur[i];
			gajibersih[i]=(pokok[i]+tunj[i]+glembur[i])-total[i];
			cout<<endl;
		
			}
			
			
		cout<<"\t\tTotal Gaji Karyawan"<<endl;
		cout<<"================================================"<<endl;
		for(int i=1;i<=jum;i++)
		{
			if(kerja [i]<173){
				cout<<"Karyawan Ke-"<<i<<endl;
				cout<<"notice! anda tidak berhak menerima gaji"<< endl;
				cout<<endl;
			}
			
			else{
				cout<<"Karyawan Ke-"<<i<<endl;
				cout<<"Nama 				:"<<nama[i]<<endl;
				cout<<"Gaji Pokok			:Rp."<<pokok[i]<<endl;
				cout<<"Gaji Lembur			:Rp."<<glembur[i]<<endl;
				cout<<"Pajak Gaji Pokok		:Rp."<<pajak[i]<<endl;
				cout<<"Pajak Lembur			:Rp."<<pajaklembur[i]<<endl;
				cout<<"Total Pajak			:Rp."<<total[i]<<endl;
				cout<<"Tunjangan Pengabdian	:Rp."<<tunj[i]<<endl;
				cout<<"Gaji Yang Diterima	:Rp."<<gajibersih[i]<<endl;
				cout<<endl;
			}
		}
}

