#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream newfile;
    ofstream outfile; // Used if outputting to .txt file for easy submission

    cout << "RGB\n256\n256\n";

    int file[512][512];
    int bPix[256][256]; // For some reason i need this even though it has no bearing on the code

    // Transferring data from .txt file (I removed commas for ease) and storing in a 512x512 array
    newfile.open("zgerald_easyForm.txt", ios::in);
    if (newfile.is_open()){
        string tp;

        for (int i = 0; i < 512; i++){
            for (int j = 0; j < 512; j++){
                if (newfile >> tp) {
                    file[i][j] = std::stoi(tp);
                }
            }
        }
        newfile.close();
    }

    outfile.open("PartB RGB Format.txt"); // Used if outputting to .txt file for easy submission
    outfile << "RGB\n256\n256\n"; // Used if outputting to .txt file for easy submission

    // Outputting in format needed
    for (int r = 0; r < 256; r++){
        for (int s = 0; s < 256; s++)
        {
            // Used if outputting to .txt file for easy submission
            outfile << file[r*2-1][s*2-1] << " " << (file[r*2-1][s*2]+file[r*2][s*2-1])/2 << " " << file[r*2][s*2] << "\n"; // Used if outputting to .txt file for easy submission
            cout << file[r*2-1][s*2-1] << " " << (file[r*2-1][s*2]+file[r*2][s*2-1])/2 << " " << file[r*2][s*2] << "\n";
        }
        
    }
    outfile.close(); // Used if outputting to .txt file for easy submission
    return 0;

}