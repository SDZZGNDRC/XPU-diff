#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

uint64_t bytes2uint(char* bytes)
{
	uint64_t a = *(uint64_t*)bytes;
	return a;
}

int main(){
	ifstream in("./bin.temp", ios::in|ios::binary);
	char *buffer;
	unsigned int size, l, m;
	l = in.tellg();
	in.seekg(0, ios::end);
	m = in.tellg();
	size = m - l;
	buffer = (char *)malloc(size); 
	auto temp = buffer;
	in.seekg(0, ios::beg);
	in.read(buffer, size);
	uint64_t mbase, msize, total = 0;
	while(true)
	{
		mbase = bytes2uint(buffer);
		msize = bytes2uint(buffer+8);
		//cout << hex << mbase << endl;
		//cout << hex << msize << endl;
		for(uint64_t i = 0; i < msize; i++){
			cout << hex << setw(2) << setfill('0') << (int) static_cast <unsigned char>(*(buffer+16+i)) << ' ';
		}
		cout << endl << endl;
		buffer = buffer+16+msize;
		total = total + 16 + msize;
		if(total >= size){
			break;
		}
	}
	//in >> buffer;
	/*
	cout << hex << bytes2uint(buffer) << endl;
	cout << hex << bytes2uint(buffer+8) << endl;
	for(int i = 0; i < size; i++){
		cout << hex << setw(2) << setfill('0') << (int) static_cast <unsigned char>(buffer[i]) << ' ';
	}*/
	cout << endl;
	in.close();
	delete temp;
	return 0;
}
