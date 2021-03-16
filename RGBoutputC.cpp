#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream newfile;
    ofstream outfile; // Used if outputting to .txt file for easy submission

    cout << "RGB\n511\n511\n";

    int array[512][512];
    //int bPix[256][256]; // For some reason i need this even though it has no bearing on the code

    // Transferring data from .txt file (I removed commas for ease) and storing in a 512x512 array
    newfile.open("zgerald_easyForm.txt", ios::in);
    if (newfile.is_open()){
        string tp;

        for (int i = 0; i < 512; i++){
            for (int j = 0; j < 512; j++){
                if (newfile >> tp) {
                    array[i][j] = std::stoi(tp);
                }
            }
        }
        newfile.close();
    }

    outfile.open("PartC RGB Format.txt"); // Used if outputting to .txt file for easy submission
    outfile << "RGB\n511\n511\n"; // Used if outputting to .txt file for easy submission

    int var = 0;
    // Outputting in format needed
    for (int r = 0; r < 511; r++){
        if (r % 2 == 0){
            for (int s = 0; s < 511; s++)
            {
                if (var % 2 == 0)
                {
                    outfile << array[r+1][s+1] << " " << (array[r+1][s]+array[r][s+1])/2 << " " << array[r][s] << "\n"; // 1st Cluster
                    
                    var++;
                } else {
                    outfile << array[r+1][s] << " " << (array[r][s]+array[r+1][s+1])/2 << " " << array[r][s+1] << "\n"; // 2nd Cluster

                    var++;
                }
                
            }
        } else {
            for (int s = 0; s < 511; s++)
            {
                if (var % 2 != 0)
                {
                    outfile << array[r+1][s+1] << " " << (array[r+1][s]+array[r][s+1])/2 << " " << array[r][s] << "\n"; // 1st Cluster
                    
                    var++;
                } else {
                    outfile << array[r+1][s] << " " << (array[r][s]+array[r+1][s+1])/2 << " " << array[r][s+1] << "\n"; // 2nd Cluster

                    var++;
                }
                
            }
        }
        
    }
    outfile.close(); // Used if outputting to .txt file for easy submission
    return 0;

}