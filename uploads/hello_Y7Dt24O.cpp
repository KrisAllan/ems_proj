#include <iostream>
#include <fstream>
using namespace std;

int main(){
int n = 0;
ifstream data;
data.open("a.in");
data >> n;
for(int i = 0; i < n - 1; i++){
	cout<<"Hello World"<<endl;
}

data.close();
return 0;

}
