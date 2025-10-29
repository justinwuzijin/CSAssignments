#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){
    double employeeCount;
    double percentJunior;
    double percentSenior;
    double percentAdmin;

    double pencilPerBox = 25;
    double penPerBox = 10;
    double correctionFluidPerBottle = 200;

    cout <<"Please enter the company employee count: " << endl;
    cin >> employeeCount;
    cout <<"You entered " << employeeCount << "." << endl;

    cout <<"Please enter the percentage of employee that are junior engineer: " << endl;
    cin >> percentJunior;
    cout <<"You entered " << percentJunior << "." << endl;

    cout <<"Please enter the company employee count: " << endl;
    cin >> percentSenior;
    cout <<"You entered " << percentSenior << "." << endl;

    percentAdmin = 100 - (percentJunior + percentSenior);
    double totalJunior = employeeCount * (percentJunior/100);
    double totalSenior = employeeCount * (percentSenior/100);
    double totalAdmin = employeeCount * (percentAdmin/100);

    double totalPencils = (totalJunior * 8) + (totalAdmin * 2) + (totalSenior * 5);
    double totalPens = (totalJunior * 7) + (totalAdmin * 6) + (totalSenior * 3);
    double totalCorrectionFluid = (totalJunior * 60) + (totalAdmin * 40) + (totalSenior * 12);

    //make these values round up if decimal value
    double pencilBoxes = ceil(totalPencils / pencilPerBox);
    double penBoxes = ceil(totalPens / penPerBox);
    double correctionFluidBoxes = ceil(totalCorrectionFluid / correctionFluidPerBottle);

    cout <<"You will need: " << endl << "- " << pencilBoxes << " pencil boxes" << endl
    << "- "<< penBoxes << " pen boxes" << endl << "- " << correctionFluidBoxes << " correction fluid boxes";
    return 0;

}