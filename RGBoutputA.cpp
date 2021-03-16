#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream newfile;
    newfile.open("zgerald_easyForm.txt", ios::in);

    cout << "RGB\n512\n512\n";

    int m = 1;
    int o = 0;

    if (newfile.is_open()){
        string tp;

        for (int i = 0; i < 256; i++){
            
            while (o == 0){

                for (int j = 0; j < 512; j++){
                
                    if (m % 2 != 0){ // ODDS - BLUE ROW 1   
                    
                        if (newfile >> tp) {
                            cout << "0 0 " << tp << "\n";
                        }

                        m++;
                    } else { // EVENS - GREEN ROW 1
                    
                        if (newfile >> tp) {
                            cout << "0 " << tp << " 0\n";
                        }

                        m++;
                    }
                }
                o++;
            }

            while (o != 0) {

                for (int k = 0; k < 512; k++){
                
                    if (m % 2 != 0){
                    
                        if (newfile >> tp) {
                            cout << "0 " << tp << " 0\n"; // GREEN ROW 2
                        }

                        m++;
                    } else {
                    
                        if (newfile >> tp) {
                            cout << tp << " 0 0\n"; // RED ROW 2
                        }

                        m++;
                    }
                }   
                o--;
            }
            

            
        }

        newfile.close();
    }
}