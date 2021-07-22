#include <iostream>
#include <string>

using namespace std;

void convert(int number){
  int result = number;
  int mod = number;
  string tmp;
  string binarycode;
  
  do
    {
    result = result / 2;
 
    mod = mod % 2;

    tmp = to_string(mod);
    
    binarycode.insert(0, tmp);

    mod = result;
    }while(result != 0);
    
    cout << binarycode << endl;
}

int main(void)
{

    convert(111);
    return 0;


}